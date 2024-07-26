#include <iostream>
#include <vector>

using namespace std;

class Vector {
private:
  vector<float> data;

public:
  // Constructor to create the vector
  Vector() {}

  // Function to modify the value of a given element
  void modifyElement(int index, float value) {
    if (index >= 0 && index < data.size()) {
      data[index] = value;
    } else {
      cout << "Invalid index." << endl;
    }
  }

  // Function to display the vector in the form (10, 20, 30)
  void display() {
    cout << "(";
    for (int i = 0; i < data.size(); i++) {
      cout << data[i];
      if (i < data.size() - 1) {
        cout << ", ";
      }
    }
    cout << ")" << endl;
  }

  // Function to add a new element to the vector
  void addElement(float value) {
    data.push_back(value);
  }
};

int main() {
  Vector myVector;

  // Add elements to the vector
  myVector.addElement(10.0);
  myVector.addElement(20.0);
  myVector.addElement(30.0);

  // Display the vector
  cout << "Vector: ";
  myVector.display();

  // Modify the second element
  myVector.modifyElement(1, 50.0);

  // Display the vector again
  cout << "Modified vector: ";
  myVector.display();

  return 0;
}

