// Week 4 - Task 2: Savings Withdrawal System (while loop)
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double balance, withdrawal;

    cout << "Enter account balance (KES): ";
    cin >> balance;
    cout << fixed << setprecision(2);

    // Keep going while there is money in the account
    while (balance > 0) {
        cout << "\nEnter withdrawal amount (KES): ";
        cin >> withdrawal;

        // Stop if the withdrawal is more than the balance
        if (withdrawal > balance) {
            cout << "Insufficient balance. Withdrawal amount exceeds balance of KES "
                 << balance << ". Exiting.\n";
            break;
        }
        if (withdrawal <= 0) {
            cout << "Please enter a positive amount.\n";
            continue;
        }

        balance -= withdrawal;
        cout << "Withdrawal successful. Remaining balance: KES " << balance << "\n";
    }

    // Loop also ends when the balance reaches zero
    if (balance == 0) {
        cout << "Your balance is now zero. Thank you for using our service.\n";
    }
    return 0;
}
