#include <iostream>
#include <string>

using namespace std;

class String {
private:
    string str;

public:
    String(const string& s = "") : str(s) {}

    // Overloading the + operator for string concatenation
    String operator+(const String& other) {
        return String(str + other.str);
    }

    // Overloading the << operator for outputting String objects
    friend ostream& operator<<(ostream& out, const String& s) {
        out << s.str;
        return out;
    }
};

int main() {
    String str1("Hello ");
    String str2("world!");

    String result = str1 + str2; // Concatenate using the overloaded + operator

    cout << result << endl; // Output the concatenated string

    return 0;
}