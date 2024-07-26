#include <iostream>
#include <cstring>

using namespace std;

class my_string {
public:
    char *str_ptr;

    // Constructor
    my_string(const char *str) {
        str_ptr = new char[strlen(str) + 1]; 
        strcpy(str_ptr, str); 
    }

    // Overloaded + operator for string concatenation
    my_string operator+(const my_string& other) const {
        int len1 = strlen(str_ptr);
        int len2 = strlen(other.str_ptr);
        char *result = new char[len1 + len2 + 1]; 

        strcpy(result, str_ptr); // Copy the first string
        strcat(result, other.str_ptr); // Concatenate the second string

        my_string new_string(result); // Create a new my_string object with the concatenated string
        delete[] result; // Release memory allocated for result
        return new_string;
    }

    // Destructor to release memory
    ~my_string() {
        delete[] str_ptr;
    }
};

int main() {
    my_string str1("Hello ");
    my_string str2("world!");

    my_string str3 = str1 + str2; // Concatenate using the overloaded + operator

    cout << "Concatenated string: " << str3.str_ptr << endl;

    return 0;
}

