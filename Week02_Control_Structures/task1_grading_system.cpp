// Week 2 - Task 1: Grading System (if-else ladder)
#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    double marks;

    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter exam marks (0-100): ";
    cin >> marks;

    char grade;
    // if-else ladder: checks from the highest band downwards
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks. Please enter a value between 0 and 100.\n";
        return 1;
    } else if (marks >= 70) {
        grade = 'A';
    } else if (marks >= 60) {
        grade = 'B';
    } else if (marks >= 50) {
        grade = 'C';
    } else if (marks >= 40) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    cout << "\nStudent Name: " << studentName << "\n";
    cout << "Marks       : " << marks << "\n";
    cout << "Grade       : " << grade << "\n";
    return 0;
}
