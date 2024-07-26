#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  // Example without setw
  cout << "Without setw: " << 123 << " " << 456 << endl;

  // Example with setw
  cout << "With setw: " << setw(5) << 123 << " " << setw(5) << 456 << endl;

  return 0;
}