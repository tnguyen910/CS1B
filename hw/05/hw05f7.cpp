#include "hw05f.hpp"
#include <fstream>
#include <iomanip>
#include <string>

void saveList(BookInfo data[10], size_t &size) {

  srand((unsigned)time(NULL));
  std::string idString = std::to_string(1 + (rand() % 100000));

  std::string fileName = "bookOutput" + idString;

  std::ofstream outfile(fileName);

  if (!outfile.is_open()) {
    std::cerr << "Error opening file!";
    return;
  }

  for (int i = 0; i < size; ++i) {
    BookInfo book = data[i];
    outfile << "Book #" << i + 1 << "\n";
    outfile << "Title: " << book.title << "\n";
    outfile << "Author: " << book.author << "\n";
    outfile << "Genre: " << book.genre << "\n";
    outfile << "Media Type: " << book.mediaType << "\n";
    outfile << "Page Count: " << book.pageCount << "\n";
    outfile << "ISBN: " << book.isbn << "\n";
    outfile << "Price: $" << std::setprecision(2) << book.price << std::endl;
    outfile << "\n\n\n";
  }
}
