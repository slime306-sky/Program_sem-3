#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Enter the size of the matrices (n): ";
  cin >> n;

  int matrix1[n][n], matrix2[n][n], sumMatrix[n][n];

  cout << "Enter the elements of the first matrix:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix1[i][j];
    }
  }

  cout << "Enter the elements of the second matrix:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix2[i][j];
    }
  }

  // Calculate the sum of the matrices
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  // Display the sum matrix
  cout << "Sum of the matrices:\n";
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << sumMatrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}