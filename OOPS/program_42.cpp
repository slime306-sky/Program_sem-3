#include <iostream>

using namespace std;

class VALUE {
private:
    int num1;
    int num2;

public:
    void inputData() {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }

    void displayData() {
        cout << "Number 1: " << num1 << endl;
        cout << "Number 2: " << num2 << endl;
    }

    VALUE addValues(VALUE obj1, VALUE obj2) {
        VALUE result;
        result.num1 = obj1.num1 + obj2.num1;
        result.num2 = obj1.num2 + obj2.num2;
        return result;
    }
};

int main() {
    VALUE obj1, obj2, result;

    cout << "Enter data for object 1: " << endl;
    obj1.inputData();

    cout << "Enter data for object 2: " << endl;
    obj2.inputData();

    result = result.addValues(obj1, obj2);

    cout << "\nObject 1: " << endl;
    obj1.displayData();

    cout << "\nObject 2: " << endl;
    obj2.displayData();

    cout << "\nResult of adding Object 1 and Object 2: " << endl;
    result.displayData();

    return 0;
}

