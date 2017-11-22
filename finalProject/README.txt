book.cpp
This is a standardized format to import books.  New books should converted to txt doc with chapter titles in line with text.  A dat file is generated at the same time the txt file is and holds data on the layout of the txt file and the reader’s current location in the file.  This class actually creates the book object from the files generated at file import and updates the files when it closes.

BookReader.cpp
This will be the reader console.  Right now, it has the library function built and a function to build a test book.  Use the function to build a test book and you can easily see the format of the txt and dat files.
