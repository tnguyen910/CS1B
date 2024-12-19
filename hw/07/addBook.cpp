#include "header.hpp"
#include "hw07f.hpp"
#include "nodes.hpp"

void addBook(Header &list, const Book &book) {
    Node *newNode = new Node(book);
    if (list.head == nullptr) {
        list.head = list.tail = newNode;
    } else {
        list.tail->next = newNode;
        newNode->prev = list.tail;
        list.tail = newNode;
    }
    list.rc++;
}
