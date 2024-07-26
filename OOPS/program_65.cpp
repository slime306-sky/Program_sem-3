#include <iostream>
#include <string>

using namespace std;

// Base class Publisher
class Publisher {
protected:
    string title;

public:
    void setTitle(const string& t) { title = t; }
    string getTitle() const { return title; }
};

// Derived class Book
class Book : public Publisher {
private:
    int pageNo;

public:
    void setPageNo(int p) { pageNo = p; }
    int getPageNo() const { return pageNo; }

    void printDetails() const {
        cout << "Title: " << getTitle() << endl;
        cout << "Page No: " << getPageNo() << endl;
    }
};

// Derived class Tape
class Tape : public Publisher {
private:
    int playTime;

public:
    void setPlayTime(int t) { playTime = t; }
    int getPlayTime() const { return playTime; }

    void printDetails() const {
        cout << "Title: " << getTitle() << endl;
        cout << "Play Time: " << getPlayTime() << " minutes" << endl;
    }
};

int main() {
    // Create a Book object
    Book book1;
    book1.setTitle("The Lord of the Rings");
    book1.setPageNo(1200);
    book1.printDetails();

    cout << endl;

    // Create a Tape object
    Tape tape1;
    tape1.setTitle("The Beatles - Abbey Road");
    tape1.setPlayTime(45);
    tape1.printDetails();

    return 0;
}
