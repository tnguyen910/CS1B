#ifndef HW05_FN
#include <iostream>

enum MediaType { Hardcover, Paperback, Audiobook, Pdf, Other };

struct BookInfo {

  BookInfo() {
    title = "";
    author = "";
    genre = "";
    price = 0;
    pageCount = 0;
    mediaType = Other;
    isbn = "";
  }
  std::string title;
  std::string author;
  std::string genre;
  double price;
  int pageCount;
  MediaType mediaType;
  std::string isbn;
};

bool menu(BookInfo data[10], size_t size);
void populateBookDB(BookInfo data[10], size_t size);
BookInfo inputBookInfo();
void outputBookInfo(BookInfo data[10], size_t size);
void searchList(BookInfo data[10], size_t size);
void updateList(BookInfo data[10], size_t size);
void saveList(BookInfo data[10], size_t size);

#endif
