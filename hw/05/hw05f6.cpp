#include "hw05f.hpp"
#include <limits>

BookInfo selectBook(BookInfo bookInfo[10], size_t &size) {

  std::cout << "List of books: \n";

  for (int i = 0; i < size; ++i) {
    std::cout << i + 1 << ": " << bookInfo[i].title << "\n";
    //
  }

  std::cout << "Choose a book: ";

  int input = 0;
  bool validInput = false;
  do {
    std::cin >> input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (input < 1 || input > size) {
      std::cout << "Invalid Input!\n";
    } else {
      input = input - 1; // Convert to array index
      validInput = true;
    }
  } while (!validInput);

  return bookInfo[input];
}

void updateList(BookInfo bookInfo[10], size_t &size) {

  BookInfo book = selectBook(bookInfo, size);

  printBookInfo(book);

  std::cout << "Update book with new information.\n";
  book = inputBookInfo();

  std::cout << "Book Updated\n";
}
