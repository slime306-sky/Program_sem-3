#include <iostream>
#include <string>

using namespace std;

int main() {
    int physics, chemistry, maths;

    cout << "Enter marks in Physics: ";
    cin >> physics;

    cout << "Enter marks in Chemistry: ";
    cin >> chemistry;

    cout << "Enter marks in Maths: ";
    cin >> maths;

    int totalMarks = physics + chemistry + maths;
    float percentage = (float)totalMarks / 300 * 100;

    cout << "\nTotal Marks: " << totalMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    cout << "Grade: ";

    if (percentage >= 90) {
        cout << "A+";
    } else if (percentage >= 80) {
        cout << "A";
    } else if (percentage >= 70) {
        cout << "B";
    } else if (percentage >= 60) {
        cout << "C";
    } else if (percentage >= 50) {
        cout << "D";
    } else {
        cout << "Fail";
    }

    cout << endl;

    return 0;
}
