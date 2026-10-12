// Week 2 - Task 2: Admission Decision (Nested if)
#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int age;
    double score;

    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter exam score: ";
    cin >> score;

    string decision;
    // Nested if: age is checked first, then the score
    if (age >= 18) {
        if (score >= 50) {
            decision = "Admitted";
        } else {
            decision = "Not Admitted: Low Score";
        }
    } else {
        decision = "Not Admitted: Underage";
    }

    cout << "\nStudent  : " << studentName << "\n";
    cout << "Decision : " << decision << "\n";
    return 0;
}
