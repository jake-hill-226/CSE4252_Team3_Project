CC = g++
Debug = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall -lncurses $(DEBUG)

../Bin/BookReader: ../Source/BookReader.cpp
	$(CC) $(LFLAGS) -o  ../Bin/BookReader ../Source/BookReader.cpp

../Obj/BookReader.o: ../Source/BookReader.cpp
	$(CC) $(CFLAGS) -o  ../Obj/BookReader.o ../Source/BookReader.cpp

../Obj/Book.o : ../Source/Book.cpp
	$(CC) $(CFLAGS) -o  ../Obj/Book.o ../Source/Book.cpp	

