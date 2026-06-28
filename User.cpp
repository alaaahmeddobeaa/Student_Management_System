#include "User.h"


User::User()
{
    borrowedBooks = 0;
}


User::User(int id, string name) : Person(id, name)
{
    borrowedBooks = 0;
}


void User::input()
{
    Person::input();

    cout << "Enter Borrowed Books: ";
    cin >> borrowedBooks;
}


void User::display() const
{
    Person::display();

    cout << "Borrowed Books: "
         << borrowedBooks << endl;

    cout << "----------------------" << endl;
}


int User::getBorrowedBooks() const
{
    return borrowedBooks;
}


void User::borrowBook()
{
    borrowedBooks++;
}


void User::returnBook()
{
    if(borrowedBooks > 0)
        borrowedBooks--;
}
