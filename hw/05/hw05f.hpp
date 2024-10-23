#ifndef HW05_FN
#include <iostream>

enum mediaType { Hardcover, Paperback, Audiobook, Pdf };

struct BookInfo {

  char title[40];
  char author[40];
  char genre[20];
  double price;
  int pageCount;
  mediaType mediaType;
  long int isbn;
};

bool menu(BookInfo data[10]);
void populateBookDB(BookInfo data[10]);
void inputBookInfo(BookInfo data[10]);
void outputBookInfo(BookInfo data[10]);
void searchList(BookInfo data[10]);
void updateList(BookInfo data[10]);
void saveList(BookInfo data[10]);

#endif
