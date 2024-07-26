#include <iostream>

using namespace std;

class Complex1 {
private:
    double real1;
    double imag1;

public:
    Complex1(double r = 0, double i = 0) : real1(r), imag1(i) {}

    // Friend function declaration
    friend Complex1 sum(const Complex1& c1, const Complex2& c2);
};

class Complex2 {
private:
    double real2;
    double imag2;

public:
    Complex2(double r = 0, double i = 0) : real2(r), imag2(i) {}

    // Friend function declaration
    friend Complex1 sum(const Complex1& c1, const Complex2& c2);
};

// Friend function definition
Complex1 sum(const Complex1& c1, const Complex2& c2) {
    return Complex1(c1.real1 + c2.real2, c1.imag1 + c2.imag2);
}

int main() {
    double real1, imag1, real2, imag2;

    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real1 >> imag1;
    Complex1 c1(real1, imag1);

    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real2 >> imag2;
    Complex2 c2(real2, imag2);

    Complex1 sumResult = sum(c1, c2);

    cout << "Sum of the complex numbers: " << sumResult.real1 << " + " << sumResult.imag1 << "i" << endl;

    return 0;
}

