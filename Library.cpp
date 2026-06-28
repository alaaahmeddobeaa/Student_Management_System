#include "Library.h"



void Library::addBook()
{
    Book book;

    book.input();

    books.push_back(book);

    cout << "Book Added Successfully\n";
}



void Library::displayBooks() const
{

    if(books.empty())
    {
        cout << "No Books Available\n";
        return;
    }


    for(int i = 0; i < books.size(); i++)
    {
        books[i].display();
    }

}



void Library::searchBook(int id) const
{

    for(int i = 0; i < books.size(); i++)
    {

        if(books[i].getId() == id)
        {
            cout << "Book Found:\n";
            books[i].display();
            return;
        }

    }


    cout << "Book Not Found\n";

}



void Library::deleteBook(int id)
{

    for(int i = 0; i < books.size(); i++)
    {

        if(books[i].getId() == id)
        {
            books.erase(books.begin() + i);

            cout << "Book Deleted Successfully\n";

            return;
        }

    }


    cout << "Book Not Found\n";

}



void Library::borrowBook(int id)
{

    for(int i = 0; i < books.size(); i++)
    {

        if(books[i].getId() == id)
        {

            if(books[i].isAvailable())
            {
                books[i].borrowBook();

                cout << "Book Borrowed Successfully\n";
            }

            else
            {
                cout << "Book Already Borrowed\n";
            }


            return;
        }

    }


    cout << "Book Not Found\n";

}



void Library::returnBook(int id)
{

    for(int i = 0; i < books.size(); i++)
    {

        if(books[i].getId() == id)
        {
            books[i].returnBook();

            cout << "Book Returned Successfully\n";

            return;
        }

    }


    cout << "Book Not Found\n";

}



void Library::sortBooksByTitle()
{

    for(int i = 0; i < books.size()-1; i++)
    {

        for(int j = 0; j < books.size()-i-1; j++)
        {

            if(books[j].getTitle() > books[j+1].getTitle())
            {
                swap(books[j], books[j+1]);
            }

        }

    }


    cout << "Books Sorted Successfully\n";

}
