IDIR =.
CC=gcc
CFLAGS=-I$(IDIR) -Wall -Wextra -fopenmp

test:
	g++ -o CCC handler.cpp cheatsdef.cpp $(CFLAGS)
	./CCC

