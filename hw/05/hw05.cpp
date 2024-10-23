#include "hw05f.hpp"

int main() {

  BookInfo bookArray[10] = {};
  size_t size = 0;

  bool exit = false;

  do {
    exit = menu(bookArray, size);
  } while (!exit);
}
