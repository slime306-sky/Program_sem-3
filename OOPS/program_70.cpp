#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Constructor
    Rectangle(int l = 0, int b = 0) {
        length = l;
        breadth = b;
    }

    // Function to calculate area
    int area() {
        return length * breadth;
    }

    // Function to display data using this pointer
    void display() {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() {
    Rectangle rect1(10, 5);

    // Using this pointer to access and modify member variables
    cout << "Rect1: " << endl;
    rect1.display();

    // Using this pointer to call member functions
    cout << "\nArea of rect1: " << rect1.area() << endl;

    return 0;
}