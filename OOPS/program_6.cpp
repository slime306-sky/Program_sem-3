```c++
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double P, r, n, V;

  cout << "Enter the principal amount (P): ";
  cin >> P;

  cout << "Enter the interest rate per period (r): ";
  cin >> r;

  cout << "Enter the number of periods (n): ";
  cin >> n;

  // Calculate the value of compound interest
  V = P * (pow(1 + r, n) - 1);

  cout << "The value of compound interest (V) is: " << V << endl;

  return 0;
}