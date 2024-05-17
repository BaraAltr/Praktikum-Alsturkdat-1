#include <iostream>
using namespace std;

int maksimalQueue; // Jumlah maksimal antrian
int front = 0; // Penanda depan antrian
int back = 0; // Penanda belakang antrian
string* queuePasien; // Array untuk menyimpan antrian

bool isFull() { // Pengecekan antrian penuh atau tidak
    if (back == maksimalQueue) {
        return true;
    } else {
        return false;
    }
}

bool isEmpty() { // Antrian kosong atau tidak
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) { // Menambahkan antrian
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        if (isEmpty()) { // Jika antrian kosong
            queuePasien[0] = data;
            front++;
            back++;
        } else { // Jika antrian ada isi
            queuePasien[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() { // Mengurangi antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queuePasien[i] = queuePasien[i + 1];
        }
        back--;
    }
}

int countQueue() { // Menghitung jumlah antrian
    return back;
}

void clearQueue() { // Menghapus semua antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queuePasien[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() { // Melihat isi antrian
    cout << "Data antrian pasien:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queuePasien[i] != "") {
            cout << i + 1 << ". " << queuePasien[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    cout << "Masukkan jumlah maksimal antrian: ";
    cin >> maksimalQueue;
    queuePasien = new string[maksimalQueue];

    int choice;
    string data;

    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah Antrian\n";
        cout << "2. Kurangi Antrian\n";
        cout << "3. Lihat Antrian\n";
        cout << "4. Jumlah Antrian\n";
        cout << "5. Hapus Semua Antrian\n";
        cout << "6. Keluar\n";
        cout << "Pilih menu: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan nama untuk ditambahkan ke antrian: ";
                cin >> data;
                enqueueAntrian(data);
                break;
            case 2:
                dequeueAntrian();
                break;
            case 3:
                viewQueue();
                break;
            case 4:
                cout << "Jumlah antrian = " << countQueue() << endl;
                break;
            case 5:
                clearQueue();
                break;
            case 6:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih menu yang benar.\n";
        }
    } while (choice != 6);

    delete[] queuePasien; // Dealokasi memori yang dialokasikan sebelumnya
    return 0;
}