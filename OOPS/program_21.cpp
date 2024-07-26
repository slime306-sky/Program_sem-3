#include <iostream>

using namespace std;

// Function to swap two integers using call by reference
void swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int x, y;

  cout << "Enter the first integer: ";
  cin >> x;

  cout << "Enter the second integer: ";
  cin >> y;

  cout << "Before swapping: x = " << x << ", y = " << y << endl;

  swap(x, y); // Pass by reference

  cout << "After swapping: x = " << x << ", y = " << y << endl;

  return 0;
}

