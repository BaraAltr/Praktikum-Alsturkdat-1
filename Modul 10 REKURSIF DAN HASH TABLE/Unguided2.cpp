#include <iostream>
using namespace std;

// Deklarasi fungsi
int fungsiA(int n);
int fungsiB(int n);

// Fungsi pertama
int fungsiA(int n) {
    if (n <= 1) {
        return 1; // Basis kasus: faktorial dari 0 atau 1 adalah 1
    } else {
        return n * fungsiB(n - 1); // Memanggil fungsiB
    }
}

// Fungsi kedua
int fungsiB(int n) {
    return fungsiA(n); // Memanggil fungsiA
}

int main() {
    int angka;
    cout << "Masukkan Bilangan Bulat: ";
    cin >> angka;

    if (angka < 0) {
        cout << "Faktorial hanya dapat dihitung untuk bilangan bulat positif." << endl;
    } else {
        int hasil = fungsiA(angka);
        cout << "Faktorial Dari " << angka << " : " << hasil << endl;
    }

    return 0;
}
