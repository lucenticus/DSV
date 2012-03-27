#/usr/bin/bash
#cc -E test.c > test.c.preprocess
#../dsv test.c.preprocess test_out.c test.afs

cc -E test_module.c -D__KERNEL__ -DMODULE -I/usr/src/linux/include -I/usr/src/linux-headers/include/ -I/usr/src/linux-headers/arch/x86/include/ -I/usr/src/linux-headers-`uname -r`/include/ > test_module.c.preprocess
sed -i~ "s/pte_t ((pte_t) { (pteval_t val) } )/pte_t __dsv_fix_wrong_macros(pte_t val)/g" test_module.c.preprocess
sed -i~ "s/pteval_t ((pte_t pte).pte)/pte_t __dsv_fix_wrong_macros(pte_t pte)/g" test_module.c.preprocess
sed -i~ "s/pgd_t ((pgd_t) { (pgdval_t val) } )/pte_t __dsv_fix_wrong_macros(pte_t pte)/g" test_module.c.preprocess
sed -i~ "s/pgdval_t ((pgd_t pgd).pgd)/pte_t __dsv_fix_wrong_macros(pte_t pte)/g" test_module.c.preprocess
sed -i~ "s/pmd_t ((pmd_t) { (pmdval_t val) } )/pte_t __dsv_fix_wrong_macros(pte_t pte)/g" test_module.c.preprocess
sed -i~ "s/pmdval_t ((&pmd_t pmd)->pmd\[0\])/pte_t __dsv_fix_wrong_macros(pte_t pte)/g" test_module.c.preprocess
sed -i~ "s/void do { ({ unsigned long __dummy; typeof(unsigned long f) __dummy2; (void)(&__dummy == &__dummy2); 1; }); local_irq_restore(unsigned long f); } while (0)/pte_t __dsv_fix_wrong_macros(pte_t pte)/g" test_module.c.preprocess

../dsv test_module.c.preprocess test_module_out.c test_module.afs
