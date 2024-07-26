#include <iostream>

using namespace std;

class DB; // Forward declaration for friend function

class DM {
private:
    int meters;
    int centimeters;

public:
    DM() : meters(0), centimeters(0) {}
    DM(int m, int cm) : meters(m), centimeters(cm) {}

    void read() {
        cout << "Enter meters: ";
        cin >> meters;
        cout << "Enter centimeters: ";
        cin >> centimeters;
    }

    void display() {
        cout << meters << " meters " << centimeters << " centimeters" << endl;
    }

    friend DM operator+(const DM& d1, const DB& d2);
    friend DB operator+(const DM& d1, const DB& d2);
};

class DB {
private:
    int feet;
    int inches;

public:
    DB() : feet(0), inches(0) {}
    DB(int ft, int in) : feet(ft), inches(in) {}

    void read() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    friend DM operator+(const DM& d1, const DB& d2);
    friend DB operator+(const DM& d1, const DB& d2);
};

// Friend function to add DM and DB objects, result in DM format
DM operator+(const DM& d1, const DB& d2) {
    int total_cm = d1.meters * 100 + d1.centimeters;
    int total_in = d2.feet * 12 + d2.inches;
    total_cm += total_in * 2.54;
    int result_m = total_cm / 100;
    int result_cm = total_cm % 100;
    return DM(result_m, result_cm);
}

// Friend function to add DM and DB objects, result in DB format
DB operator+(const DM& d1, const DB& d2) {
    int total_cm = d1.meters * 100 + d1.centimeters;
    int total_in = d2.feet * 12 + d2.inches;
    total_in += total_cm * 0.3937;
    int result_ft = total_in / 12;
    int result_in = total_in % 12;
    return DB(result_ft, result_in);
}

int main() {
    DM dm1, dm2;
    DB db1, db2;

    cout << "Enter distance in meters and centimeters:\n";
    dm1.read();
    cout << "Enter distance in feet and inches:\n";
    db1.read();

    cout << "\nDistance in DM format:\n";
    dm2 = dm1 + db1;
    dm2.display();

    cout << "\nDistance in DB format:\n";
    db2 = dm1 + db1;
    db2.display();

    return 0;
}

