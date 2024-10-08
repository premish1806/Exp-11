// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;
class Book {
    public:
    string title;
    string author;
    int publicationYear;

    void userInput() {
        cout << "Enter book title: ";
        cin >> title;

        cout << "Enter book author: ";
        cin >> author;

        cout << "Enter publication year: ";
        cin >> publicationYear;
    }

    void displayInfo() {
        cout << "Book details: " << title << " by " << author << " (" << publicationYear <<")"<< endl;
    }
};

int main() {
    Book myBook;
    myBook.userInput();
    myBook.displayInfo();
    return 0;
}
