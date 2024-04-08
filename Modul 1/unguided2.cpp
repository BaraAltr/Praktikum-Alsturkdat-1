#include <iostream>
#include "unguided1.cpp"

using namespace std;

int main() {
    Calculator calculator;

    cout << "Calculator Program" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;

    int choice;
    cout << "Enter choice (1/2/3/4): ";
    cin >> choice;

    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (choice) {
        case 1:
            cout << "Result: " << calculator.add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << calculator.subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << calculator.multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << calculator.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }

    return 0;
}
