#include <iostream>

using namespace std;

// Abstract base class
class Shape {
public:
  // Pure virtual function
  virtual double getArea() = 0; 
};

// Derived class: Circle
class Circle : public Shape {
private:
  double radius;

public:
  Circle(double r) : radius(r) {}

  // Overriding the getArea function
  double getArea() override { 
    return 3.14159 * radius * radius; 
  }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
  double length;
  double width;

public:
  Rectangle(double l, double w) : length(l), width(w) {}

  // Overriding the getArea function
  double getArea() override {
    return length * width; 
  }
};

int main() {
  // Create a Circle object
  Circle circle(5.0); 

  // Create a Rectangle object
  Rectangle rectangle(4.0, 6.0);

  // Accessing the getArea function through base class pointer
  Shape* shapePtr; 

  shapePtr = &circle;
  cout << "Area of circle: " << shapePtr->getArea() << endl;

  shapePtr = &rectangle;
  cout << "Area of rectangle: " << shapePtr->getArea() << endl;

  return 0;
}