CC = g++
Debug = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall -lncurses $(DEBUG)

BookReader : BookReader.o
	$(CC) $(LFLAGS) BookReader.o -o BookReader
	
BookReader.o : BookReader.cpp book.cpp
	$(CC) $(CFLAGS) BookReader.cpp
