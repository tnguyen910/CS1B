#include "hw05f.hpp"

void populateBookDB(BookInfo bookInfo[10], size_t &size) {

  BookInfo currentBook = inputBookInfo();

  bookInfo[size] = currentBook;
  ++size;
}
