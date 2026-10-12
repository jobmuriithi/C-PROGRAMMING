// Week 11 - Task 1: Employee Data Protection System (Encapsulation)
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Employee {
private:  // sensitive data cannot be accessed directly from outside
    string name;
    string employeeID;
    double basicSalary;

public:
    void setEmployeeDetails() {
        cout << "Enter employee name: ";
        getline(cin >> ws, name);
        cout << "Enter employee ID: ";
        getline(cin, employeeID);
        cout << "Enter basic salary (KES): ";
        cin >> basicSalary;
    }

    // Net Salary = Basic Salary + 0.10 x Basic Salary
    double calculateSalary() const {
        return basicSalary + 0.10 * basicSalary;
    }

    void displayEmployeeDetails() const {
        cout << fixed << setprecision(2);
        cout << "\n--- Employee Details ---\n";
        cout << "Name        : " << name << "\n";
        cout << "Employee ID : " << employeeID << "\n";
        cout << "Basic Salary: KES " << basicSalary << "\n";
        cout << "Allowance   : KES " << 0.10 * basicSalary << " (10%)\n";
        cout << "Net Salary  : KES " << calculateSalary() << "\n";
    }
};

int main() {
    Employee emp;
    emp.setEmployeeDetails();
    emp.displayEmployeeDetails();
    // emp.basicSalary = 1000;  // would NOT compile: basicSalary is private
    return 0;
}
