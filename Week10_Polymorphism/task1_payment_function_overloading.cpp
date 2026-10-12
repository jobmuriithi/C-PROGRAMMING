// Week 10 - Task 1: Payment System (Function Overloading - compile-time polymorphism)
#include <iostream>
#include <iomanip>
using namespace std;

class Payment {
public:
    // Cash payment: amount only
    void processPayment(int amount) {
        cout << "Cash payment of KES " << amount << "\n";
        cout << "Final amount paid: KES " << amount << "\n\n";
    }

    // Card payment: amount + transaction fee
    void processPayment(double amount, double fee) {
        cout << fixed << setprecision(2);
        cout << "Card payment of KES " << amount << " with fee KES " << fee << "\n";
        cout << "Final amount paid: KES " << (amount + fee) << "\n\n";
    }

    // Mobile payment: amount + fee - discount
    void processPayment(double amount, double fee, double discount) {
        cout << fixed << setprecision(2);
        cout << "Mobile payment of KES " << amount << ", fee KES " << fee
             << ", discount KES " << discount << "\n";
        cout << "Final amount paid: KES " << (amount + fee - discount) << "\n\n";
    }
};

int main() {
    Payment payment;

    cout << "--- Cash ---\n";
    payment.processPayment(1500);              // int version

    cout << "--- Card ---\n";
    payment.processPayment(2000.0, 50.0);      // two-parameter version

    cout << "--- Mobile ---\n";
    payment.processPayment(3000.0, 30.0, 100.0);  // three-parameter version
    return 0;
}
