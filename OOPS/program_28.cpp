#include <iostream>
using namespace std;

// Structure definition
struct Employee {
    string name;
    int id;
    float salary;
};

// Class definition
class Student {
public:
    string name;
    int rollNo;
    float marks;

    // Member function to display student details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Structure usage
    Employee emp1;
    emp1.name = "John Doe";
    emp1.id = 101;
    emp1.salary = 50000.00;

    cout << "Employee Details:" << endl;
    cout << "Name: " << emp1.name << endl;
    cout << "ID: " << emp1.id << endl;
    cout << "Salary: " << emp1.salary << endl;

    // Class usage
    Student student1;
    student1.name = "Alice";
    student1.rollNo = 201;
    student1.marks = 85.5;

    cout << "\nStudent Details:" << endl;
    student1.displayDetails();

    return 0;
}