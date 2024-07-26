#include <iostream>
#include <string>

using namespace std;

// Student class
class Student {
protected:
    int roll_no;
    string name;

public:
    void getStudentDetails() {
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cout << "Enter Name: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, name);
    }

    void displayStudentDetails() {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

// Test class
class Test : public Student {
protected:
    int marks[5];

public:
    void getMarks() {
        cout << "Enter marks in 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
};

// Result class
class Result : public Test {
private:
    int totalMarks;
    float percentage;

public:
    void calculateResult() {
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
        percentage = (float)totalMarks / 500 * 100;
    }

    void displayResult() {
        cout << "\nResult:\n";
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result student;

    // Get student details
    student.getStudentDetails();

    // Get test marks
    student.getMarks();

    // Calculate and display result
    student.calculateResult();
    student.displayStudentDetails();
    student.displayResult();

    return 0;
}
