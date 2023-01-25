# Makefile for "reverse"

all: reverse

test: test-revlib
	./test-revlib

test-revlib: test-revlib.c revlib.o

reverse: reverse.c revlib.o
