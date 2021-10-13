# -*- Makefile -*-

# target: dependencies
#	action

all: make2 make1


make2: make2.o make1.o
	gcc make1.o make2.o -o make2

make2.o: make2.c sample.h
	gcc -c make2.c

make1.o: make1.c
	gcc -c make1.c

make3: make3.o make1.o
	gcc make3.o make1.o -o make3

make3.o: make3.c sample.h
	gcc -c make3.c

clean: 
	del -f *.o make2 make1



