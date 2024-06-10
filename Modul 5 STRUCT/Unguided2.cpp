#include <iostream>
#include <string>
using namespace std;

struct Buku{
    string judul_buku[2];
    string pengarang[2];
    string penerbit[2];
    int tebal_halaman[2];
    double harga_buku[2]; 
};

int main(){

    Buku MyBook;
    //Mengisi data ke dalam variabel MyBook
    MyBook.judul_buku[0] = "Algoritma Pemrograman";
    MyBook.pengarang[0] = "Yunus Prademon";
    MyBook.penerbit[0] = "Gramedia Citra Raya";
    MyBook.tebal_halaman[0] = 30;
    MyBook.harga_buku[0] = 12.499;

    //Mengisi data ke dalam variabel MyBook
    MyBook.judul_buku[1] = "MU menang";
    MyBook.pengarang[1] = "Chelsea";
    MyBook.penerbit[1] = "ITTP";
    MyBook.tebal_halaman[1] = 100;
    MyBook.harga_buku[1] = 100.999;

    //Menampilkan data
    for (int i=0; i < 2; i++){
        cout << "\n\tBuku favorit saya ke-" << i+1 << endl;
        cout << "\tJudul buku: " << MyBook.judul_buku[i] << endl;
        cout << "\tPengarang: " << MyBook.pengarang[i] << endl;
        cout << "\tPenerbit: " << MyBook.penerbit[i] << endl;
        cout << "\tTebal halaman: " << MyBook.tebal_halaman[i] << endl;
        cout << "\tHarga: Rp" << MyBook.harga_buku[i] << endl;
    }
    return 0;
}