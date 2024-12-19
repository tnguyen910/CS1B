#include "header.hpp"
#include "hw07f.hpp"
#include "nodes.hpp"
#include <iostream>
#include <limits>

void menu(Header &list) {
    int choice;
    do {
        std::cout << "Select from the following options:\n"
                  << "1. Add a book\n"
                  << "2. Delete a book\n"
                  << "3. Display all books\n"
                  << "4. Save and exit\n"
                  << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        switch (choice) {
        case 1: {
            std::string isbn, author, title;
            std::cout << "Enter ISBN: ";
            getline(std::cin, isbn);
            std::cout << "Enter Author: ";
            getline(std::cin, author);
            std::cout << "Enter Title: ";
            getline(std::cin, title);
            addBook(list, Book(isbn, author, title));
            break;
        }
        case 2: {
            std::string title;
            std::cout << "Enter Title of the book to delete: ";
            getline(std::cin, title);
            delBook(list, title);
            break;
        }
        case 3:
            showBooks(list);
            break;
        case 4:
            saveToFile(list, "booksdb.txt");
            std::cout << "Goodbye!\n";
            break;
        default:
            std::cout << "Invalid choice, try again.\n";
        }
    } while (choice != 4);
}
