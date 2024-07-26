#include <iostream>
#include <string>

using namespace std;

// Student class
class Student {
public:
    int roll_no;
    string name;

    // Constructor to initialize student details
    Student(int r, string n) {
        roll_no = r;
        name = n;
    }
};

// Test class
class Test {
public:
    int marks[5];

    // Constructor to initialize marks for five subjects
    Test(int m1, int m2, int m3, int m4, int m5) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
        marks[4] = m5;
    }
};

// Result class derived from Student and Test
class Result : public Student, public Test {
public:
    int total_marks;
    float percentage;

    // Constructor to initialize Result with student and test data
    Result(int r, string n, int m1, int m2, int m3, int m4, int m5) : Student(r, n), Test(m1, m2, m3, m4, m5) {
        total_marks = 0;
        for (int i = 0; i < 5; i++) {
            total_marks += marks[i];
        }
        percentage = (float)total_marks / 500 * 100;
    }

    // Function to display student information
    void display() {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Marks in 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Total Marks: " << total_marks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    // Input student details
    int roll, m1, m2, m3, m4, m5;
    string name;

    cout << "Enter Roll No: ";
    cin >> roll;
    cout << "Enter Name: ";
    cin.ignore(); // To consume the newline character left in the buffer
    getline(cin, name);
    cout << "Enter marks in 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    // Create Result object and display information
    Result student(roll, name, m1, m2, m3, m4, m5);
    student.display();

    return 0;
}

