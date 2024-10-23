#include <iostream>
#ifndef FUNCTIONS

enum mediaType { Hardcover, Paperback, Audiobook, Pdf };

struct BookInfo {

    char title[40];
    char author[40];
    char genre[20];
    double price;
    int pageCount;
    mediaType mediaType;
    long int isbn;
};

void menu();
void populateBookDB(int data[10]);
void inputBookInfo(int data[10]);
void outputBookInfo(int data[10]);
void searchList(int data[10]);
void updateList(int data[10]);
void saveList(int data[10]);
void

#endif
