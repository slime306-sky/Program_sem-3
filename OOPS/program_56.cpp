#include <iostream>
#include <string>

using namespace std;

// Base class: Student
class Student {
protected:
    string name;
    int rollNo;

public:
    Student(string n, int r) : name(n), rollNo(r) {}

    void displayStudentDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

// Derived class 1: Test
class Test : public Student {
protected:
    int marks;

public:
    Test(string n, int r, int m) : Student(n, r), marks(m) {}

    void displayTestDetails() {
        cout << "Marks: " << marks << endl;
    }
};

// Derived class 2: Sports
class Sports : public Student {
protected:
    int score;

public:
    Sports(string n, int r, int s) : Student(n, r), score(s) {}

    void displaySportsDetails() {
        cout << "Score: " << score << endl;
    }
};

// Derived class from Test and Sports: Result
class Result : public Test, public Sports {
public:
    Result(string n, int r, int m, int s) : Test(n, r, m), Sports(n, r, s) {}

    void displayResult() {
        cout << "---- Result ----" << endl;
        displayStudentDetails();
        displayTestDetails();
        displaySportsDetails();
        cout << "----------------" << endl;
    }
};

int main() {
    // Create a Result object
    Result student("John Doe", 101, 85, 90);

    // Display the result
    student.displayResult();

    return 0;
}
