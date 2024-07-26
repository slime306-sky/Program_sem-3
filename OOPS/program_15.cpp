#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double number, squareRoot;

  cout << "Enter a number: ";
  cin >> number;

  squareRoot = sqrt(number); 

  cout << "The square root of " << number << " is: " << squareRoot << endl;

  return 0;
}