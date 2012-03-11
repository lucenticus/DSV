dsv:	ansi-c.l ansi-c.y
	flex ansi-c.l
	bison -d ansi-c.y
	cc -o $@ ansi-c.tab.c -lfl