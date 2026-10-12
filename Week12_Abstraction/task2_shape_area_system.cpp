// Week 12 - Task 2: Shape Area System (Abstraction)
#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159265358979;

// Abstract class
class Shape {
public:
    virtual double calculateArea() const = 0;  // pure virtual
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    // Area = pi x r^2
    double calculateArea() const override { return PI * radius * radius; }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    // Area = length x width
    double calculateArea() const override { return length * width; }
};

int main() {
    cout << fixed << setprecision(2);

    Shape *circle = new Circle(7.0);
    Shape *rectangle = new Rectangle(10.0, 5.0);

    cout << "Area of Circle (r = 7)             : " << circle->calculateArea() << "\n";
    cout << "Area of Rectangle (10 x 5)         : " << rectangle->calculateArea() << "\n";

    delete circle;
    delete rectangle;
    return 0;
}
