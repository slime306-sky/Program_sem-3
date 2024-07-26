#include <iostream>
#include <vector>

using namespace std;

double calculateAverage() {
  vector<double> numbers;
  double number;
  int count = 0;
  double sum = 0;

  cout << "Enter numbers (enter -1 to stop): ";
  while (true) {
    cin >> number;
    if (number == -1) {
      break;
    }
    numbers.push_back(number);
    count++;
  }

  for (double num : numbers) {
    sum += num;
  }

  if (count == 0) {
    return 0;
  }

  return sum / count;
}

int main() {
  double average = calculateAverage();
  cout << "The average of the numbers is: " << average << endl;
  return 0;
}