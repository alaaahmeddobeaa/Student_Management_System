#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <vector>
#include "Book.h"

using namespace std;


class Library
{

private:

    vector<Book> books;


public:

    void addBook();

    void displayBooks() const;

    void searchBook(int id) const;

    void deleteBook(int id);

    void borrowBook(int id);

    void returnBook(int id);

    void sortBooksByTitle();

};

#endif
