#include <iostream>
#include <string>

using namespace std;

class book_details {
private:
    string title;
    string author;
    int edition;
    double price;
    int no_of_copies_available;

public:
    // Constructor
    book_details(string title="", string author="", int edition=0, double price=0, int no_of_copies_available=0) : 
        title(title), author(author), edition(edition), price(price), no_of_copies_available(no_of_copies_available) {}

    // Display function
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Edition: " << edition << endl;
        cout << "Price: Rs. " << price << endl;
        cout << "Copies available: " << no_of_copies_available << endl;
        cout << "---------------------" << endl;
    }

    // Find books function
    void find_books(double max_price) {
        if (price < max_price) {
            display();
        }
    }
};

int main() {
    // Create an array of book_details
    book_details books[5] = {
        {"C++ Programming", "Bjarne Stroustrup", 4, 500, 10},
        {"Data Structures and Algorithms", "Thomas H. Cormen", 3, 750, 5},
        {"Introduction to Algorithms", "Thomas H. Cormen", 3, 1000, 2},
        {"The C Programming Language", "Brian W. Kernighan", 2, 200, 15},
        {"Head First C++", "David Griffiths", 2, 400, 8}
    };

    // Display all book details
    cout << "All Book Details:" << endl;
    for (int i = 0; i < 5; i++) {
        books[i].display();
    }

    // Find and display books with price less than Rs. 250
    cout << "\nBooks with Price less than Rs. 250:" << endl;
    for (int i = 0; i < 5; i++) {
        books[i].find_books(250);
    }

    return 0;
}
