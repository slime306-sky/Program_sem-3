#include <iostream>

using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    void setDimensions(int l, int b) {
        length = l;
        breadth = b;
    }

    int calculateArea() {
        return length * breadth;
    }

    void displayArea() {
        cout << "Area of the rectangle: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;

    rect.setDimensions(5, 10);
    rect.displayArea(); // Calls calculateArea() internally

    return 0;
}