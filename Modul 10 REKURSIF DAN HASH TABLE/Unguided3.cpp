#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

const int TABLE_SIZE = 10; // Ukuran tabel hash

struct Mahasiswa {
    string NIM;
    int nilai;
};

class HashTable {
private:
    vector<list<Mahasiswa>> table;

    int hashFunction(const string &NIM) {
        int hash = 0;
        for (char ch : NIM) {
            hash = (hash * 31 + ch) % TABLE_SIZE;
        }
        return hash;
    }

public:
    HashTable() {
        table.resize(TABLE_SIZE);
    }

    void tambahData(const string &NIM, int nilai) {
        int index = hashFunction(NIM);
        table[index].push_back({NIM, nilai});
    }

    void hapusData(const string &NIM) {
        int index = hashFunction(NIM);
        auto &chain = table[index];
        auto it = remove_if(chain.begin(), chain.end(), [&](const Mahasiswa &m) {
            return m.NIM == NIM;
        });
        if (it != chain.end()) {
            chain.erase(it, chain.end());
            cout << "Data dengan NIM " << NIM << " berhasil dihapus." << endl;
        } else {
            cout << "Data dengan NIM " << NIM << " tidak ditemukan." << endl;
        }
    }

    void cariDataByNIM(const string &NIM) {
        int index = hashFunction(NIM);
        for (const auto &m : table[index]) {
            if (m.NIM == NIM) {
                cout << "NIM: " << m.NIM << ", Nilai: " << m.nilai << endl;
                return;
            }
        }
        cout << "Data dengan NIM " << NIM << " tidak ditemukan." << endl;
    }

    void cariDataByNilai(int nilaiMin, int nilaiMax) {
        bool found = false;
        for (const auto &chain : table) {
            for (const auto &m : chain) {
                if (m.nilai >= nilaiMin && m.nilai <= nilaiMax) {
                    cout << "NIM: " << m.NIM << ", Nilai: " << m.nilai << endl;
                    found = true;
                }
            }
        }
        if (!found) {
            cout << "Tidak ada data mahasiswa dengan nilai dalam rentang " << nilaiMin << "-" << nilaiMax << "." << endl;
        }
    }
};

int main() {
    HashTable ht;
    int pilihan;

    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah Data\n";
        cout << "2. Hapus Data\n";
        cout << "3. Cari Data berdasarkan NIM\n";
        cout << "4. Cari Data berdasarkan Rentang Nilai (80-90)\n";
        cout << "5. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> pilihan;

        if (pilihan == 1) {
            string NIM;
            int nilai;
            cout << "Masukkan NIM: ";
            cin >> NIM;
            cout << "Masukkan Nilai: ";
            cin >> nilai;
            ht.tambahData(NIM, nilai);
        } else if (pilihan == 2) {
            string NIM;
            cout << "Masukkan NIM: ";
            cin >> NIM;
            ht.hapusData(NIM);
        } else if (pilihan == 3) {
            string NIM;
            cout << "Masukkan NIM: ";
            cin >> NIM;
            ht.cariDataByNIM(NIM);
        } else if (pilihan == 4) {
            ht.cariDataByNilai(80, 90);
        } else if (pilihan == 5) {
            cout << "Keluar dari program." << endl;
        } else {
            cout << "Pilihan tidak valid. Coba lagi." << endl;
        }
    } while (pilihan != 5);

    return 0;
}
