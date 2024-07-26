#include <iostream>
using namespace std;

// Base class: Vehicle
class Vehicle {
protected:
    int price;
    int yearOfManufacturing;

public:
    void setPrice(int p) { price = p; }
    int getPrice() { return price; }
    void setYearOfManufacturing(int y) { yearOfManufacturing = y; }
    int getYearOfManufacturing() { return yearOfManufacturing; }
};

// Derived class: Bus
class Bus : public Vehicle {
private:
    int seatingCapacity;

public:
    void setSeatingCapacity(int sc) { seatingCapacity = sc; }
    int getSeatingCapacity() { return seatingCapacity; }
};

// Derived class: Truck
class Truck : public Vehicle {
private:
    int loadingCapacity;

public:
    void setLoadingCapacity(int lc) { loadingCapacity = lc; }
    int getLoadingCapacity() { return loadingCapacity; }
};

int main() {
    // Create a Bus object
    Bus bus;
    bus.setPrice(500000);
    bus.setYearOfManufacturing(2023);
    bus.setSeatingCapacity(50);

    // Create a Truck object
    Truck truck;
    truck.setPrice(700000);
    truck.setYearOfManufacturing(2022);
    truck.setLoadingCapacity(10000);

    // Display Bus details
    cout << "Bus Details:\n";
    cout << "Price: " << bus.getPrice() << endl;
    cout << "Year of Manufacturing: " << bus.getYearOfManufacturing() << endl;
    cout << "Seating Capacity: " << bus.getSeatingCapacity() << endl;

    // Display Truck details
    cout << "\nTruck Details:\n";
    cout << "Price: " << truck.getPrice() << endl;
    cout << "Year of Manufacturing: " << truck.getYearOfManufacturing() << endl;
    cout << "Loading Capacity: " << truck.getLoadingCapacity() << endl;

    return 0;
}

