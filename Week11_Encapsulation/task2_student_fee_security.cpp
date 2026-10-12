// Week 11 - Task 2: Student Fee Security System (Encapsulation)
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Student {
private:  // fee balance can only be changed through makePayment()
    string name;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudentData() {
        cout << "Enter student name: ";
        getline(cin >> ws, name);
        cout << "Enter admission number: ";
        getline(cin, admissionNumber);
        do {
            cout << "Enter fee balance (KES): ";
            cin >> feeBalance;
            if (feeBalance < 0) cout << "Fee balance cannot be negative.\n";
        } while (feeBalance < 0);
    }

    void makePayment(double amount) {
        if (amount <= 0) {
            cout << "Invalid payment amount.\n";
        } else if (amount > feeBalance) {
            cout << "Payment exceeds the outstanding balance. Payment rejected.\n";
        } else {
            feeBalance -= amount;
            cout << "Payment of KES " << amount << " processed successfully.\n";
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
    student.inputStudentData();

    double payment;
    cout << "Enter payment amount (KES): ";
    cin >> payment;
    student.makePayment(payment);

    student.displayStatus();
    // student.feeBalance = 0;  // would NOT compile: feeBalance is private
    return 0;
}
