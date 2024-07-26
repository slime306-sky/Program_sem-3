#include <iostream>

using namespace std;

int main() {
  cout << "Even numbers between 100 and 200:\n";
  for (int i = 100; i <= 200; ++i) {
    if (i % 2 == 0) {
      cout << i << " ";
    }
  }

  cout << "\n\nOdd numbers between 100 and 200:\n";
  for (int i = 100; i <= 200; ++i) {
    if (i % 2 != 0) {
      cout << i << " ";
    }
  }
  cout << endl;
  return 0;
}