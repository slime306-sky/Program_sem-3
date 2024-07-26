#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter(int c = 0) : count(c) {}

    // Overload the unary minus operator
    Counter operator-() const {
        return Counter(-count); // Return a new Counter object with negated count
    }

    void display() const {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(5);
    cout << "Before negation: ";
    c1.display();

    Counter c2 = -c1; // Call the overloaded operator
    cout << "After negation: ";
    c2.display();

    return 0;
}