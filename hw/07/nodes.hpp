#ifndef NODES
#define NODES
#include <string>

struct Book {
    std::string ISBN;
    std::string author;
    std::string title;

    Book(std::string i, std::string a, std::string t)
        : ISBN(i), author(a), title(t){};
};

struct Node {

    Book data;
    Node *next;
    Node *prev;

    Node(const Book b) : data(b){};
};

#endif
