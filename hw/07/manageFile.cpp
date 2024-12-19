#include "header.hpp"
#include "hw07f.hpp"
#include "nodes.hpp"
#include <fstream>
#include <iostream>

void saveToFile(Header &list, const std::string &filename) {
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "Failed to open file.\n";
        return;
    }
    Node *current = list.head;
    while (current) {
        file << current->data.ISBN << "\n"
             << current->data.author << "\n"
             << current->data.title << "\n\n";
        current = current->next;
    }
    file.close();
}

void popList(Header &list, const std::string &filename) {
    std::ifstream file(filename);
    if (!file)
        return; // if no file start with empty list
    std::string isbn, author, title;
    while (getline(file, isbn) && getline(file, author) &&
           getline(file, title)) {
        addBook(list, Book(isbn, author, title));
        file.ignore(); // ignore the empty line
    }
    file.close();
}
