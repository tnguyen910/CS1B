#ifndef FUNCTIONS
#define FUNCTIONS
#include "header.hpp"
#include "nodes.hpp"

void addBook(Header &list, const Book &book);
void delBook(Header &list, std::string &title);
void showBooks(Header &list);
void showBook(Book &book);
void saveToFile(Header &list, const std::string &filename);
void popList(Header &list, const std::string &filename);
void menu(Header &list);

#endif // !
