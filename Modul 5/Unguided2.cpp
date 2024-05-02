/*
Pertanyaan: Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array. Bagaimana cara mengisi data dan menampilkannya?

Jawab: Jika mendeklarasikan variabel struct pada guided1 berjenis array, maka kita mendeklarasikan sebuah array dari struktur `Buku` dan memberikan instruksi kepada program untuk menyediakan ruang memori untuk beberapa objek `Buku` yang akan disimpan dalam array tersebut. Misalnya, `Buku daftar_buku[5];` akan membuat array `daftar_buku` yang dapat menyimpan hingga lima buku.

Kemudian, proses pengisian data ke dalam array `daftar_buku` mirip dengan cara mengisi data ke dalam `MyBook` dan `MyBook`, namun perlu menentukan indeks dari setiap objek `Buku` dalam array tersebut. Setiap indeks mewakili satu buku dalam array. Misalnya, `daftar_buku[0]` akan merepresentasikan buku pertama, `daftar_buku[1]` akan merepresentasikan buku kedua, dan seterusnya.

Setelah mengisi data ke dalam array `daftar_buku`, gunakan loop, seperti `for` loop, untuk menampilkan informasi tentang setiap buku dalam array. Dengan melakukan iterasi melalui array dan mencetak informasi buku untuk setiap indeks, maka dapat menampilkan data buku-buku tersebut dalam urutan yang sesuai.

Penting untuk diingat bahwa kita harus menyesuaikan ukuran array dengan jumlah buku yang ingin kita simpan. Jika ingin menyimpan tiga buku, maka dapat mendeklarasikan array `Buku daftar_buku[3];` dan kemudian menggunakan loop hanya untuk tiga elemen.

Dengan demikian, menggunakan array dari struktur `Buku` memungkinkan untuk mengelola dan memanipulasi kumpulan buku dengan cara yang lebih efisien dalam program.
*/

// Contoh program deklarasi variabel struct berjenis array 
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