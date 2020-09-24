CC=g++
CFLAGS=-I -O3

wyvern: main.cpp
	$(CC) -o output main.cpp $(CFLAGS)
