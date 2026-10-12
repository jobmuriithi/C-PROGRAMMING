// Week 13 - Task 2: Read student results from the binary file results.dat
#include <iostream>
#include <fstream>
using namespace std;

// Fixed-size structure so records can be read/written directly as raw bytes
struct Student {
    char name[50];
    char regNumber[20];
    double totalMarks;
};

int main() {
    ifstream inFile("results.dat", ios::binary);
    if (!inFile) {
        cerr << "Error: could not open results.dat\n"
             << "Tip: run create_sample_results.cpp first to generate sample data.\n";
        return 1;
    }

    Student s;
    cout << "---- Student Results ----\n";
    // Read every record until end of file
    while (inFile.read(reinterpret_cast<char *>(&s), sizeof(Student))) {
        cout << "Name: " << s.name << "  |  Marks: " << s.totalMarks << "\n";
    }

    inFile.close();
    return 0;
}
