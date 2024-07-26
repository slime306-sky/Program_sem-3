#include <iostream>

using namespace std;

class Bird {
private:
    string name;
    double weight;

public:
    // Default constructor
    Bird() {
        cout << "Enter bird name: ";
        cin >> name;
        cout << "Enter bird weight: ";
        cin >> weight;
    }

    // Overloaded constructor
    Bird(string n, double w) : name(n), weight(w) {}

    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Weight: " << weight << endl;
    }

    // Overloaded >= operator
    bool operator>=(const Bird& other) const {
        return weight >= other.weight;
    }
};

int main() {
    // Create two bird objects using default constructor
    Bird bird1;
    Bird bird2;

    // Create two bird objects using overloaded constructor
    Bird bird3("Sparrow", 0.02);
    Bird bird4("Eagle", 4.5);

    cout << "\nBird 1 details: " << endl;
    bird1.display();

    cout << "\nBird 2 details: " << endl;
    bird2.display();

    cout << "\nBird 3 details: " << endl;
    bird3.display();

    cout << "\nBird 4 details: " << endl;
    bird4.display();

    // Compare bird objects using overloaded >= operator
    if (bird1 >= bird2) {
        cout << "\nBird 1 is heavier than or equal to Bird 2." << endl;
    } else {
        cout << "\nBird 1 is lighter than Bird 2." << endl;
    }

    if (bird3 >= bird4) {
        cout << "\nBird 3 is heavier than or equal to Bird 4." << endl;
    } else {
        cout << "\nBird 3 is lighter than Bird 4." << endl;
    }

    return 0;
}