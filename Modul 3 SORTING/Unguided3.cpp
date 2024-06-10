#include <iostream>

using namespace std;

void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Input (n): ";
    cin >> n;

    string strings[n];

    for (int i = 0; i < n; i++) {
        cout << "Karakter ke-" << i + 1 << ": ";
        cin >> strings[i];
    }

    // Sorting secara menaik (ascending) menggunakan Bubble Sort
    bubbleSort(strings, n);
    
    cout << "Karakter sebelum diurutkan:" << endl;
    for (int i = 0; i < n; i++) {
        cout << strings[i];
        if (i != n - 1) {
            cout << " ";
        }
    }
    cout << endl ;

    cout << endl << "Karakter setelah diurutkan secara menaik (ascending):" << endl;
    for (int i = 0; i < n; i++) {
        cout << strings[i];
        if (i != n - 1) {
            cout << " ";
        }
    }
    cout << endl << endl;

    // Sorting secara menurun (descending) menggunakan Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strings[j] < strings[j + 1]) {
                swap(strings[j], strings[j + 1]);
            }
        }
    }
    
    cout << "Karakter setelah diurutkan secara menurun (descending):" << endl;
    for (int i = 0; i < n; i++) {
        cout << strings[i];
        if (i != n - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}