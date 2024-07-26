#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // File names
  string file1 = "file1.txt";
  string file2 = "file2.txt";
  string outputFile = "merged.txt";

  // Open input files
  ifstream inputFile1(file1);
  ifstream inputFile2(file2);

  // Check if files opened successfully
  if (!inputFile1.is_open() || !inputFile2.is_open()) {
    cerr << "Error opening files!" << endl;
    return 1;
  }

  // Open output file
  ofstream outputFileStream(outputFile);

  // Copy content from first file to output file
  string line;
  while (getline(inputFile1, line)) {
    outputFileStream << line << endl;
  }

  // Copy content from second file to output file
  while (getline(inputFile2, line)) {
    outputFileStream << line << endl;
  }

  // Close files
  inputFile1.close();
  inputFile2.close();
  outputFileStream.close();

  cout << "Files merged successfully!" << endl;

  return 0;
}

