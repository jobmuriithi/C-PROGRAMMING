// Week 12 - Task 1: Hospital Management System (Abstraction)
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Abstract class: has a pure virtual function, so it cannot be instantiated
class MedicalStaff {
protected:
    string staffName;
    string staffID;

public:
    MedicalStaff(const string &name, const string &id) : staffName(name), staffID(id) {}

    // Pure virtual function: each type of staff implements its own version
    virtual double calculateSalary() const = 0;

    // Non-virtual function shared by all staff
    void displayDetails() const {
        cout << "Staff Name : " << staffName << "\n";
        cout << "Staff ID   : " << staffID << "\n";
    }

    virtual ~MedicalStaff() {}
};

class Doctor : public MedicalStaff {
private:
    double basicSalary;
    double allowance;

public:
    Doctor(const string &name, const string &id, double basic, double allow)
        : MedicalStaff(name, id), basicSalary(basic), allowance(allow) {}

    // Doctor salary = basic salary + allowance
    double calculateSalary() const override { return basicSalary + allowance; }
};

class Nurse : public MedicalStaff {
private:
    double basicSalary;
    double overtimePay;

public:
    Nurse(const string &name, const string &id, double basic, double overtime)
        : MedicalStaff(name, id), basicSalary(basic), overtimePay(overtime) {}

    // Nurse salary = basic salary + overtime pay
    double calculateSalary() const override { return basicSalary + overtimePay; }
};

int main() {
    cout << fixed << setprecision(2);

    // Base class pointers referring to derived objects
    MedicalStaff *staff1 = new Doctor("Dr. Achieng Otieno", "DR-001", 250000, 50000);
    MedicalStaff *staff2 = new Nurse("Nurse Mary Njeri", "NR-014", 80000, 12000);

    cout << "--- Doctor ---\n";
    staff1->displayDetails();
    cout << "Salary     : KES " << staff1->calculateSalary() << "\n\n";

    cout << "--- Nurse ---\n";
    staff2->displayDetails();
    cout << "Salary     : KES " << staff2->calculateSalary() << "\n";

    delete staff1;
    delete staff2;
    return 0;
}
