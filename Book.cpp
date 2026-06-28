#include "Book.h"


Book::Book()
{
    id = 0;
    title = "";
    author = "";
    available = true;
}


Book::Book(int id, string title, string author)
{
    this->id = id;
    this->title = title;
    this->author = author;
    available = true;
}



void Book::input()
{
    cout << "Enter Book ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, title);


    cout << "Enter Author Name: ";
    getline(cin, author);


    available = true;
}



void Book::display() const
{
    cout << "Book ID: " << id << endl;

    cout << "Title: " << title << endl;

    cout << "Author: " << author << endl;


    if(available)
        cout << "Status: Available" << endl;

    else
        cout << "Status: Borrowed" << endl;


    cout << "----------------------" << endl;
}



int Book::getId() const
{
    return id;
}



string Book::getTitle() const
{
    return title;
}



string Book::getAuthor() const
{
    return author;
}



bool Book::isAvailable() const
{
    return available;
}



void Book::borrowBook()
{
    available = false;
}



void Book::returnBook()
{
    available = true;
}
