#include <iostream>

using namespace std;

int main() {
  int num, reversedNum = 0, remainder;

  cout << "Enter a number: ";
  cin >> num;

  while (num != 0) {
    remainder = num % 10;
    reversedNum = reversedNum * 10 + remainder;
    num /= 10;
  }

  cout << "Reversed number: " << reversedNum << endl;

  return 0;
}