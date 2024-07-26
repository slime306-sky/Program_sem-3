#include <iostream>
#include <string>

using namespace std;

class Book {
public:
    string book_title;
    string publisher;
    string author_name;

    // Overloading << operator for output
    friend ostream& operator<<(ostream& out, const Book& book);

    // Overloading >> operator for input
    friend istream& operator>>(istream& in, Book& book);
};

// Overloading << operator for output
ostream& operator<<(ostream& out, const Book& book) {
    out << "Book Title: " << book.book_title << endl;
    out << "Publisher: " << book.publisher << endl;
    out << "Author Name: " << book.author_name << endl;
    return out;
}

// Overloading >> operator for input
istream& operator>>(istream& in, Book& book) {
    cout << "Enter book title: ";
    in >> book.book_title;
    cout << "Enter publisher: ";
    in >> book.publisher;
    cout << "Enter author name: ";
    in >> book.author_name;
    return in;
}

int main() {
    Book book1;
    cout << "Enter book details:\n";
    cin >> book1; 

    cout << "\nBook Details:\n";
    cout << book1; // Using overloaded << operator for output

    return 0;
}
