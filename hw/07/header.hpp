#ifndef HEADER
#define HEADER
#include "nodes.hpp"
#include <cstddef>

struct Header {
    size_t rc;
    Node *head = nullptr;
    Node *tail = nullptr;

    ~Header() {
        Node *current = head;
        while (current) {
            Node *next = current->next;
            delete current;
            current = next;
        }
    }
};

#endif
