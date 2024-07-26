#include <iostream>
#include <string>

using namespace std;

struct Item {
    int item_code;
    string item_name;
    int qty;
};

int main() {
    int numItems;

    cout << "Enter the number of items: ";
    cin >> numItems;

    // Dynamically allocate memory for the inventory array
    Item* inventory = new Item[numItems];

    // Input item details using pointers
    for (int i = 0; i < numItems; i++) {
        cout << "\nItem " << i + 1 << ":" << endl;
        cout << "Enter item code: ";
        cin >> inventory[i].item_code;
        cout << "Enter item name: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, inventory[i].item_name);
        cout << "Enter quantity: ";
        cin >> inventory[i].qty;
    }

    // Display inventory using pointers
    cout << "\nInventory:" << endl;
    for (int i = 0; i < numItems; i++) {
        cout << "\nItem " << i + 1 << ":" << endl;
        cout << "Item Code: " << inventory[i].item_code << endl;
        cout << "Item Name: " << inventory[i].item_name << endl;
        cout << "Quantity: " << inventory[i].qty << endl;
    }

    // Deallocate memory
    delete[] inventory;

    return 0;
}