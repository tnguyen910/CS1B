#include "hw05f.hpp"
#include <iostream>
#include <limits>

template <typename T>

T getInfo(std::string field) {

  std::cout << "Input " << field << ": \n";

  T output = 0;
  std::cin >> output;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  return output;
}

template <>

std::string getInfo<std::string>(std::string field) {

  std::cout << "Input " << field << ": \n";

  std::string output = "";
  getline(std::cin, output);
  return output;
}

MediaType inputMediaType() {
  std::cout << "Choose a Type of Media:\n";
  std::cout << "1. Hardcover";
  std::cout << "2. Paperback\n";
  std::cout << "3. Audiobook \n";
  std::cout << "4. Pdf\n";
  std::cout << "5. Other\n";

  std::cout << "Input: ";

  int input = 0;
  std::cin >> input;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  switch (input) {
  case 1:
    return Hardcover;
  case 2:
    return Paperback;
  case 3:
    return Audiobook;
  case 4:
    return Pdf;
  default:
    return Other;
  }
}

BookInfo inputBookInfo() {

  BookInfo returnBook = BookInfo();

  returnBook.title = getInfo<std::string>("Title");
  returnBook.author = getInfo<std::string>("Author");
  returnBook.pageCount = getInfo<int>("pageCount");
  returnBook.mediaType = inputMediaType();
  returnBook.isbn = getInfo<std::string>("ISBN");
  returnBook.genre = getInfo<std::string>("Genre");

  return returnBook;
}
