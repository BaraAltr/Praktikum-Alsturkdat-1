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
    string names[] = {"Leo", "Nor", "sana", "mina", "ryu", "caca", "najwa", "surya", "Hanip", "Shin"};
    int n = sizeof(names) / sizeof(names[0]);

    cout << "Nama-nama sebelum sorting: " << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }
    cout << endl << endl;

    bubbleSort(names, n);

    cout << "Nama-nama setelah sorting: " << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }
    cout << endl;

    return 0;
}