#include <iostream>
#include "Library.h"

using namespace std;


void showMenu()
{
    cout << "\n========== Library Management System ==========\n";

    cout << "1. Add Book\n";
    cout << "2. Display Books\n";
    cout << "3. Search Book\n";
    cout << "4. Delete Book\n";
    cout << "5. Borrow Book\n";
    cout << "6. Return Book\n";
    cout << "7. Sort Books By Title\n";
    cout << "8. Exit\n";

    cout << "==============================================\n";

    cout << "Enter your choice: ";
}



int main()
{

    Library library;

    int choice;
    int id;


    do
    {

        showMenu();

        cin >> choice;


        switch(choice)
        {

        case 1:

            library.addBook();

            break;



        case 2:

            library.displayBooks();

            break;



        case 3:

            cout << "Enter Book ID: ";
            cin >> id;

            library.searchBook(id);

            break;



        case 4:

            cout << "Enter Book ID: ";
            cin >> id;

            library.deleteBook(id);

            break;



        case 5:

            cout << "Enter Book ID: ";
            cin >> id;

            library.borrowBook(id);

            break;



        case 6:

            cout << "Enter Book ID: ";
            cin >> id;

            library.returnBook(id);

            break;


ٍٍ
        case 7:

            library.sortBooksByTitle();

            break;



        case 8:

            cout << "Exiting Program...\n";

            break;



        default:

            cout << "Invalid Choice\n";

        }


    }while(choice != 8);



    return 0;
}
