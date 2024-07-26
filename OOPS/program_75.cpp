#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream inputFile("input.txt"); // Replace "input.txt" with your input file name
  ofstream outputFile("output.txt"); // Replace "output.txt" with your output file name

  if (inputFile.is_open() && outputFile.is_open()) {
    char ch;
    while (inputFile.get(ch)) {
      outputFile << tolower(ch); // Convert to lowercase and write to output file
    }
    inputFile.close();
    outputFile.close();
    cout << "File converted successfully." << endl;
  } else {
    cout << "Error opening files." << endl;
  }

  return 0;
}
