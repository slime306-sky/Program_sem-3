#include <iostream>
using namespace std;

class Point {
public:
    // Default constructor
    Point() : x(5), y(5) {}

    // Getters
    int getX() const { return x; }
    int getY() const { return y; }

    // Setters
    void setX(int newX) { x = newX; }
    void setY(int newY) { y = newY; }

private:
    int x;
    int y;
};

int main() {
    // Create a Point object with the default constructor
    Point p;

    // Print the initial coordinates
    cout << "Initial Coordinates: (" << p.getX() << ", " << p.getY() << ")" << endl;

    // Set new coordinates
    p.setX(10);
    p.setY(20);

    // Print the updated coordinates
    cout << "Updated Coordinates: (" << p.getX() << ", " << p.getY() << ")" << endl;

    return 0;
}