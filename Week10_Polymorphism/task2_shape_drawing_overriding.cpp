// Week 10 - Task 2: Shape Drawing System (Function Overriding - run-time polymorphism)
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape\n";
    }
    virtual ~Shape() {}  // virtual destructor for safe cleanup
};

class Circle : public Shape {
public:
    void draw() override { cout << "Drawing Circle\n"; }
};

class Rectangle : public Shape {
public:
    void draw() override { cout << "Drawing Rectangle\n"; }
};

class Triangle : public Shape {
public:
    void draw() override { cout << "Drawing Triangle\n"; }
};

int main() {
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    Shape *shape;  // base class pointer

    // The same call, shape->draw(), gives different output depending on the object
    shape = &circle;
    shape->draw();

    shape = &rectangle;
    shape->draw();

    shape = &triangle;
    shape->draw();
    return 0;
}
