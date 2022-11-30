#This is a makefil

CC = clang
CFLAGS = -c -Wall #-Wno-unused-command-line-argument

OBJ = runfile

all: $(OBJ)

$(OBJ): conversion.o main.o
	$(CC) conversion.o main.o -o $(OBJ)

conversion.o: conversion.c
	$(CC) $(CFLAGS) conversion.c
main.o: main.c
	$(CC) $(CFLAGS) main.c

exec:
	./runfile
clean:
	rm -rf func
	rm -rf *.deb
	rm -rf *.o
	rm ./runfile
