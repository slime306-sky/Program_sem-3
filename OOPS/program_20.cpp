#include <iostream>

using namespace std;

// Function to calculate simple interest
double calculateSimpleInterest(double amount, double time, double rate = 0.05) {
  return (amount * time * rate);
}

int main() {
  double amount, time, rate;

  cout << "Enter the principal amount: ";
  cin >> amount;

  cout << "Enter the time period (in years): ";
  cin >> time;

  cout << "Enter the interest rate (optional, default is 5%): ";
  cin >> rate;

  // Calculate simple interest using the function
  double simpleInterest = calculateSimpleInterest(amount, time, rate);

  // Display the result
  cout << "Simple Interest: " << simpleInterest << endl;

  return 0;
}

