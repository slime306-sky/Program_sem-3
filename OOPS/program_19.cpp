#include <iostream>

using namespace std;

// Function with default argument for 'number'
void greet(string name, int number = 1) {
  cout << "Hello, " << name << "! You have " << number << " message(s)." << endl;
}

int main() {
  greet("Alice");    // Calls greet with default number (1)
  greet("Bob", 3);   // Calls greet with specified number (3)

  return 0;
}

