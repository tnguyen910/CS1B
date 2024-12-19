#include "header.hpp"
#include "hw07f.hpp"
#include "nodes.hpp"
#include <iostream>

void delBook(Header &list, std::string &title) {
    std::cout << "test";
    Node *current = list.head;
    while (current) {
        if (current->data.title == title) { // Found book
            if (current->prev)
                current->prev->next = current->next;
            if (current->next)
                current->next->prev = current->prev;

            if (current == list.head)
                list.head = current->next; // Update head
            if (current == list.tail)
                list.tail = current->prev; // Update tail

            delete current; // Free memory
            list.rc--;
            return;
        }
        current = current->next;
    }
    std::cout << "Book not found!\n";
}
