// Week 13 - Task 1: Store borrowed book titles in borrowed_books.txt
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string title;

    cout << "Enter the title of the borrowed book: ";
    getline(cin, title);

    // ios::app appends to the file, so existing records are NOT deleted
    ofstream outFile("borrowed_books.txt", ios::app);
    if (!outFile) {
        cerr << "Error: could not open borrowed_books.txt\n";
        return 1;
    }

    outFile << title << "\n";
    outFile.close();

    cout << "Title \"" << title << "\" was successfully stored in borrowed_books.txt\n";
    return 0;
}
