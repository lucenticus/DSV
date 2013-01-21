#/usr/bin/bash

set +e

TARGET_DIR=$1
OUT_DIR=$2
DSV_DIR=$3

TOTAL_FILES=0
PROCESSED_FILES=0
PARSED_FILES=0
ANALYZED_FILES=0

PARSE_ERRORS_LOG="parse_err.log"
function ProcessDir
{
# Process each argument
    for f in "$1"/*
    do
	#echo "Process $f"
	if [ -d "$f" ]; then # Recursively travel the subdir
	    ProcessDir "$f"
	elif [ -a "$f" ]; then # A regular file
	    extension=`echo "$f" | cut -d'.' -f2`
	    if [ $extension == "c" ]; then
		relative_path=`echo ${f#$TARGET_DIR}`
		let TOTAL_FILES=TOTAL_FILES+1
		if grep -q "module_init(" "$f"; then
		    if grep -q "file_operations" "$f"; then
			let PROCESSED_FILES=PROCESSED_FILES+1
			echo "Processing: $relative_path"
			preprocess_file $relative_path
			echo "Total files:$TOTAL_FILES processed \
files:$PROCESSED_FILES parsed:$PARSED_FILES analyzed:$ANALYZED_FILES"
		    fi
		fi
	    fi
	fi 
    done
}

function preprocess_file 
{   
    work_dir="$OUT_DIR$1"
    orig_file="$TARGET_DIR$1"
    work_file=$(basename "$orig_file")
    mkdir -p $work_dir
    cp $orig_file $work_dir
    pp_file="$work_dir/pp_$work_file"
    errors_file="$work_dir/errors.pp.log"
    out_file="$work_dir/out_$work_file"
    afs_file="$work_dir/$work_file.afs"
    sem_file="$work_dir/$work_file.sem"

    cc -E $orig_file -D__KERNEL__ -DMODULE -DCONFIG_SMP -I/usr/src/linux/include -I/usr/src/linux-headers/include/ -I/usr/src/linux-headers/arch/x86/include/ -I/usr/src/linux-headers-`uname -r`/include/ >$pp_file 2>$errors_file
    sed -i~ "s/proc_handler *proc_handler/proc_handler *proc_h/g" $pp_file
    
    sed -i~ "s/pte_t ((pte_t) { (pteval_t val) } )/pte_t __dsv_fix_wrong_macros(pte_t val)/g" $pp_file
    sed -i~ "s/pteval_t ((pte_t pte).pte)/pte_t __dsv_fix_wrong_macros(pte_t pte)/g" $pp_file
    sed -i~ "s/pgd_t ((pgd_t) { (pgdval_t val) } )/pte_t __dsv_fix_wrong_macros(pte_t pte)/g" $pp_file
    sed -i~ "s/pgdval_t ((pgd_t pgd).pgd)/pte_t __dsv_fix_wrong_macros(pte_t pte)/g" $pp_file
    sed -i~ "s/pmd_t ((pmd_t) { (pmdval_t val) } )/pte_t __dsv_fix_wrong_macros(pte_t pte)/g" $pp_file
    sed -i~ "s/pmdval_t ((&pmd_t pmd)->pmd\[0\])/pte_t __dsv_fix_wrong_macros(pte_t pte)/g" $pp_file
    sed -i~ "s/void do { ({ unsigned long __dummy; typeof(unsigned long f) __dummy2; (void)(&__dummy == &__dummy2); 1; }); local_irq_restore(unsigned long f); } while (0)/pte_t __dsv_fix_wrong_macros(pte_t pte)/g" $pp_file
    sed -i~ "s/{ \.lock = (spinlock_t) { \.raw_lock = { }, }, \.count = val, \.wait_list = { &((\*sem)\.wait_list), &((\*sem)\.wait_list) }, }/__dsv_fix_lock/g" $pp_file
    sed -i~ "s/__attribute__((section(\"\.data\" \"\"))) __typeof__(struct acpi_processor \*) per_cpu__processors;/struct acpi_processor \*__dsv_fix;/g" $pp_file
    sed -i~ "s/DECLARE_EARLY_PER_CPU(u16, .*);/;/g" $pp_file
    rm $pp_file~
    $DSV_DIR/dsv $pp_file $out_file $afs_file $orig_file>>$errors_file 2>&1
    if [ "$?" -ne "0" ]; then
	echo "Can't parse file: $work_dir/$work_file" 
	echo "------------------------------------" >> $PARSE_ERRORS_LOG
	echo "File: $work_dir/$work_file" >> $PARSE_ERRORS_LOG
	tail $out_file -n 30 >> $PARSE_ERRORS_LOG
    else
	cp $afs_file $DSV_DIR/afs
	let PARSED_FILES=PARSED_FILES+1
	
	$DSV_DIR/afs2reqs $afs_file $sem_file --log >> $errors_file 2>&1
	if [ "$?" -ne "0" ]; then
	    echo "Can't analyze file: $afs_file" 
	else
	    let ANALYZED_FILES=ANALYZED_FILES+1
	fi
    fi 
}

set -e

CURR_PATH=`pwd`
cd $DSV_DIR
if [ -f dsv ]; then
    rm dsv
fi
make

if [ -f ../AFS2REQS/afs2reqs ]; then
    cd ../AFS2REQS
    rm afs2reqs
    make
    cp afs2reqs $CURR_PATH
    cd $CURR_PATH
fi

cd $CURR_PATH 

if [ -d $DSV_DIR/afs ]; then
    rm -R $DSV_DIR/afs
fi

mkdir $DSV_DIR/afs

if [ -d $OUT_DIR ]; then
    rm -R $OUT_DIR
fi

if [ -f $PARSE_ERRORS_LOG ]; then
    rm $PARSE_ERRORS_LOG
fi
set +e
ProcessDir $TARGET_DIR
#
