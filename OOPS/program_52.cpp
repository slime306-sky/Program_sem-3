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

  // Function to initialize and display complex number
  void display() {
    cout << real << " + " << imag << "i" << endl;
  }

  // Overload the + operator for adding two complex numbers
  Complex operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
  }
};

int main() {
  Complex c1(2.5, 3.0);
  Complex c2(1.0, 2.0);

  cout << "Complex number c1: ";
  c1.display();
  cout << "Complex number c2: ";
  c2.display();

  Complex c3 = c1 + c2;
  cout << "Sum of c1 and c2: ";
  c3.display();

  return 0;
}