#include <iostream>
using namespace std;

// Base class for logic gates
class logic_gate {
protected:
    bool input1;
    bool input2;
    bool input3;

public:
    logic_gate(bool i1 = false, bool i2 = false, bool i3 = false) : input1(i1), input2(i2), input3(i3) {}
    virtual bool get_gate_output() = 0; // Pure virtual function for polymorphism
};

// Derived class for AND gate
class and_gate : public logic_gate {
public:
    and_gate(bool i1 = false, bool i2 = false, bool i3 = false) : logic_gate(i1, i2, i3) {}

    bool get_gate_output() override {
        return input1 && input2 && input3;
    }
};

// Derived class for OR gate
class or_gate : public logic_gate {
public:
    or_gate(bool i1 = false, bool i2 = false, bool i3 = false) : logic_gate(i1, i2, i3) {}

    bool get_gate_output() override {
        return input1 || input2 || input3;
    }
};

int main() {
    // Create instances of AND and OR gates
    and_gate andGate(true, false, true);
    or_gate orGate(false, false, true);

    // Use a base class pointer to demonstrate polymorphism
    logic_gate *gatePtr;

    // Point the pointer to the AND gate
    gatePtr = &andGate;
    cout << "AND Gate Output: " << gatePtr->get_gate_output() << endl;

    // Point the pointer to the OR gate
    gatePtr = &orGate;
    cout << "OR Gate Output: " << gatePtr->get_gate_output() << endl;

    return 0;
}

