#include <iostream>

using namespace std;

int main() {
  int number;

  cout << "Enter an integer number: ";
  cin >> number;

  for (int i = 0; i < number; ++i) {
    cout << "WELL DONE" << endl;
  }

  return 0;
}