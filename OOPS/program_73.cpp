#include <iostream>

using namespace std;

class ITEM {
private:
  int item_code;
  float item_rate;
  int quantity;

public:
  // Constructor to initialize item details
  ITEM(int code, float rate, int qty) : item_code(code), item_rate(rate), quantity(qty) {}

  // Function to calculate the amount of an item
  float calculateAmount() {
    return item_rate * quantity;
  }

  // Function to print item code and amount
  void printItemDetails() {
    cout << "Item Code: " << item_code << endl;
    cout << "Amount: " << calculateAmount() << endl;
  }
};

int main() {
  // Create an array of pointers to ITEM objects
  ITEM* items[3];

  // Create ITEM objects and store their pointers in the array
  items[0] = new ITEM(101, 100.0, 5);
  items[1] = new ITEM(102, 50.0, 10);
  items[2] = new ITEM(103, 20.0, 20);

  // Print item details for each item
  for (int i = 0; i < 3; i++) {
    items[i]->printItemDetails();
    cout << endl;
  }

  // Deallocate memory for the dynamically allocated ITEM objects
  for (int i = 0; i < 3; i++) {
    delete items[i];
  }

  return 0;
}

