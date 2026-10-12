// Week 3 - Task 2: Water Billing System Using Functions
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const double RATE_PER_UNIT = 50.0;   // KES per unit
const double DISCOUNT_RATE = 0.10;   // 10% discount
const int DISCOUNT_THRESHOLD = 100;  // units

void getCustomerDetails(string &name, double &units) {
    cout << "Enter customer name: ";
    getline(cin, name);
    cout << "Enter units consumed: ";
    cin >> units;
}

// Water Bill = Units Consumed x Rate Per Unit
double calculateBill(double units) {
    return units * RATE_PER_UNIT;
}

// Returns the discount amount: 10% if units consumed exceed 100
double applyDiscount(double bill, double units) {
    if (units > DISCOUNT_THRESHOLD) {
        return bill * DISCOUNT_RATE;
    }
    return 0.0;
}

void displayBill(const string &name, double units, double bill,
                 double discount, double finalAmount) {
    cout << fixed << setprecision(2);
    cout << "\n========== WATER BILL ==========\n";
    cout << left << setw(26) << "Customer Name:" << name << "\n";
    cout << left << setw(26) << "Units Consumed:" << units << "\n";
    cout << left << setw(26) << "Bill Before Discount:" << "KES " << bill << "\n";
    cout << left << setw(26) << "Discount:" << "KES " << discount << "\n";
    cout << "--------------------------------\n";
    cout << left << setw(26) << "AMOUNT PAYABLE:" << "KES " << finalAmount << "\n";
    cout << "================================\n";
}

int main() {
    string name;
    double units;

    getCustomerDetails(name, units);
    double bill = calculateBill(units);
    double discount = applyDiscount(bill, units);
    double finalAmount = bill - discount;
    displayBill(name, units, bill, discount, finalAmount);
    return 0;
}
