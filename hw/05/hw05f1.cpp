#include "hw05f.hpp"
#include <ios>
#include <limits>

bool menu(int bookData[10]) {
  std::cout << " ----- Menu ----- \n";
  std::cout << "1. Add a Book\n";
  std::cout << "2. Modify a Book\n";
  std::cout << "3. Show Book Info\n";
  std::cout << "4. Search Book Title\n";
  std::cout << "5. Save Data to A File\n";
  std::cout << "0. Quit Program\n";
  std::cout << "\n";
  std::cout << "Input a number: ";

  int input = 0;
  std::cin >> input;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  switch (input) {
  case 1:
    //
    break;

  case 2:
    //
    break;

  case 3:
    //
    break;

  case 4:
    //
    break;

  case 5:
    //
    break;

  case 0:
    //
    break;

  default:
    std::cout << "Invalid Input! Try again\n";
    break;
  }
}
