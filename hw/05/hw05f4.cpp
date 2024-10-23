#include "hw05f.hpp"
#include <iomanip>

void outputBookInfo(BookInfo bookInfo[10], size_t &size) {
  BookInfo book = selectBook(bookInfo, size);

  printBookInfo(book);
}

void printBookInfo(BookInfo book) {

  std::cout << "\n\nTitle: " << book.title << "\n";
  std::cout << "Author: " << book.author << "\n";
  std::cout << "Genre: " << book.genre << "\n";
  std::cout << "Media Type: " << book.mediaType << "\n";
  std::cout << "Page Count: " << book.pageCount << "\n";
  std::cout << "ISBN: " << book.isbn << "\n";
  std::cout << "Price: $" << std::setprecision(2) << book.price << std::endl
            << "\n";
}
