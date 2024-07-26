#include <iostream>
#include <cmath>

using namespace std;

void calculateArea() {
  double radius;

  cout << "Enter the radius of the circle: ";
  cin >> radius;

  double area = M_PI * pow(radius, 2);

  cout << "The area of the circle is: " << area << endl;
}

int main() {
  calculateArea();
  return 0;
}