// Week 1 - Task 2: Driving Test Result Evaluation System
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string studentName;
    double theoryMarks, practicalMarks;

    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter theory test marks: ";
    cin >> theoryMarks;
    cout << "Enter practical test marks: ";
    cin >> practicalMarks;

    // Average Score = (Theory + Practical) / 2
    double average = (theoryMarks + practicalMarks) / 2;

    cout << fixed << setprecision(2);
    cout << "\n------ DRIVING TEST RESULT ------\n";
    cout << "Student Name   : " << studentName << "\n";
    cout << "Theory Marks   : " << theoryMarks << "\n";
    cout << "Practical Marks: " << practicalMarks << "\n";
    cout << "Average Score  : " << average << "\n";
    // Pass mark is 50 and above
    cout << "Result         : " << (average >= 50 ? "PASSED" : "FAILED") << "\n";
    return 0;
}
