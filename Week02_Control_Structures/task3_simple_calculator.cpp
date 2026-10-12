// Week 2 - Task 3: Simple Calculator (switch statement)
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    double result = 0;
    bool valid = true;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Handle division by zero
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed.\n";
                valid = false;
            } else {
                result = num1 / num2;
            }
            break;
        default:
            cout << "Error: Invalid operator.\n";
            valid = false;
    }

    if (valid) {
        cout << num1 << " " << op << " " << num2 << " = " << result << "\n";
    }
    return 0;
}
