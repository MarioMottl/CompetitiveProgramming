IDIR =.
CC=gcc
CFLAGS=-I$(IDIR) -Wall -Wextra -fopenmp

test:
	g++ -o main.o handler.cpp cheatsdef.cpp $(CFLAGS)
	./main.o

