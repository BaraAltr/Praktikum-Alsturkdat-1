# <h1 align="center">Laporan Praktikum Modul Rekursif & Hash Table</h1>
<p align="center">Bara Aulia Attar</p>
<p align="center">2311110053</p>

## Dasar Teori
### REKURSIF
Rekursif adalah salah satu metode dalam dunia matematika dimana definisi sebuah fungsi mengandung fungsi itu sendiri. Dalam dunia pemrograman, rekursif diimplementasikan dalam sebuah fungsi yang memanggil dirinya sendiri [1].
Terdapat dua jenis fungsi rekursif:
<pre>
1. Rekursif langsung adalah jenis rekursi di mana suatu fungsi memanggil dirinya sendiri secara langsung dalam blok kodenya sendiri.
2. Rekursif tidak langsung adalah suatu fungsi memanggil fungsi lain yang kemudian memanggil kembali fungsi pertama. Rekursif berakhir ketika kasus dasar terpenuhi, dan pada saat itulah proses berhenti.
</pre>

## HASH TABLE
Hash table adalah sebuah cara menyimpan suatu data pada memori ke dalam baris-baris dan kolom-kolom sehingga membentuk tabel yang dapat diakses dengan cepat [2]. 
Operasi hash table yaitu:
<pre>
- Insertion: Memasukkan data baru ke dalam hash table dengan memanggil fungsi hash untuk menentukan posisi bucket yang tepat, dan kemudian menambahkan data ke bucket tersebut.
- Deletion: Menghapus data dari hash table dengan mencari data menggunakan fungsi hash, dan kemudian menghapusnya dari bucket yang sesuai.
- Searching: Mencari data dalam hash table dengan memasukkan input kunci ke fungsi hash untuk menentukan posisi bucket, dan kemudian mencari data di dalam bucket yang sesuai.
- Update: Memperbarui data dalam hash table dengan mencari data menggunakan fungsi hash, dan kemudian memperbarui data yang ditemukan.
- Traversal: Melalui seluruh hash table untuk memproses semua data yang ada dalam tabel.
</pre>

## Guided
### 1. Rekursif Langsung (Direct Recursion)
```C++
#include <iostream>
using namespace std;

// Code ini berfungsi untuk melakukan hitung mundur
// dari angka yang diinputkan
void countdown(int 'n') {
    if ('n' >= 1) {
        cout << 'n' << " ";
        countdown('n' - 1);
    }
}

int main() {
    cout << "Rekursif Langsung: ";
    countdown(5); // 5 merupakan input nya
    cout << endl;
    return 0;
}
```
### Penjelasan
Program diatas merupakan program rekursif langsung dimana menggunakan konsep rekursif untuk melakukan hitung mundur dari angka yang diinputkan.

Pertama, fungsi 'countdown' menerima sebuah parameter ''n'' yang merupakan angka awal untuk hitung mundur. Di dalam fungsi 'countdown', terdapat sebuah kondisi if ('n' >= 1). Jika kondisi ini terpenuhi (artinya 'n' masih lebih besar atau sama dengan 1), maka program akan melakukan dua hal:
<pre>
a. Mencetak nilai ''n'' ke layar (misalnya, jika 'n' = 5, akan mencetak "5 ").
b. Memanggil fungsi 'countdown' lagi dengan nilai 'n' - 1 (dalam kasus ini, countdown(4)).
</pre>
Proses ini akan terus berlanjut secara rekursif sampai nilai 'n' menjadi 0, di mana kondisi if ('n' >= 1) tidak terpenuhi lagi, dan rekursi akan berhenti. 
Terakhir, fungsi utama 'main' bekerja dengan program memanggil fungsi 'countdown' dengan nilai awal 5, sehingga akan melakukan hitung mundur dari 5 hingga 1. Setelah hitung mundur selesai, program akan keluar dengan status normal (return 0).

### 2. Rekursif Tidak Langsung (Indirect Recursion)
```C++
#include <iostream>
using namespace std;

void functionB(int 'n');

void functionA(int 'n') {
    if ('n' > 0) {
        cout << 'n' << " ";
        functionB('n' - 1); // Panggilan rekursif tidak langsung
    }
}

void functionB(int 'n') {
    if ('n' > 0) {
        cout << 'n' << " ";
        functionA('n' / 2); // Panggilan rekursif tidak langsung
    }
}

int main() {
    int num = 5;
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    return 0;
}
```
### Penjelasan
Program diatas merupakan program rekursif di mana dua fungsi saling memanggil satu sama lain secara rekursif.

Pertama, fungsi 'functionA' menerima sebuah parameter 'n' dan melakukan pengecekan kondisi if ('n' > 0). Jika kondisi terpenuhi, maka program akan:
<pre>
a. Mencetak nilai 'n' ke layar.
b. Memanggil fungsi 'functionB' dengan nilai 'n' - 1 secara rekursif.
</pre>
Fungsi 'functionB' juga menerima sebuah parameter 'n' dan melakukan pengecekan kondisi if ('n' > 0). Jika kondisi terpenuhi, maka program akan:
<pre>
a. Mencetak nilai 'n' ke layar.
b. Memanggil fungsi 'functionA' dengan nilai 'n' / 2 secara rekursif.
</pre>

Terakhir, dalam fungsi utama 'main', program memanggil fungsi 'functionA' dengan nilai awal 5. Ketika 'functionA' dipanggil dengan nilai 5, kondisi if ('n' > 0) terpenuhi, sehingga program akan:
<pre>
a. Mencetak nilai 5 ke layar.
b. Memanggil 'functionB' dengan nilai 4 (5 - 1).
</pre>
Di dalam 'functionB' dengan nilai 4, kondisi if ('n' > 0) juga terpenuhi, sehingga program akan:
<pre>
a. Mencetak nilai 4 ke layar.
b. Memanggil 'functionA' dengan nilai 2 (4 / 2).
</pre>
Proses ini akan terus berlanjut secara rekursif, dengan 'functionA' dan 'functionB' saling memanggil satu sama lain dengan nilai yang terus berkurang, sampai akhirnya kondisi if ('n' > 0) tidak terpenuhi lagi, dan rekursi akan berhenti. Setelah rekursi selesai, program akan keluar dengan status normal (return 0).

### 3. Hash Table
```C++
#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int TABLE_SIZE = 11;

string name;
string phone_number;
class HashNode{
    public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number){
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap{
    private:
    vector<HashNode*> table[TABLE_SIZE];
    public:
    int hashFunc(string key){
        int hash_val = 0;
        for (char c : key){
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }
    void insert(string name, string phone_number){
        int hash_val = hashFunc(name);

        for (auto node : table[hash_val]){
            if (node->name == name){
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }
    void remove(string name){
        int hash_val = hashFunc(name);

        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++){
            if ((*it)->name == name){
                table[hash_val].erase(it);
                return;
            }
        }
    }
    string searchByName(string name){
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]){
            if (node->name == name){
                return node->phone_number;
            }
        }
        return "";
    }
    void print(){
        for (int i = 0; i < TABLE_SIZE; i++){
            cout << i << ": ";
            for (auto pair : table[i]){
                if (pair != nullptr){
                    cout << "[" << pair->name << ", " << pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main(){
    HashMap employee_map;

    employee_map.insert("Mistah", "1234");
    employee_map.insert("Pastah", "5678");
    employee_map.insert("Ghana", "91011");

    cout << "Nomer Hp Mistah: " << employee_map.searchByName("Mistah") << endl;
    cout << "Nomer Hp Mistah: " << employee_map.searchByName("Pastah") << endl;
    cout << "Nomer Hp Mistah: " << employee_map.searchByName("Ghana") << endl;

    employee_map.remove("Mistah");

    cout << "Nomer Hp Mistah setelah dihapus: " << employee_map.searchByName("Mistah") << endl << endl;

    cout << "Hash Table: " << endl;

    employee_map.print();

    return 0;
}
```
### Penjelasan
Program diatas merupakan implementasi struktur data Hash Table untuk menyimpan dan mengakses pasangan nama dan nomor telepon karyawan. 

Pertama, Terdapat sebuah kelas 'HashNode' yang mewakili setiap node pada hash map. Node ini berisi atribut 'name' dan 'phone_number'. Kelas utama adalah 'HashMap' yang memiliki array vektor table dengan ukuran tetap TABLE_SIZE (dalam kasus ini 11). Setiap elemen pada array ini adalah vektor yang menyimpan node-node hash. Fungsi 'hashFunc' digunakan untuk menghitung nilai hash dari sebuah kunci (nama) dengan menjumlahkan nilai ASCII setiap karakternya dan mengambil sisa pembagian dengan TABLE_SIZE. Nilai hash ini digunakan sebagai indeks untuk menyimpan atau mencari node pada array table. Fungsi 'insert' digunakan untuk memasukkan pasangan nama dan nomor telepon ke dalam hash map. Jika nama sudah ada, nomor teleponnya akan diperbarui. Jika tidak, node baru akan ditambahkan ke vektor pada indeks yang sesuai dengan nilai hash dari nama tersebut. Fungsi 'remove' digunakan untuk menghapus node dengan nama tertentu dari hash map. Fungsi ini mencari node pada indeks yang sesuai dengan nilai hash dari nama, dan menghapusnya jika ditemukan. Fungsi 'searchByName' digunakan untuk mencari nomor telepon berdasarkan nama yang diberikan. Fungsi ini menghitung nilai hash dari nama, lalu memeriksa setiap node pada vektor di indeks yang sesuai. Jika nama ditemukan, nomor teleponnya akan dikembalikan. Jika tidak, string kosong akan dikembalikan. Fungsi 'print' digunakan untuk mencetak seluruh isi hash map dalam format yang mudah dibaca.

Terakhir, fungsi utama 'main', program membuat sebuah objek HashMap dan memanggil fungsi-fungsi di atasnya untuk memasukkan, mencari, menghapus, dan mencetak isi hash map.

## Unguided
### 1. Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif!
```C++
#include <iostream>
using namespace std;

// Fungsi untuk menghitung faktorial menggunakan rekursi
int factorial(int n) {
    if (n == 0) {  // basis kasus: faktorial dari 0 adalah 1
        return 1;
    } else {  // Rumus rekursif: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    int angka;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> angka;

    if (angka >= 0) {
        cout << "Faktorial dari " << angka << " adalah: " << factorial(angka) << endl;
    } else {
        cout << "Mohon masukkan bilangan bulat yang lebih besar atau sama dengan 0." << endl;
    }

    return 0;
}
```
#### Output:
![Screenshot 2024-06-10 120202](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/assets/161289680/43119313-593a-45aa-9e8b-22d9d948c491)
### Penjelasan
Program diatas merupakan program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif.

Pertama, program memiliki sebuah fungsi bernama factorial yang menerima sebuah parameter n bertipe integer. Fungsi factorial melakukan pengecekan terhadap nilai n:
<pre>
a. Jika n sama dengan 0, maka fungsi akan mengembalikan nilai 1. Ini merupakan basis kasus (base case) dari rekursi, karena faktorial dari 0 adalah 1 (0! = 1).
b. Jika n tidak sama dengan 0, maka fungsi akan melakukan operasi rekursif dengan rumus n! = n * (n-1)!. Artinya, fungsi factorial akan memanggil dirinya sendiri dengan argumen (n-1) dan mengalikan hasilnya dengan n.
</pre>
Terakhir, dalam fungsi utama 'main()', program meminta pengguna untuk memasukkan sebuah bilangan bulat positif. Program melakukan pengecekan terhadap bilangan yang dimasukkan:
<pre>
a. Jika bilangan yang dimasukkan lebih besar atau sama dengan 0, maka program akan memanggil fungsi factorial dengan bilangan tersebut sebagai argumen, dan menampilkan hasilnya ke layar.
b. Jika bilangan yang dimasukkan kurang dari 0, maka program akan menampilkan pesan error karena faktorial hanya dapat dihitung untuk bilangan bulat positif.
</pre>

### 2. Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 di atas!
```C++
#include <iostream>
using namespace std;

int factorialB(int n);

// Fungsi pertama yang memulai panggilan rekursi tidak langsung
int factorialA(int n) {
    if (n == 0) {  
        return 1;
    } else {  
        return n * factorialB(n - 1);
    }
}

// Fungsi kedua yang melanjutkan panggilan rekursi tidak langsung
int factorialB(int n) {
    if (n == 0) {  
        return 1;
    } else {  
        return n * factorialA(n - 1);
    }
}

int main() {
    int number;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> number;

    if (number >= 0) {
        cout << "Faktorial dari " << number << " adalah: " << factorialA(number) << endl;
    } else {
        cout << "Mohon masukkan bilangan bulat yang lebih besar atau sama dengan 0." << endl;
    }

    return 0;
}
```
#### Output
![Screenshot 2024-06-10 120334](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/assets/161289680/5d6860aa-17b7-4598-832c-4907daa03956)

### Penjelasan
Program diatas merupakan program yang sama dengan program soal nomor 1 akan tetapi menggunakan Rekursif Tidak Langsung (Indirect Recursion).

Pertama, program memiliki dua fungsi rekursif, yaitu factorialA dan factorialB.
Fungsi factorialA menerima sebuah parameter n bertipe integer dan melakukan pengecekan:
<pre>
a. Jika n sama dengan 0, maka fungsi akan mengembalikan nilai 1 (basis kasus).
b. Jika n tidak sama dengan 0, maka fungsi akan memanggil fungsi factorialB dengan argumen (n-1) dan mengalikan hasilnya dengan n.
</pre>
Fungsi factorialB juga menerima sebuah parameter n bertipe integer dan melakukan pengecekan:
<pre>
a. Jika n sama dengan 0, maka fungsi akan mengembalikan nilai 1 (basis kasus).
b. Jika n tidak sama dengan 0, maka fungsi akan memanggil fungsi factorialA dengan argumen (n-1) dan mengalikan hasilnya dengan n.
</pre>
Terakhir, dalam fungsi utama 'main()', program meminta pengguna untuk memasukkan sebuah bilangan bulat positif. Program melakukan pengecekan terhadap bilangan yang dimasukkan:
<pre>
a. Jika bilangan yang dimasukkan lebih besar atau sama dengan 0, maka program akan memanggil fungsi factorialA dengan bilangan tersebut sebagai argumen, dan menampilkan hasilnya ke layar.
b. Jika bilangan yang dimasukkan kurang dari 0, maka program akan menampilkan pesan error karena faktorial hanya dapat dihitung untuk bilangan bulat positif. Ketika fungsi factorialA dipanggil, ia akan melakukan pemanggilan rekursif tidak langsung ke fungsi factorialB, dan begitu pula sebaliknya. Proses ini akan berlanjut sampai akhirnya mencapai basis kasus n = 0 pada salah satu fungsi.
</pre>
Setelah mencapai basis kasus, nilai-nilai akan dikalikan secara berurutan mengikuti alur rekursi tidak langsung.

### 3. Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. Dengan ketentuan : a. Setiap mahasiswa memiliki NIM dan nilai. b. Program memiliki tampilan pilihan menu berisi poin C. c. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai (80 – 90).
```C++
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

```
#### Output
![Screenshot 2024-06-10 120827](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/assets/161289680/29f46242-89b7-4e9b-91ea-3b6eeb47c9ec)

### Penjelasan
Program diatas merupakan program implementasi hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai.

Pertama, program mendefinisikan sebuah struct 'Mahasiswa' yang berisi atribut nim, nama, dan nilai. Kelas utama adalah 'HashMap' yang memiliki array vektor table dengan ukuran tetap TABLE_SIZE (dalam kasus ini, 11). Setiap elemen pada array ini adalah vektor yang menyimpan pointer ke objek 'Mahasiswa'. Fungsi 'hashFunc' digunakan untuk menghitung nilai hash dari sebuah NIM dengan menjumlahkan nilai ASCII setiap karakternya dan mengambil sisa pembagian dengan TABLE_SIZE. Nilai hash ini digunakan sebagai indeks untuk menyimpan atau mencari data mahasiswa pada array table. Fungsi 'tambahData' digunakan untuk menambahkan data mahasiswa baru ke dalam hash map. Fungsi ini akan menghitung nilai hash dari NIM yang diberikan dan menempatkan objek Mahasiswa baru pada vektor di indeks yang sesuai. Fungsi 'hapusData' digunakan untuk menghapus data mahasiswa berdasarkan NIM. Fungsi ini akan mencari objek Mahasiswa dengan NIM yang sesuai pada vektor di indeks yang sesuai, menghapusnya, dan membersihkan memori yang digunakan. Fungsi 'cariByNIM' digunakan untuk mencari data mahasiswa berdasarkan NIM yang diberikan. Fungsi ini akan menghitung nilai hash dari NIM, lalu memeriksa setiap objek Mahasiswa pada vektor di indeks yang sesuai. Jika ditemukan, data mahasiswa akan dicetak. Fungsi 'cariByRange' digunakan untuk mencari data mahasiswa berdasarkan rentang nilai yang diberikan. Fungsi ini akan memeriksa setiap objek Mahasiswa pada semua vektor di semua indeks. Jika nilai mahasiswa berada dalam rentang yang diberikan, data mahasiswa akan dicetak.

Terkahir, membuat fungsi utama 'main', program menampilkan menu dan meminta pengguna untuk memilih operasi yang ingin dilakukan. Pengguna dapat menambah data, menghapus data, mencari data berdasarkan NIM, atau mencari data berdasarkan rentang nilai. Setelah selesai menggunakan program, destruktor ~HashMap akan dipanggil secara otomatis untuk membersihkan memori yang digunakan oleh objek-objek Mahasiswa.

## Kesimpulan
#### Hasil praktikum: 
Pada kesempatan praktikum ini, saya belajar dua materi baru yaitu rekursif dan hash table. Rekursif adalah salah satu metode dalam dunia matematika dimana definisi sebuah fungsi mengandung fungsi itu sendiri. Sedangkan Hash table adalah sebuah cara menyimpan suatu data pada memori ke dalam baris-baris dan kolom-kolom sehingga membentuk tabel yang dapat diakses dengan cepat.

#### Pelajaran yang didapat
Rekursif adalah sebuah konsep dalam pemrograman di mana sebuah fungsi dapat memanggil dirinya sendiri secara langsung (rekursif langsung) atau melalui fungsi lain (rekursif tidak langsung). Rekursif digunakan untuk menyelesaikan masalah dengan cara memecahnya menjadi bagian-bagian yang lebih kecil dan sederhana. Sedangkan, Hash table adalah struktur data yang digunakan untuk menyimpan data dengan cara yang efisien dan memungkinkan pencarian, penyisipan, penghapusan, dan pembaruan data dengan cepat. Hash table menggunakan fungsi hash untuk memetakan kunci (key) ke lokasi penyimpanan (bucket) dalam tabel. Operasi utama pada hash table meliputi:
<pre>
Insertion: Memasukkan data baru ke dalam hash table.
Deletion: Menghapus data dari hash table.
Searching: Mencari data dalam hash table berdasarkan kunci.
Update: Memperbarui data yang ada dalam hash table.
Traversal: Menelusuri seluruh data dalam hash table.
</pre>
Baik rekursif maupun hash table adalah konsep penting dalam pemrograman yang digunakan untuk menyelesaikan masalah secara efisien dan efektif. Rekursif berguna untuk memecah masalah menjadi bagian-bagian yang lebih sederhana, sementara hash table memungkinkan penyimpanan dan pengaksesan data dengan cepat.

## Referensi
[1] Stephen Herlambang, “Implementasi Fungsi Rekursif Dalam Algoritma dan Perbandingannya dengan Fungsi Iteratif”, 2008.

[2] Jasson Prestiliano, "Aplikasi Tabel Hash dalam Pengarsipan dan Pencarian Data", 2007.