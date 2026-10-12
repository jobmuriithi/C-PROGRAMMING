// Week 3 - Task 1: Payroll System Using Functions
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const double RATE_PER_HOUR = 500.0;  // overtime rate in KES per hour

// Prompts for employee details (values returned through reference parameters)
void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours) {
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter basic salary (KES): ";
    cin >> basicSalary;
    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
}

// Overtime Pay = Overtime Hours x Rate Per Hour
double calculateOvertimePay(double overtimeHours) {
    return overtimeHours * RATE_PER_HOUR;
}

// Net Salary = Basic Salary + Overtime Pay
double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

void displayPayslip(const string &name, double basicSalary, double overtimeHours,
                    double overtimePay, double netSalary) {
    cout << fixed << setprecision(2);
    cout << "\n=========== PAYSLIP ===========\n";
    cout << left << setw(18) << "Employee Name:" << name << "\n";
    cout << left << setw(18) << "Basic Salary:" << "KES " << basicSalary << "\n";
    cout << left << setw(18) << "Overtime Hours:" << overtimeHours << "\n";
    cout << left << setw(18) << "Rate Per Hour:" << "KES " << RATE_PER_HOUR << "\n";
    cout << left << setw(18) << "Overtime Pay:" << "KES " << overtimePay << "\n";
    cout << "-------------------------------\n";
    cout << left << setw(18) << "NET SALARY:" << "KES " << netSalary << "\n";
    cout << "===============================\n";
}

int main() {
    string name;
    double basicSalary, overtimeHours;

    getEmployeeDetails(name, basicSalary, overtimeHours);
    double overtimePay = calculateOvertimePay(overtimeHours);
    double netSalary = calculateNetSalary(basicSalary, overtimePay);
    displayPayslip(name, basicSalary, overtimeHours, overtimePay, netSalary);
    return 0;
}
