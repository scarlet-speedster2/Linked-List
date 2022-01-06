all: clist main

clist: clist.c
	gcc clist.c 

main: main.c
	gcc main.c -o circular

clean: 
	rm -r *.o

