```c++
#include <iostream>
using namespace std;

// Function to calculate the sum of two integers
int sum(int a, int b) {
  return a + b;
}

// Function to calculate the sum of three integers
int sum(int a, int b, int c) {
  return a + b + c;
}

int main() {
  cout << "Sum of 2 and 3: " << sum(2, 3) << endl;
  cout << "Sum of 2, 3 and 4: " << sum(2, 3, 4) << endl;
  return 0;
}