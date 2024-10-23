#ifndef HW05_FN
#include <iostream>

enum MediaType { Hardcover, Paperback, Audiobook, Pdf, Other };

struct BookInfo {

  BookInfo() {
    title = "";
    author = "";
    genre = "";
    price = 0;
    pageCount = 0;
    mediaType = Other;
    isbn = "";
  }
  std::string title;
  std::string author;
  std::string genre;
  double price;
  int pageCount;
  MediaType mediaType;
  std::string isbn;
};

// Intiate menu/selection
bool menu(BookInfo data[10], size_t &size);

// Intitate adding a new book
void populateBookDB(BookInfo data[10], size_t &size);

// Function to return a new book with inputed info
BookInfo inputBookInfo();

// Show info from a specific book
void outputBookInfo(BookInfo data[10], size_t &size);

// Search list for a book title
void searchList(BookInfo data[10], size_t &size);

// Update information of a specific book
void updateList(BookInfo data[10], size_t &size);

// Save current list to a file.
void saveList(BookInfo data[10], size_t &size);

// Util Funcitons------------

// prints book info
void printBookInfo(BookInfo book);

// Select a book from the list, return book object
BookInfo selectBook(BookInfo data[10], size_t &size);

#endif
