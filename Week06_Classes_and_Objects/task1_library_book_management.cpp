// Week 6 - Task 1: Library Book Management System
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copiesAvailable;

public:
    // Input book details from the user
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin >> ws, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter number of copies available: ";
        cin >> copiesAvailable;
    }

    // Reduce available copies when a book is borrowed
    void borrowBook() {
        if (copiesAvailable > 0) {
            copiesAvailable--;
            cout << "Book borrowed successfully.\n";
        } else {
            cout << "Sorry, no copies available to borrow.\n";
        }
    }

    void displayDetails() const {
        cout << "\n--- Book Details ---\n";
        cout << "Title            : " << title << "\n";
        cout << "Author           : " << author << "\n";
        cout << "Copies available : " << copiesAvailable << "\n";
    }
};

int main() {
    Book book;

    book.inputDetails();          // input
    book.displayDetails();        // show initial details
    cout << "\nBorrowing a book...\n";
    book.borrowBook();            // borrow
    book.displayDetails();        // show updated details
    return 0;
}
