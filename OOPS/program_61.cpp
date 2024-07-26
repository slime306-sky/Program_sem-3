#include <iostream>
#include <string>

using namespace std;

// Base class Vehicle
class Vehicle {
protected:
  string vehicleNumber;
  string chassisNo;

public:
  Vehicle(string vn, string cn) : vehicleNumber(vn), chassisNo(cn) {}

  void displayVehicleDetails() {
    cout << "Vehicle Number: " << vehicleNumber << endl;
    cout << "Chassis No: " << chassisNo << endl;
  }
};

// Derived class Scooter
class Scooter : public Vehicle {
private:
  double price;
  string companyName;

public:
  Scooter(string vn, string cn, double p, string c)
      : Vehicle(vn, cn), price(p), companyName(c) {}

  void displayScooterDetails() {
    displayVehicleDetails(); // Call displayVehicleDetails from the base class
    cout << "Price: " << price << endl;
    cout << "Company: " << companyName << endl;
  }
};

int main() {
  Scooter myScooter("MH-12-AB-1234", "ABC1234567890", 120000, "Honda");

  cout << "Scooter Details:" << endl;
  myScooter.displayScooterDetails();

  return 0;
}

