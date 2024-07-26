#include <iostream>
#include <string>

using namespace std;

// Base class: Item
class Item {
protected:
    int item_code;
    string item_name;
    float cost;
    float discount;

public:
    void initializeItem(int code, string name, float price, float disc) {
        item_code = code;
        item_name = name;
        cost = price;
        discount = disc;
    }

    void displayItem() {
        cout << "Item Code: " << item_code << endl;
        cout << "Item Name: " << item_name << endl;
        cout << "Cost: " << cost << endl;
        cout << "Discount: " << discount << endl;
    }

    float calculateAmount() {
        return cost - (cost * (discount / 100));
    }
};

// Derived class: Employee
class Employee : public Item {
private:
    int employee_id;
    float amount;

public:
    void initializeEmployee(int id, int code, string name, float price, float disc) {
        initializeItem(code, name, price, disc);
        employee_id = id;
        amount = 0;
    }

    void displayEmployee() {
        displayItem();
        cout << "Employee ID: " << employee_id << endl;
        cout << "Amount to be Paid: " << amount << endl;
    }

    void computeAmount() {
        amount = calculateAmount();
    }
};

// Derived class: Customer
class Customer : public Item {
private:
    string customer_name;
    float amount;

public:
    void initializeCustomer(string name, int code, string item_name, float price, float disc) {
        initializeItem(code, item_name, price, disc);
        customer_name = name;
        amount = 0;
    }

    void displayCustomer() {
        displayItem();
        cout << "Customer Name: " << customer_name << endl;
        cout << "Amount to be Paid: " << amount << endl;
    }

    void computeAmount() {
        amount = calculateAmount();
    }
};

int main() {
    // Create an Employee object
    Employee employee;
    employee.initializeEmployee(101, 123, "Laptop", 1000, 5);
    employee.computeAmount();
    employee.displayEmployee();

    cout << endl;

    // Create a Customer object
    Customer customer;
    customer.initializeCustomer("John Doe", 456, "Keyboard", 50, 10);
    customer.computeAmount();
    customer.displayCustomer();

    return 0;
}
