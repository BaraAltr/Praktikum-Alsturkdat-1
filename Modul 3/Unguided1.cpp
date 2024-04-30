#include <iostream>

using namespace std;

void selectionSort(double arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        swap(arr[max_idx], arr[i]);
    }
}

int main() {
    double IPS[] = {3.8, 2.9, 3.3, 4.0, 2.4};
    int n = sizeof(IPS) / sizeof(IPS[0]);

    cout << "Urutan karakter sebelum sorting: " << endl;
    for (int i = 0; i < n; i++) {
        cout << IPS[i] << " ";
    }
    cout << endl;

    selectionSort(IPS, n);

    cout << "Urutan karakter setelah sorting: " << endl;
    for (int i = 0; i < n; i++) {
        cout << IPS[i] << " ";
    }
    cout << endl;

    return 0;
}