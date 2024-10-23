#include "hw05f.hpp"
#include <limits>

size_t selectBook(BookInfo bookInfo[10], size_t &size) {

  std::cout << "List of books: \n";

  for (int i = 0; i < size; ++i) {
    std::cout << i + 1 << ": " << bookInfo[i].title << "\n";
    //
  }

  std::cout << "Choose a book: ";

  size_t input = 0;
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

  return input;
}

void updateList(BookInfo bookInfo[10], size_t &size) {

  size_t bookIndex = selectBook(bookInfo, size);

  printBookInfo(bookInfo[bookIndex]);

  std::cout << "Update book with new information.\n";
  bookInfo[bookIndex] = inputBookInfo();

  std::cout << "Book Updated\n";
}
