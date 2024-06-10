#include <iostream>
#include <string>

using namespace std;

const int MAX_ITEMS = 5;

struct Buku{
    string Judul_buku[MAX_ITEMS];
    string Pengarang[MAX_ITEMS];
    string Penerbit[MAX_ITEMS];
    int Tebal_buku[MAX_ITEMS];
    double Harga_buku[MAX_ITEMS];    
}; 

int main() {
    Buku buku;

    // Isi data untuk buku pertama
    buku.Judul_buku[0] = "Algoritma Structure data";
    buku.Pengarang[0] = "Yunus Prademon";
    buku.Penerbit[0] = "Gramedia Pustaka";
    buku.Tebal_buku[0] = 300;
    buku.Harga_buku[0] = 120000;

    // Isi data untuk buku kedua
    buku.Judul_buku[1] = "Sains Data";
    buku.Pengarang[1] = "Shin Lenathea";
    buku.Penerbit[1] = "Erlangga";
    buku.Tebal_buku[1] = 500;
    buku.Harga_buku[1] = 100000;

    // Isi data untuk buku ketiga
    buku.Judul_buku[2] = "Cantik Itu Luka";
    buku.Pengarang[2] = "Eka Kurniawan";
    buku.Penerbit[2] = "Gramedia Pustaka Utama";
    buku.Tebal_buku[2] = 520;
    buku.Harga_buku[2] = 169000;

    // Isi data untuk buku keempat
    buku.Judul_buku[3] = "Laut Bercerita";
    buku.Pengarang[3] = "Leila S. Chudori";
    buku.Penerbit[3] = "Kepustakaan Populer Gramedia";
    buku.Tebal_buku[3] = 394;
    buku.Harga_buku[3] = 109000;

    // Isi data untuk buku kelima
    buku.Judul_buku[4] = "Laskar Pelangi Edisi ke-50";
    buku.Pengarang[4] = "Andrea Hirata";
    buku.Penerbit[4] = "Bentang Pustaka";
    buku.Tebal_buku[4] = 340;
    buku.Harga_buku[4] = 89100;

    // Tampilkan informasi buku
    cout << "Informasi buku" << endl;

    for (int i = 0; i < MAX_ITEMS; ++i) {
        cout << "Buku ke-" << i+1 << ":" << endl;
        cout << "Judul : " << buku.Judul_buku[i] << endl;
        cout << "Pengarang : " << buku.Pengarang[i] << endl;
        cout << "Penerbit : " << buku.Penerbit[i] << endl;
        cout << "Tebal Buku : " << buku.Tebal_buku[i] << endl;
        cout << "Harga Buku : " << buku.Harga_buku[i] << endl;
        cout << endl;
    }

    return 0;
}
