#include "header.hpp"
#include "hw07f.hpp"

int main() {
    Header list;
    popList(list, "booksdb.txt");
    menu(list);
}
