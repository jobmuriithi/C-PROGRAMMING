// Week 9 - Task 1: School Management System (Inheritance)
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        getline(cin >> ws, name);
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPerson() const {
        cout << "Name : " << name << "\n";
        cout << "Age  : " << age << "\n";
    }
};

// Derived class
class Student : public Person {
private:
    string admissionNumber;
    string className;

public:
    void inputStudent() {
        inputPerson();  // inherited input
        cout << "Enter admission number: ";
        getline(cin >> ws, admissionNumber);
        cout << "Enter class: ";
        getline(cin, className);
    }

    void displayStudent() const {
        cout << "\n--- Student Details ---\n";
        displayPerson();  // inherited details
        cout << "Admission Number : " << admissionNumber << "\n";
        cout << "Class            : " << className << "\n";
    }
};

int main() {
    Student student;
    student.inputStudent();
    student.displayStudent();
    return 0;
}
