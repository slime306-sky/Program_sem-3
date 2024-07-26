#include <iostream>

using namespace std;

// Function 1:  Argument but no return value
void isPrime1(int num) {
  bool isPrime = true;
  if (num <= 1) {
    isPrime = false;
  } else {
    for (int i = 2; i * i <= num; i++) {
      if (num % i == 0) {
        isPrime = false;
        break;
      }
    }
  }
  if (isPrime) {
    cout << num << " is a prime number." << endl;
  } else {
    cout << num << " is not a prime number." << endl;
  }
}

// Function 2: Argument and return value
bool isPrime2(int num) {
  if (num <= 1) {
    return false;
  }
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int number;
  cout << "Enter a number: ";
  cin >> number;

  // Calling Function 1
  isPrime1(number);

  // Calling Function 2
  if (isPrime2(number)) {
    cout << number << " is a prime number." << endl;
  } else {
    cout << number << " is not a prime number." << endl;
  }

  return 0;
}

