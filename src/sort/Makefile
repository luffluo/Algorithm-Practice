.PHONY: clean

VPATH = ./../../src

bubble: bubble.o main.o tool.o
	gcc ./../tool.o bubble.o main.o -o bubble

tool.o: tool.c tool.h
	gcc -c ./../tool.c -o ./../tool.o

bubble.o: bubble.c bubble.h
	gcc -c bubble.c

main.o: bubble.c bubble.h main.c
	gcc -c main.c

clean:
	rm -r *.o ./../*.o bubble