#This is a makefile comment

CC = gcc
CFLAGS = -Wall
OBJ = main

all:
	$(CC) $(CFLAGS) library.c main.c -o $(OBJ)

library.o: library.c
	$(CC) $(CFLAGS) library.c


exec:
	./$(OBJ)

clean:
	rm -rf m
