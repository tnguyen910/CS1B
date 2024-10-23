#include "hw05f.hpp"

// returns the index of where a book is found
int searchList(BookInfo data[10], size_t &size) {
  std::string searchInput = "";
  getline(std::cin, searchInput);

  bool foundbook = false;
  for (size_t i = 0; i < size; i++) {
    if (data[i].title == searchInput || searchInput == data[i].isbn ||
        searchInput == data[i].author) {
      std::cout << data[i].title << " found at index " << i + 1 << "\n";
      return i;
    }
  }

  std::cout << "Book not found";
  return -1;
}
