#include <iostream>

using namespace std;

// Class A with private data member x
class A {
private:
    int x;

public:
    A(int x) : x(x) {}
    // Friend function declaration
    friend void sum(A a, B b);
};

// Class B with private data member y
class B {
private:
    int y;

public:
    B(int y) : y(y) {}
    // Friend function declaration
    friend void sum(A a, B b);
};

// Friend function definition to calculate the sum of x and y
void sum(A a, B b) {
    int result = a.x + b.y;
    cout << "Sum of x and y: " << result << endl;
}

int main() {
    A objA(10);
    B objB(20);

    sum(objA, objB); // Call the friend function

    return 0;
}
