#include <iostream>

using namespace std;

class Time {
private:
  int hour;
  int minute;
  int second;

public:
  // Default constructor
  Time() : hour(0), minute(0), second(0) {}

  // Parameterized constructor
  Time(int h, int m, int s) : hour(h), minute(m), second(s) {}

  // Overloading the + operator
  Time operator+(const Time& t) const {
    int totalSeconds = (hour * 3600 + minute * 60 + second) +
                       (t.hour * 3600 + t.minute * 60 + t.second);

    int newHour = totalSeconds / 3600;
    int newMinute = (totalSeconds % 3600) / 60;
    int newSecond = (totalSeconds % 3600) % 60;

    return Time(newHour, newMinute, newSecond);
  }

  // Function to display time
  void display() const {
    cout << hour << ":" << minute << ":" << second << endl;
  }
};

int main() {
  Time t1(10, 20, 30);
  Time t2(5, 40, 10);
  Time t3 = t1 + t2;

  cout << "Time 1: ";
  t1.display();
  cout << "Time 2: ";
  t2.display();
  cout << "Time 1 + Time 2: ";
  t3.display();

  return 0;
}
