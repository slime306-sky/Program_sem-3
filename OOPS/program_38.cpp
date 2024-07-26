#include <iostream>

using namespace std;

class Time {
public:
  int hours;
  int minutes;

  // Function to initialize time object
  void setTime(int h, int m) {
    hours = h;
    minutes = m;
  }

  // Function to display time object
  void displayTime() const {
    cout << hours << ":" << minutes << endl;
  }

  // Function to add two time objects
  void sum(const Time& t1, const Time& t2) {
    hours = t1.hours + t2.hours;
    minutes = t1.minutes + t2.minutes;

    // Adjust hours if minutes exceed 60
    if (minutes >= 60) {
      hours += minutes / 60;
      minutes %= 60;
    }
  }
};

int main() {
  Time T1, T2, T3;

  // Initialize T1 and T2
  T1.setTime(10, 30);
  T2.setTime(2, 45);

  // Display T1 and T2
  cout << "T1: ";
  T1.displayTime();
  cout << "T2: ";
  T2.displayTime();

  // Add T1 and T2, store in T3
  T3.sum(T1, T2);

  // Display T3
  cout << "T3 (T1 + T2): ";
  T3.displayTime();

  return 0;
}
