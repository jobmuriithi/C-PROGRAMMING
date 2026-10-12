// Helper (not part of the assignment): creates a sample results.dat for testing task2
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Student {
    char name[50];
    char regNumber[20];
    double totalMarks;
};

int main() {
    Student students[3];
    strcpy(students[0].name, "Alice Wambui");  strcpy(students[0].regNumber, "CS/001/2024"); students[0].totalMarks = 78.5;
    strcpy(students[1].name, "Brian Otieno");  strcpy(students[1].regNumber, "CS/002/2024"); students[1].totalMarks = 64.0;
    strcpy(students[2].name, "Cynthia Mutua"); strcpy(students[2].regNumber, "CS/003/2024"); students[2].totalMarks = 91.0;

    ofstream outFile("results.dat", ios::binary);
    outFile.write(reinterpret_cast<char *>(students), sizeof(students));
    outFile.close();
    cout << "results.dat created with 3 sample records.\n";
    return 0;
}
