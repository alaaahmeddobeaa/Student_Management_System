#ifndef USER_H
#define USER_H

#include "Person.h"

class User : public Person
{
private:

    int borrowedBooks;

public:

    User();

    User(int id, string name);

    void input() override;

    void display() const override;

    int getBorrowedBooks() const;

    void borrowBook();

    void returnBook();
};

#endif
