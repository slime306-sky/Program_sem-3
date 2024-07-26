#include <iostream>

using namespace std;

class Counter {
private:
  static int count;  // Static data member

public:
  Counter() {
    count++;  // Increment count for each object created
  }

  static int getCount() {  // Static member function
    return count;
  }
};

int Counter::count = 0;  // Initialization of static data member outside the class

int main() {
  Counter c1, c2, c3;  // Create three objects

  cout << "Number of objects created: " << Counter::getCount() << endl;
  return 0;
}