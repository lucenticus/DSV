dsv:	parser-c.l parser-c.y dsv.c afs.c
	flex parser-c.l
	bison -d -v parser-c.y
	cc -o $@ parser-c.tab.c afs.c -lfl -g