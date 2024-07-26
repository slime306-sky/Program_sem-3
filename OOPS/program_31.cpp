#include <iostream>
#include <string>

using namespace std;

class MyString {
private:
    string str;

public:
    // Constructor
    MyString(const string& s) : str(s) {}

    // Get string length
    int length() const {
        return str.length();
    }

    // Compare strings
    bool compare(const MyString& other) const {
        return str == other.str;
    }

    // Reverse string
    MyString reverse() const {
        string reversed = str;
        reverse(reversed.begin(), reversed.end());
        return MyString(reversed);
    }

    // Print the string
    void print() const {
        cout << str << endl;
    }
};

int main() {
    MyString str1("Hello");
    MyString str2("World");
    MyString str3("racecar");

    // Get string length
    cout << "Length of str1: " << str1.length() << endl;

    // Compare strings
    cout << "str1 and str2 are equal: " << str1.compare(str2) << endl;
    cout << "str1 and str1 are equal: " << str1.compare(str1) << endl;

    // Reverse string
    MyString reversed = str3.reverse();
    cout << "Reversed string: ";
    reversed.print(); 

    return 0;
}
```
