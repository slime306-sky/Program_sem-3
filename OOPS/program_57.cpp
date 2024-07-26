#include <iostream>
#include <cmath>

using namespace std;

// Base class: Circle
class Circle {
protected:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Method to calculate area
    double getArea() {
        return M_PI * radius * radius;
    }
};

// Derived class: Cylinder
class Cylinder : public Circle {
private:
    double height;

public:
    // Constructor
    Cylinder(double r, double h) : Circle(r), height(h) {}

    // Method to calculate volume
    double getVolume() {
        return M_PI * radius * radius * height;
    }
};

int main() {
    // Create a circle object
    Circle circle(5);

    // Create a cylinder object
    Cylinder cylinder(5, 10);

    // Calculate and print the area of the circle
    cout << "Circle Area: " << circle.getArea() << endl;

    // Calculate and print the volume of the cylinder
    cout << "Cylinder Volume: " << cylinder.getVolume() << endl;

    return 0;
}

