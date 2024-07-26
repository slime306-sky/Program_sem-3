#include <iostream>
#include <cmath>

using namespace std;

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r = 0.0) : radius(r) {}

    // Member function to compute area
    double getArea() const {
        return M_PI * radius * radius;
    }

    // Overload == operator
    bool operator==(const Circle& other) const {
        return radius == other.radius;
    }
};

int main() {
    // Create two circle objects
    Circle circle1(5.0);
    Circle circle2(5.0);

    // Check if they are equal
    if (circle1 == circle2) {
        cout << "Circle 1 and Circle 2 are equal in radius." << endl;
    } else {
        cout << "Circle 1 and Circle 2 are not equal in radius." << endl;
    }

    // Calculate and print the area of circle1
    cout << "Area of circle 1: " << circle1.getArea() << endl;

    return 0;
}