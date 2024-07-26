#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // File mode parameters in C++:
    // ios::in: Open for input operations.
    // ios::out: Open for output operations.
    // ios::app: Append to the end of the file.
    // ios::trunc: Truncate the file to zero length.
    // ios::binary: Open the file in binary mode.
    // ios::ate: Set the file pointer to the end of the file.

    // Open the source file for reading
    ifstream sourceFile("student1.txt", ios::in);

    // Open the destination file for writing
    ofstream destFile("student2.txt", ios::out);

    // Check if the files were opened successfully
    if (!sourceFile.is_open() || !destFile.is_open()) {
        cerr << "Error: Could not open files." << endl;
        return 1;
    }

    // Copy character by character
    char ch;
    while (sourceFile.get(ch)) {
        destFile << ch;
    }

    // Close the files
    sourceFile.close();
    destFile.close();

    cout << "File copied successfully!" << endl;

    return 0;
}
