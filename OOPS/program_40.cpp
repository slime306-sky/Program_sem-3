#include <iostream>

using namespace std;

class Matrix {
private:
    int arr[3][3];

public:
    // Constructor to initialize the matrix
    Matrix() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                arr[i][j] = 0;
            }
        }
    }

    // Function to get the value at a specific position
    int get(int i, int j) const {
        return arr[i][j];
    }

    // Function to set the value at a specific position
    void set(int i, int j, int value) {
        arr[i][j] = value;
    }

    // Friend function to add two matrices
    friend Matrix addMatrices(const Matrix& m1, const Matrix& m2);
};

// Friend function to add two matrices
Matrix addMatrices(const Matrix& m1, const Matrix& m2) {
    Matrix result;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result.set(i, j, m1.get(i, j) + m2.get(i, j));
        }
    }
    return result;
}

int main() {
    Matrix matrix1, matrix2, result;

    // Initialize matrix1
    matrix1.set(0, 0, 1);
    matrix1.set(0, 1, 2);
    matrix1.set(0, 2, 3);
    matrix1.set(1, 0, 4);
    matrix1.set(1, 1, 5);
    matrix1.set(1, 2, 6);
    matrix1.set(2, 0, 7);
    matrix1.set(2, 1, 8);
    matrix1.set(2, 2, 9);

    // Initialize matrix2
    matrix2.set(0, 0, 9);
    matrix2.set(0, 1, 8);
    matrix2.set(0, 2, 7);
    matrix2.set(1, 0, 6);
    matrix2.set(1, 1, 5);
    matrix2.set(1, 2, 4);
    matrix2.set(2, 0, 3);
    matrix2.set(2, 1, 2);
    matrix2.set(2, 2, 1);

    // Add the two matrices
    result = addMatrices(matrix1, matrix2);

    // Print the result matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result.get(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}

