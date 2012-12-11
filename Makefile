dsv:	parser-c.l parser-c.y
	flex parser-c.l
	bison -d -v parser-c.y
	cc -o $@ parser-c.tab.c -lfl -g