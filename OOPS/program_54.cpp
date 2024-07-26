#include <iostream>

using namespace std;

// Base class
class Vehicle {
public:
    string brand;
    string model;

    Vehicle(string b, string m) {
        brand = b;
        model = m;
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    int year;

    Car(string b, string m, int y) : Vehicle(b, m) {
        year = y;
    }

    void displayCar() {
        displayVehicle(); // Calling base class method
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Create a Car object
    Car myCar("Ford", "Mustang", 2023);

    // Display car information
    myCar.displayCar();

    return 0;
}
