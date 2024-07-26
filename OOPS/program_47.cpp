#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Default constructor
    Complex() : real(0), imag(0) {}

    // Parameterized constructor
    Complex(double r, double i) : real(r), imag(i) {}

    // Display function
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    // Overload + operator
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
};

int main() {
    Complex C1(2.5, 3.0);
    Complex C2(1.0, 2.0);
    Complex C3;

    // Add C1 and C2, store the result in C3
    C3 = C1 + C2;

    // Display the results
    cout << "C1: ";
    C1.display();
    cout << "C2: ";
    C2.display();
    cout << "C3 (C1 + C2): ";
    C3.display();

    return 0;
}

