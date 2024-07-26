#include <iostream>

using namespace std;

class Complex {
private:
    int X, Y;

public:
    // Constructor
    Complex(int x = 0, int y = 0) : X(x), Y(y) {}

    // Friend function to add two complex numbers
    friend Complex sum(Complex c1, Complex c2);

    // Friend function to display a complex number
    friend void show(Complex c);
};

// Friend function to add two complex numbers
Complex sum(Complex c1, Complex c2) {
    return Complex(c1.X + c2.X, c1.Y + c2.Y);
}

// Friend function to display a complex number
void show(Complex c) {
    cout << c.X << " + " << c.Y << "i" << endl;
}

int main() {
    Complex c1(3, 4), c2(5, 2);

    cout << "Complex number 1: ";
    show(c1);

    cout << "Complex number 2: ";
    show(c2);

    Complex c3 = sum(c1, c2);

    cout << "Sum of complex numbers: ";
    show(c3);

    return 0;
}

