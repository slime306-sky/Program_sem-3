#include <iostream>

using namespace std;

class Rupees {
public:
  int amount;

  Rupees(int a) : amount(a) {}

  operator Paise() {
    return Paise(amount * 100);
  }
};

class Paise {
public:
  int amount;

  Paise(int a) : amount(a) {}

  operator Rupees() {
    return Rupees(amount / 100);
  }
};

int main() {
  Rupees rupees(10);
  Paise paise = rupees; // Conversion from Rupees to Paise
  cout << "Rupees: " << rupees.amount << endl;
  cout << "Paise: " << paise.amount << endl;

  Paise paise2(500);
  Rupees rupees2 = paise2; // Conversion from Paise to Rupees
  cout << "Paise: " << paise2.amount << endl;
  cout << "Rupees: " << rupees2.amount << endl;

  return 0;
}

