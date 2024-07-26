#include <iostream>
using namespace std;

class MyClass {
private:
  int data;

public:
  // Constructor
  MyClass(int value) {
    data = value;
    cout << "Constructor called. Data: " << data << endl;
  }

  // Destructor
  ~MyClass() {
    cout << "Destructor called. Data: " << data << endl;
  }
};

int main() {
  // Create an object of MyClass
  MyClass obj(10);

  // Object goes out of scope and destructor is called automatically
  return 0; 
}