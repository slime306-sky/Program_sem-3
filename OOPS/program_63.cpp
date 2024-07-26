#include <iostream>
#include <string>

using namespace std;

// Student class
class Student {
public:
    string name;
    int en_no;

    Student(string name, int en_no) : name(name), en_no(en_no) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Enrollment No.: " << en_no << endl;
    }
};

// Internal marks class
class Internal {
public:
    int internal_mark;

    Internal(int internal_mark) : internal_mark(internal_mark) {}
};

// University marks class
class University {
public:
    int university_mark;

    University(int university_mark) : university_mark(university_mark) {}
};

// External marks class
class External {
public:
    int external_mark;

    External(int external_mark) : external_mark(external_mark) {}
};

// Result class
class Result {
public:
    Student student;
    Internal internal;
    University university;
    External external;

    Result(string name, int en_no, int internal_mark, int university_mark, int external_mark)
        : student(name, en_no), internal(internal_mark), university(university_mark), external(external_mark) {}

    void display() {
        student.display();
        cout << "Internal Mark: " << internal.internal_mark << endl;
        cout << "University Mark: " << university.university_mark << endl;
        cout << "External Mark: " << external.external_mark << endl;
    }
};

int main() {
    Result result("John Doe", 12345, 75, 80, 65);
    result.display();

    return 0;
}
