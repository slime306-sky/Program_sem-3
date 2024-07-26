#include <iostream>

using namespace std;

class THREE_D {
private:
  int X, Y, Z;

public:
  // Constructor to initialize data members
  THREE_D(int x = 0, int y = 0, int z = 0) : X(x), Y(y), Z(z) {}

  // Unary + operator overload
  THREE_D operator+() const {
    return THREE_D(X, Y, Z);
  }

  // Unary - operator overload
  THREE_D operator-() const {
    return THREE_D(-X, -Y, -Z);
  }

  // Pre-increment operator overload
  THREE_D operator++() {
    ++X;
    ++Y;
    ++Z;
    return *this;
  }

  // Post-increment operator overload
  THREE_D operator++(int) {
    THREE_D temp(X, Y, Z);
    ++X;
    ++Y;
    ++Z;
    return temp;
  }

  // Pre-decrement operator overload
  THREE_D operator--() {
    --X;
    --Y;
    --Z;
    return *this;
  }

  // Post-decrement operator overload
  THREE_D operator--(int) {
    THREE_D temp(X, Y, Z);
    --X;
    --Y;
    --Z;
    return temp;
  }

  // Binary * operator overload for scalar multiplication
  THREE_D operator*(int scalar) const {
    return THREE_D(X * scalar, Y * scalar, Z * scalar);
  }

  // Friend function for binary * operator overload for vector multiplication
  friend THREE_D operator*(int scalar, const THREE_D& obj) {
    return THREE_D(obj.X * scalar, obj.Y * scalar, obj.Z * scalar);
  }

  // Display function for THREE_D object
  void display() const {
    cout << "X: " << X << ", Y: " << Y << ", Z: " << Z << endl;
  }
};

int main() {
  THREE_D point1(1, 2, 3);
  THREE_D point2(4, 5, 6);

  cout << "Point 1: ";
  point1.display();

  cout << "Point 2: ";
  point2.display();

  // Unary + operator
  cout << "Unary + of point1: ";
  (+point1).display();

  // Unary - operator
  cout << "Unary - of point2: ";
  (-point2).display();

  // Pre-increment operator
  cout << "Pre-increment of point1: ";
  (++point1).display();

  // Post-increment operator
  cout << "Post-increment of point2: ";
  (point2++).display();

  // Pre-decrement operator
  cout << "Pre-decrement of point1: ";
  (--point1).display();

  // Post-decrement operator
  cout << "Post-decrement of point2: ";
  (point2--).display();

  // Binary * operator for scalar multiplication
  cout << "Point1 * 2: ";
  (point1 * 2).display();

  // Binary * operator for vector multiplication
  cout << "2 * point2: ";
  (2 * point2).display();

  return 0;
}
