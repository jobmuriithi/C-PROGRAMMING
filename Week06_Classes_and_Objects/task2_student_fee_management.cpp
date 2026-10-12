// Week 6 - Task 2: Student Fee Management System
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudent() {
        cout << "Enter student name: ";
        getline(cin >> ws, name);
        cout << "Enter admission number: ";
        getline(cin, admissionNumber);
        cout << "Enter fee balance (KES): ";
        cin >> feeBalance;
    }

    // Reduce the fee balance when a payment is made
    void makePayment(double amount) {
        if (amount <= 0) {
            cout << "Invalid payment amount.\n";
        } else if (amount > feeBalance) {
            cout << "Payment exceeds the fee balance. Payment rejected.\n";
        } else {
            feeBalance -= amount;
            cout << "Payment of KES " << amount << " received.\n";
        }
    }

    void displayStatus() const {
        cout << fixed << setprecision(2);
        cout << "\n--- Student Fee Status ---\n";
        cout << "Name             : " << name << "\n";
        cout << "Admission Number : " << admissionNumber << "\n";
        cout << "Fee Balance      : KES " << feeBalance << "\n";
    }
};

int main() {
    Student student;
    student.inputStudent();
    student.displayStatus();

    double payment;
    cout << "\nEnter payment amount (KES): ";
    cin >> payment;
    student.makePayment(payment);

    student.displayStatus();
    return 0;
}
