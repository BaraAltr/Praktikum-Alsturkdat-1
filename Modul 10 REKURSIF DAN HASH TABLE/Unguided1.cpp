#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    if (n <= 1) {
        return 1; // Basis kasus: faktorial dari 0 atau 1 adalah 1
    } else {
        return n * faktorial(n - 1); // Rekurens: n * faktorial(n-1)
    }
}

int main() {
    int angka;
    cout << "Masukkan Bilangan Bulat: ";
    cin >> angka;

    if (angka < 0) {
        cout << "Faktorial hanya dapat dihitung untuk bilangan bulat positif." << endl;
    } else {
        int hasil = faktorial(angka);
        cout << "Faktorial Dari " << angka << " : " << hasil << endl;
    }

    return 0;
}
