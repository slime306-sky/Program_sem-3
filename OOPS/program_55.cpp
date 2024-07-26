#include <iostream>
using namespace std;

// Base class A
class A {
protected:
    int a;

public:
    A(int a) : a(a) {
        cout << "A constructor called" << endl;
    }

    void displayA() {
        cout << "Value of a in A: " << a << endl;
    }
};

// Base class B
class B {
protected:
    int b;

public:
    B(int b) : b(b) {
        cout << "B constructor called" << endl;
    }

    void displayB() {
        cout << "Value of b in B: " << b << endl;
    }
};

// Derived class C inheriting from both A and B
class C : public A, public B {
private:
    int c;

public:
    C(int a, int b, int c) : A(a), B(b), c(c) {
        cout << "C constructor called" << endl;
    }

    void displayC() {
        cout << "Value of c in C: " << c << endl;
    }
};

int main() {
    // Create an object of class C
    C obj(10, 20, 30);

    // Call member functions of A, B, and C
    obj.displayA();
    obj.displayB();
    obj.displayC();

    return 0;
}
