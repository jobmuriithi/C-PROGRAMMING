// Week 8 - Task 1: Bank Account System (Constructor & Destructor)
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    string accountNumber;
    double balance;

public:
    // Constructor: initializes all data members
    BankAccount(const string &holder, const string &number, double initialBalance)
        : accountHolder(holder), accountNumber(number), balance(initialBalance) {
        cout << "Account successfully created\n";
    }

    void displayAccount() const {
        cout << fixed << setprecision(2);
        cout << "\n--- Account Details ---\n";
        cout << "Account Holder : " << accountHolder << "\n";
        cout << "Account Number : " << accountNumber << "\n";
        cout << "Balance        : KES " << balance << "\n";
    }

    // Destructor: runs automatically when the object goes out of scope
    ~BankAccount() {
        cout << "Account closed successfully\n";
    }
};

int main() {
    BankAccount account("Jane Wanjiru", "ACC-001-2024", 15000.50);
    account.displayAccount();
    return 0;  // destructor is called here
}
