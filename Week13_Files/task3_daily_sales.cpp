// Week 13 - Task 3: Calculate total daily sales from sales.txt
// (The brief says "C program" but the course is C++, so this is written in C++.)
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ifstream inFile("sales.txt");
    if (!inFile) {
        cerr << "Error: could not open sales.txt\n";
        return 1;
    }

    double amount, total = 0;
    int count = 0;

    // Each line holds one transaction amount
    while (inFile >> amount) {
        total += amount;
        count++;
    }

    inFile.close();  // file properly closed after reading

    cout << fixed << setprecision(2);
    cout << "Transactions read : " << count << "\n";
    cout << "Total sales today : KES " << total << "\n";
    return 0;
}
