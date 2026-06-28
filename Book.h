#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book
{
private:

    int id;
    string title;
    string author;
    bool available;


public:

    Book();

    Book(int id, string title, string author);


    void input();

    void display() const;


    int getId() const;

    string getTitle() const;

    string getAuthor() const;


    bool isAvailable() const;


    void borrowBook();

    void returnBook();

};

#endif
