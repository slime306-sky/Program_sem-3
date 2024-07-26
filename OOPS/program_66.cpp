#include <iostream>
using namespace std;

// Base class with a pure virtual function
class Shape {
public:
    virtual double calculateArea() = 0; // Pure virtual function
};

// Derived class - Circle
class Circle : public Shape {
public:
    Circle(double radius) : radius(radius) {}
    double calculateArea() override { return 3.14159 * radius * radius; }
private:
    double radius;
};

// Derived class - Rectangle
class Rectangle : public Shape {
public:
    Rectangle(double length, double width) : length(length), width(width) {}
    double calculateArea() override { return length * width; }
private:
    double length, width;
};

int main() {
    // Creating objects of derived classes
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Accessing the overridden function through base class pointer
    Shape *shapePtr;
    shapePtr = &circle;
    cout << "Area of Circle: " << shapePtr->calculateArea() << endl;

    shapePtr = &rectangle;
    cout << "Area of Rectangle: " << shapePtr->calculateArea() << endl;

    return 0;
}