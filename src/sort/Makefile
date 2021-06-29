bubble.o: bubble.c bubble.h
	gcc -c bubble.c

main.o: bubble.c bubble.h main.c
	gcc -c main.c

bubble: bubble.o main.o
	gcc ./../tool.o bubble.o main.o -o bubble