#include <iostream>
using namespace std;

class MyClass {
public:
  int x;

  MyClass() {
    x = 10;
  }

  void display() {
    cout << "x = " << x << endl;
  }
};

int main() {
  MyClass obj1;
  MyClass obj2;

  // Accessing member 'x' using the object
  obj1.x = 20;
  obj1.display(); // Output: x = 20

  // Accessing member 'x' using the class name and scope resolution operator
  MyClass::x = 30; // This modifies the static member 'x' if it exists
  obj2.display(); // Output: x = 10 (or x = 30 if 'x' is static)

  return 0;
}