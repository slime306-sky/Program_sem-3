#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream inputFile("input.txt");
  ofstream outputFile("output.txt");

  if (inputFile.is_open() && outputFile.is_open()) {
    char character;

    while (inputFile.get(character)) {
      outputFile << static_cast<char>(toupper(character));
    }

    inputFile.close();
    outputFile.close();
    cout << "File converted successfully!" << endl;
  } else {
    cout << "Error opening files!" << endl;
  }

  return 0;
}