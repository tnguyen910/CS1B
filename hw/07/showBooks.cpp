#include "header.hpp"
#include "hw07f.hpp"
#include "nodes.hpp"
#include <iostream>

void showBooks(Header &list) {

    Node *current = list.head;
    while (current != 0) {
        showBook(current->data);
        current = current->next;
    }
}
