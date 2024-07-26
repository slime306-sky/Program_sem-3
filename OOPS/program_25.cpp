#include <iostream>
using namespace std;

// Inline function without class
inline int square(int x) {
  return x * x;
}

// Class with inline function
class Circle {
public:
  inline double area(double radius) {
    return 3.14159 * radius * radius;
  }
};

int main() {
  // Inline function without class
  int num = 5;
  cout << "Square of " << num << " is: " << square(num) << endl;

  // Inline function with class
  Circle circle;
  double radius = 3.0;
  cout << "Area of circle with radius " << radius << " is: " << circle.area(radius) << endl;

  return 0;
}
