// Week 1 - Task 1: Mobile Phone Sales Receipt System
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string customerName, phoneModel;
    int quantity;
    double pricePerPhone;

    // Capture sale details
    cout << "Enter customer name: ";
    getline(cin, customerName);
    cout << "Enter phone model purchased: ";
    getline(cin, phoneModel);
    cout << "Enter quantity bought: ";
    cin >> quantity;
    cout << "Enter price per phone (KES): ";
    cin >> pricePerPhone;

    // Total Sales Amount = Quantity Bought x Price Per Phone
    double totalSales = quantity * pricePerPhone;

    // Print receipt
    cout << fixed << setprecision(2);
    cout << "\n==========================================\n";
    cout << "          MOBILE PHONE SALES RECEIPT\n";
    cout << "==========================================\n";
    cout << left  << setw(22) << "Customer Name:"   << customerName << "\n";
    cout << left  << setw(22) << "Phone Model:"     << phoneModel << "\n";
    cout << left  << setw(22) << "Quantity Bought:" << quantity << "\n";
    cout << left  << setw(22) << "Price Per Phone:" << "KES " << pricePerPhone << "\n";
    cout << "------------------------------------------\n";
    cout << left  << setw(22) << "TOTAL SALES AMOUNT:" << "KES " << totalSales << "\n";
    cout << "==========================================\n";
    cout << "       Thank you for shopping with us!\n";
    return 0;
}
