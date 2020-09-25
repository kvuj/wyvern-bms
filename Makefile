CC 		:= g++
CFLAGS		:= -O3 -std=c++17 -lSDL2

CXX 		:= $(CC)
CXXFLAGS 	:= $(CFLAGS)

wyvern: main.cpp
	$(CC) -o output main.cpp bmsmap.hpp $(CFLAGS)
