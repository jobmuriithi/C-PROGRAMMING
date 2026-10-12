// Week 9 - Task 2: Vehicle System (Inheritance)
#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;
    int yearOfManufacture;

public:
    void inputVehicle() {
        cout << "Enter brand: ";
        getline(cin >> ws, brand);
        cout << "Enter year of manufacture: ";
        cin >> yearOfManufacture;
    }

    void displayVehicle() const {
        cout << "Brand            : " << brand << "\n";
        cout << "Year of Make     : " << yearOfManufacture << "\n";
    }
};

// Derived class
class Car : public Vehicle {
private:
    int numberOfDoors;
    double engineCapacity;  // in cc

public:
    void inputCar() {
        inputVehicle();
        cout << "Enter number of doors: ";
        cin >> numberOfDoors;
        cout << "Enter engine capacity (cc): ";
        cin >> engineCapacity;
    }

    void displayCar() const {
        cout << "\n--- Car Details ---\n";
        displayVehicle();
        cout << "Number of Doors  : " << numberOfDoors << "\n";
        cout << "Engine Capacity  : " << engineCapacity << " cc\n";
    }
};

int main() {
    Car car;
    car.inputCar();
    car.displayCar();
    return 0;
}
