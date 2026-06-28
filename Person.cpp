#include "Person.h"


Person::Person()
{
    id = 0;
    name = "";
}


Person::Person(int id, string name)
{
    this->id = id;
    this->name = name;
}


void Person::input()
{
    cout << "Enter ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);
}


void Person::display() const
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
}


int Person::getId() const
{
    return id;
}


string Person::getName() const
{
    return name;
}


void Person::setName(string name)
{
    this->name = name;
}

