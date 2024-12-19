#include "hw07f.hpp"
#include "nodes.hpp"
#include <iostream>

void showBook(Book &book) {
    std::cout << "ISBN: " << book.ISBN << "\n"
              << "Author: " << book.author << "\n"
              << "Title: " << book.title << "\n\n";
}
