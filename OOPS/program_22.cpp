#include <iostream>
using namespace std;

// Function to swap two integers by reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to return a reference to an integer
int& returnByReference(int &x) {
    return x;
}

int main() {
    int num1 = 10, num2 = 20;

    // Call by reference: swapping values
    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
    swapByReference(num1, num2);
    cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Return by reference: modifying value through returned reference
    int& refToNum1 = returnByReference(num1);
    refToNum1 = 30;
    cout << "Modified num1 through reference: num1 = " << num1 << endl;

    return 0;
}