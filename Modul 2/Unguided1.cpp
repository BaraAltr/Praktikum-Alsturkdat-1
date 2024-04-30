#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int data[MAX_SIZE];
    int genap[MAX_SIZE], ganjil[MAX_SIZE];
    int dataCount = 0, genapCount = 0, ganjilCount = 0;

    cout << "Masukkan data array: ";
    int num;
    while (cin.peek() != '\n' && dataCount < MAX_SIZE) {
        cin >> num;
        data[dataCount] = num;
        dataCount++;
        if (num % 2 == 0) {
            genap[genapCount] = num;
            genapCount++;
        } else {
            ganjil[ganjilCount] = num;
            ganjilCount++;
        }
    }

    cout << "Data array:";
    for (int i = 0; i < dataCount; ++i) {
        cout << " " << data[i];
    }

    cout << "\nNomor genap:";
    for (int i = 0; i < genapCount; ++i) {
        cout << " " << genap[i];
    }

    cout << "\nNomor ganjil:";
    for (int i = 0; i < ganjilCount; ++i) {
        cout << " " << ganjil[i];
    }

    return 0;
}