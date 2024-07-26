#include <iostream>
#include <string>

using namespace std;

class Account {
public:
    int accId;
    string name;
    double balance;

    // Function to assign values
    void setAccountDetails(int id, string n, double bal) {
        accId = id;
        name = n;
        balance = bal;
    }

    // Function to display account details
    void displayAccountDetails() {
        cout << "Account ID: " << accId << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Function to search for an account by ID
void searchAccount(Account accArr[], int numAccounts, int searchId) {
    bool found = false;
    for (int i = 0; i < numAccounts; ++i) {
        if (accArr[i].accId == searchId) {
            cout << "Account Found:" << endl;
            accArr[i].displayAccountDetails();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Account not found." << endl;
    }
}

int main() {
    const int numAccounts = 5; // Declare an array of 5 accounts
    Account accounts[numAccounts];

    // Initialize account details
    accounts[0].setAccountDetails(101, "John Doe", 1000.00);
    accounts[1].setAccountDetails(102, "Jane Smith", 2500.50);
    accounts[2].setAccountDetails(103, "David Brown", 1500.75);
    accounts[3].setAccountDetails(104, "Emily Jones", 3000.00);
    accounts[4].setAccountDetails(105, "Michael Wilson", 400.25);

    // Print details of all accounts
    cout << "Account Details:" << endl;
    for (int i = 0; i < numAccounts; ++i) {
        accounts[i].displayAccountDetails();
        cout << "-------------------" << endl;
    }

    // Search for a specific account
    int searchId;
    cout << "Enter the account ID to search: ";
    cin >> searchId;
    searchAccount(accounts, numAccounts, searchId);

    return 0;
}
