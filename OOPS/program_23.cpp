#include <iostream>
#include <cmath>

using namespace std;

double power(double m, int n = 2) {
  return pow(m, n);
}

int main() {
  double m;
  int n;

  cout << "Enter the base number (m): ";
  cin >> m;

  cout << "Enter the power (n): ";
  cin >> n;

  cout << m << " raised to the power of " << n << " is: " << power(m, n) << endl;
  cout << m << " squared is: " << power(m) << endl;

  return 0;
}