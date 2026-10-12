// Week 4 - Task 3: Password Verification System (do-while loop)
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Predefined credentials
    const string CORRECT_USERNAME = "admin";
    const string CORRECT_PASSWORD = "Pass@1234";

    string username, password;
    bool granted = false;

    // do-while runs at least once, then repeats until credentials are correct
    do {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (username == CORRECT_USERNAME && password == CORRECT_PASSWORD) {
            cout << "Access Granted\n";
            granted = true;
        } else {
            cout << "Incorrect credentials, try again\n\n";
        }
    } while (!granted);

    return 0;
}
