#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double number = 123.456789;

  // Set precision to 2 decimal places
  cout << fixed << setprecision(2) << "Number with 2 decimal places: " << number << endl;

  // Set width to 10 characters, left-aligned
  cout << setw(10) << left << "Left-aligned: " << number << endl;

  // Set width to 10 characters, right-aligned
  cout << setw(10) << right << "Right-aligned: " << number << endl;

  // Set fill character to '*'
  cout << setfill('*') << setw(10) << right << "Filled with *: " << number << endl;

  // Set scientific notation
  cout << scientific << "Scientific notation: " << number << endl;

  // Reset manipulators to default settings
  cout << resetiosflags(ios::fixed | ios::scientific) << setprecision(6) << setfill(' ') << setw(0) << endl;

  return 0;
}