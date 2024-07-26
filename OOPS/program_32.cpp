#include <iostream>

using namespace std;

class Arithmetic {
private:
    int d1, d2;
    char op;

public:
    // Default constructor
    Arithmetic() : d1(0), d2(0), op('+') {}

    // Constructor with all arguments
    Arithmetic(int d1, int d2, char op) : d1(d1), d2(d2), op(op) {}

    // Method to perform the arithmetic operation
    void calculate() {
        switch (op) {
            case '+':
                cout << "Ans = " << d1 << " + " << d2 << " = " << d1 + d2 << endl;
                break;
            case '-':
                cout << "Ans = " << d1 << " - " << d2 << " = " << d1 - d2 << endl;
                break;
            case '*':
                cout << "Ans = " << d1 << " * " << d2 << " = " << d1 * d2 << endl;
                break;
            case '/':
                if (d2 == 0) {
                    cout << "Error: Division by zero!" << endl;
                } else {
                    cout << "Ans = " << d1 << " / " << d2 << " = " << (double)d1 / d2 << endl;
                }
                break;
            default:
                cout << "Invalid operator!" << endl;
        }
    }
};

int main() {
    // Create an Arithmetic object with values
    Arithmetic obj1(10, 5, '+');
    obj1.calculate();

    // Create another Arithmetic object with different values
    Arithmetic obj2(20, 4, '*');
    obj2.calculate();

    return 0;
}

