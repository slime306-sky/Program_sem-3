#include <iostream>
#include <string>

using namespace std;

int main() {
  string name;
  int units;
  double charges;

  cout << "Enter the name of the user: ";
  getline(cin, name);

  cout << "Enter the number of units consumed: ";
  cin >> units;

  // Calculate charges based on units consumed
  if (units <= 100) {
    charges = units * 0.60;
  } else if (units <= 300) {
    charges = (100 * 0.60) + ((units - 100) * 0.80);
  } else {
    charges = (100 * 0.60) + (200 * 0.80) + ((units - 300) * 0.90);
  }

  // Apply minimum charges
  if (charges < 50.00) {
    charges = 50.00;
  }

  // Apply surcharge if applicable
  if (charges > 300.00) {
    charges += (charges * 0.15);
  }

  // Print charges with name
  cout << "Name: " << name << endl;
  cout << "Total Charges: Rs. " << charges << endl;

  return 0;
}
```
