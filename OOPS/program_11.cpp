#include <iostream>

using namespace std;

enum Weekday {
  Monday,
  Tuesday,
  Wednesday,
  Thursday,
  Friday,
  Saturday,
  Sunday
};

int main() {
  Weekday today = Friday;

  cout << "Today is: ";
  switch (today) {
    case Monday:
      cout << "Monday" << endl;
      break;
    case Tuesday:
      cout << "Tuesday" << endl;
      break;
    case Wednesday:
      cout << "Wednesday" << endl;
      break;
    case Thursday:
      cout << "Thursday" << endl;
      break;
    case Friday:
      cout << "Friday" << endl;
      break;
    case Saturday:
      cout << "Saturday" << endl;
      break;
    case Sunday:
      cout << "Sunday" << endl;
      break;
  }

  return 0;
}