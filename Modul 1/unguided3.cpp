#include <iostream>
#include <map>

using namespace std;

// Fungsi-fungsi untuk operasi aritmatika
float add(float x, float y) { return x + y; }
float subtract(float x, float y) { return x - y; }
float multiply(float x, float y) { return x * y; }
float divide(float x, float y) { return (y == 0) ? 0 : x / y; }

int main() {
    // Inisialisasi map dengan pasangan nilai string dan fungsi
    map<string, float(*)(float, float)> operations;
    operations["+"] = add;
    operations["-"] = subtract;
    operations["*"] = multiply;
    operations["/"] = divide;

    float num1, num2;
    string op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    // Mencari dan menjalankan fungsi yang sesuai dari map
    if (operations.find(op) != operations.end()) {
        cout << "Result: " << operations[op](num1, num2) << endl;
    } else {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
