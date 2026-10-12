// Week 4 - Task 1: Employee Bonus System (for loop)
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 5;
    string names[NUM_EMPLOYEES];
    double salaries[NUM_EMPLOYEES];

    // Input details for 5 employees using a for loop
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "\nEmployee " << (i + 1) << " of " << NUM_EMPLOYEES << "\n";
        cout << "  Enter name: ";
        getline(cin >> ws, names[i]);
        cout << "  Enter basic salary (KES): ";
        cin >> salaries[i];
    }

    // Report: Bonus = 0.05 x Basic Salary, Total = Basic + Bonus
    cout << fixed << setprecision(2);
    cout << "\n================ EMPLOYEE BONUS REPORT ================\n";
    cout << left << setw(15) << "Name" << setw(15) << "Basic Salary"
         << setw(12) << "Bonus" << setw(15) << "Total Salary" << "\n";
    cout << "-------------------------------------------------------\n";
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        double bonus = 0.05 * salaries[i];
        double total = salaries[i] + bonus;
        cout << left << setw(15) << names[i] << setw(15) << salaries[i]
             << setw(12) << bonus << setw(15) << total << "\n";
    }
    return 0;
}
