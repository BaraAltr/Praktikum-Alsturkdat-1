#include <iostream>
#include <string>

using namespace std;
struct Buku{
    string Judul_buku;
    string Pengarang;
    string Penerbit;
    int Tebal_buku;
    double Harga_buku;    
}; Buku buku1; Buku buku2;
int main(){
buku1.Judul_buku = "Algoritma Structure data";
buku1.Pengarang = "Yunus Prademon";
buku1.Penerbit = "Gramedia Pustaka";
buku1.Tebal_buku = 300;
buku1.Harga_buku = 120000;

buku2.Judul_buku = "Sains Data";
buku2.Pengarang = "Shin Lenathea";
buku2.Penerbit = "Erlangga";
buku2.Tebal_buku =500;
buku2.Harga_buku = 100000;

cout << "Informasi buku" << endl;
cout << "judul : " << buku1.Judul_buku << endl;
cout << "Pengarang :" << buku1.Pengarang << endl;
cout << "Penerbit :" << buku1.Penerbit << endl;
cout << "Tebal Buku :" << buku1.Tebal_buku << endl;
cout << "Harga Buku :" << buku1.Harga_buku << endl;

cout << "judul : " << buku2.Judul_buku << endl;
cout << "Pengarang :" << buku2.Pengarang << endl;
cout << "Penerbit :" << buku2.Penerbit << endl;
cout << "Tebal Buku :" << buku2.Tebal_buku << endl;
cout << "Harga Buku :" << buku2.Harga_buku << endl;

return 0;
}