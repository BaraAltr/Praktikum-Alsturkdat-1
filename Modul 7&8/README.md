# <h1 align="center">Laporan Praktikum Modul Stack dan Queue</h1>
<p align="center">Bara Aulia Attar | 2311110053</p>

## Dasar Teori

### STACK

Stack adalah struktur data yang bekerja berdasarkan prinsip "Last In. First Out" (LIFO). Ini berarti elemen terakhir yang dimasukkan ke dalam stack akan menjadi yang pertama dikeluarkan. Stack sering dibandingkan dengan tumpukan piring, di mana Anda hanya dapat menambah atau mengambil piring dari atas tumpukan [1]. Misalkan sebuah kotak ditumpukkan, seperti pada Gambar dibawah ini. 

![stack contoh](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/dfe0572e-4b20-47a5-a5a7-4b087cb65125)

Kotak A diletakkan pertama sekali kemudian diikuti secara berturut-turut kotak B, kotak C, kotak D, kotak E, dan terakhir kotak F. Maka untuk mengambil tiap kotak dari tumpukan harus dilakukan secara berturut-turut mulai dari kotak F, kotak E, kotak D, kotak C, kotak B, kemudian kotak A. Karena jika kita membutuhkan kotak C misalnya dan langsung mengambil kotak C tanpa terlebih dahulu mengambil kotak di atasnya maka tumpukan akan tumbang [2]. <br>

Operasi dasar yang dapat dilakukan terhadap sebuah Stack, yaitu operasi Insert atau penyisipan (PUSH) dan operasi Delete atau penghapusan elemen (POP). Operasi push dikenal sebagai operasi insert dan operasi pop dikenal sebagai operasi delete. Selama operasi push kita harus memeriksa kondisi overflow dan selama operasi pop kita harus memeriksa kondisi underflow [3]. Berikut penjelasan lebih lengkapnya :

- Push: Menambahkan elemen ke dalam stack. Elemen ini ditempatkan di atas elemen terakhir yang sudah ada.
- Pop: Menghapus dan mengeluarkan elemen teratas dari stack. Elemen di bawahnya menjadi teratas.
- Peek (Top): Melihat elemen teratas dari stack tanpa menghapusnya.
- IsEmpty: Memeriksa apakah stack kosong atau tidak
- Clear (Hapus Semua), digunakan untuk mengosongkan stack. Operasi ini biasa dinyatakan dengan pop(T). Dalam hal ini data teratas dari stack T akan dikeluarkan dan menjadi nilai balik pop. Pop biasanya dituangkan dalam bentuk pernyataan data = pop (T).
- IsFull (Penuh), fungsi yang digunakan untuk mengecek apakah stack sudah penuh. Jika stack penuh, maka operasi ini akan mengembalikan nilai True, dan jika belum, maka nilai False
- Top (Atas), mendapatkan suatu nilai atau melihat elemen teratas pada tumpukan tanpa menghapusnya.
- Size (Ukuran), menghilangkan jumlah elemen yang atau tidak (terutama pada implementasi tumpukan dengan kapasitas terbatas).
- Search (Cari), untuk mencari keberadaan suatu elemen dalam sebuah tumpukan.
- Overflow, jika seseorang dapat mencoba menyisipkan sebuah elemen dengan struktur data (stack) yang sudah terisi. Condition untuk overflow adalah Top = size - 1 (untuk stack dimulai dari 0), Top = size (untuk stack dimulai dari 1).
- Underflow, jika seseorang dapat mencoba menghapus sebuah elemen dari sebuah struktur data (stack) kosong. Condition untuk underflow adalah Top = -1 (untuk stack dimulai dari 0), Top = 0 (untuk stack dimulai dari 1).

### QUEUE

Antrean atau queue adalah salah satu konsep struktur data yang memiliki sistem kerja, di mana yang
pertama masuk maka akan menjadi yang pertama keluar (FIFO = first in first out), seperti halnya antrean yang terjadi dalam dunia nyata. Namun, hal ini tidak berlaku pada antrean berprioritas. Sebab, pada antrean berprioritas, urutan keluar dari sebuah antrean ditentukan berdasarkan prioritas masingmasing elemen dalam antrean untuk diproses terlebih dahulu. Pada sebuah antrean, elemen hanya dapat ditambahkan melalui sisi belakang queue dan hanya dapat diambil dari sisi bagian depan queue. Oleh karena itu, ada dua buah elemen pada sebuah queue, yaitu belakang (last atau rear) sebagai penunjuk paling belakang dan depan (first atau front) sebagai penunjuk elemen bagian depan. Seperti halnya stack dan list, queue juga merupakan pemikiran struktur data yang dapat direpresentasikan secara statis menggunakan array atau secara dinamis menggunakan pointer. Begitu pun dengan elemen sebuah queue dapat diisi dengan data sesuai kebutuhan [4]. Queue memiliki peran yang penting dalam berbagai aplikasi dan algoritma. Salah satu fungsi utamanya adalah mengatur dan mengelola antrean tugas atau operasi secara efisien. Dalam sistem komputasi, ia digunakan untuk menangani tugas-tugas seperti penjadwalan proses, antrean pesan, dan manajemen sumber daya.

Berikut adalah operasi-operasi yang terdapat dalam Queue yaitu:

- Enqueue, untuk menambahkan elemen ke akhir antrian.
- Dequeue, untuk menghapus elemen dari depan antrian.
- IsEmpty, untuk memeriksa ada tidaknya antrian kosong.
- IsFull, untuk memeriksa kepenuhan antrian.
- Peek, untuk mendaptkan nilai bagian depan antrian tanpa menghapusnya.
- Initialize, untuk membuat antrian baru tanpa elemen data.

## Guided 

### Guided 1 

```C++ 
#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() {
    return (top == 0);
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBuku(int posisi, string data) {
    if (posisi > top) {
        cout << "Posisi melebihi data yang ada" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArraybuku() {
    for (int i = top; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";
    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;
    peekArrayBuku(2);
    popArrayBuku();
    cout << "Banyaknya data = " << countStack() << endl;
    changeArrayBuku(2, "Bahasa Jerman");
    cout << endl;
    cetakArrayBuku();
    cout << "\n";
    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;
    cetakArrayBuku();

    return 0;
}
```
#### Output

![Screenshot (698)](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/blob/main/Output%20modul%207/Screenshot%202024-05-17%20073737.png)

Program diatas merupakan implementasi dari struktur data stack menggunakan array dalam bahasa pemrograman C++. Stack adalah struktur data linear yang menggunakan prinsip Last In First Out (LIFO), di mana elemen-elemen baru ditambahkan atau dihapus dari satu ujung, yang disebut sebagai "top" dalam program ini. Fungsi-fungsi yang disediakan dalam program ini termasuk penambahan data ke dalam stack (`pushArrayBuku`), penghapusan data dari stack (`popArrayBuku`), melihat data pada posisi tertentu dalam stack (`peekArrayBuku`), menghitung jumlah data dalam stack (`countStack`), mengubah data pada posisi tertentu dalam stack (`changeArrayBuku`), menghapus semua data dalam stack (`destroyArraybuku`), dan mencetak seluruh data dalam stack (`cetakArrayBuku`).

Pada fungsi `main`, program melakukan beberapa operasi pada stack buku yang telah didefinisikan. Data buku ditambahkan ke dalam stack dengan menggunakan fungsi `pushArrayBuku`, kemudian data dicetak dengan fungsi `cetakArrayBuku`. Program juga mengecek apakah stack penuh atau kosong dengan fungsi `isFull` dan `isEmpty`, serta menampilkan data pada posisi tertentu dengan fungsi `peekArrayBuku`. Operasi lain seperti penghapusan data, perubahan data, penghitungan jumlah data, penghapusan semua data, dan pencetakan data setelah penghapusan dilakukan juga dijalankan dalam `main`. 

### Guided 2

```C++
#include <iostream>
using namespace std;

const int maksimalQueue = 5; // Maksimal antrian
int front = 0; // Penanda depan antrian
int back = 0; // Penanda belakang antrian
string queueTeller[5]; // Array untuk menyimpan antrian

bool isFull() { // Pengecekan antrian penuh atau tidak
    if (back == maksimalQueue) {
        return true; // =1
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
            queueTeller[0] = data;
            front++;
            back++;
        } else { // Jika antrian ada isi
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() { // Mengurangi antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
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
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() { // Melihat isi antrian
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```

#### Output

![Screenshot (699)](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/blob/main/Output%20modul%207/Screenshot%202024-05-17%20073838.png)

Program diatas merupakan implementasi dari struktur data queue menggunakan array dalam bahasa pemrograman C++. Queue merupakan struktur data linear yang menggunakan prinsip First In First Out (FIFO), di mana elemen-elemen baru ditambahkan di satu ujung (back) dan dihapus di ujung yang lain (front). Dalam program ini, terdapat fungsi-fungsi yang digunakan untuk mengecek apakah antrian penuh atau kosong (`isFull` dan `isEmpty`), menambahkan data ke dalam antrian (`enqueueAntrian`), mengurangi data dari antrian (`dequeueAntrian`), menghitung jumlah data dalam antrian (`countQueue`), menghapus semua data dalam antrian (`clearQueue`), dan melihat isi dari antrian (`viewQueue`).

Pada fungsi `main`, program melakukan beberapa operasi pada queue teller yang telah didefinisikan. Data antrian teller ditambahkan dengan menggunakan fungsi `enqueueAntrian`, kemudian data antrian ditampilkan dengan fungsi `viewQueue`. Program juga menghitung jumlah antrian dengan fungsi `countQueue`, mengurangi data dari antrian dengan fungsi `dequeueAntrian`, dan menampilkan kembali data antrian serta jumlah antrian setelah pengurangan dilakukan. Operasi lain seperti menghapus semua data antrian dan menampilkan kembali data antrian serta jumlah antrian setelah penghapusan juga dijalankan dalam `main`. 

## Unguided 

### 1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya.

```C++
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str) {
    // Menghapus spasi dan karakter non-alphanumeric dari string
    string cleanStr;
    for (char c : str) {
        if (isalnum(c)) {
            cleanStr += tolower(c);
        }
    }

    int left = 0;
    int right = cleanStr.length() - 1;

    while (left < right) {
        if (cleanStr[left] != cleanStr[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    string input;
    cout << "Masukkan kalimat : ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "Kalimat tersebut adalah : palindrom." << endl;
    } else {
        cout << "Kalimat tersebut adalah : bukan palindrom." << endl;
    }

    return 0;
}
```
#### Output:

![Screenshot (745)](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/blob/main/Output%20modul%207/Screenshot%202024-05-17%20074058.png)

Codingan di atas adalah sebuah program C++ yang dapat mengecek apakah sebuah kalimat yang dimasukkan oleh pengguna merupakan palindrom atau bukan. Sebuah kalimat dikatakan palindrom jika kalimat tersebut dapat dibaca sama baik dari depan maupun dari belakang (jika dibalik). 

Program ini pertama-tama membersihkan string input dari spasi dan karakter non-alphanumeric, serta mengubah semua karakter menjadi huruf kecil. Kemudian, program menggunakan pendekatan dua pointer (left dan right) untuk membandingkan karakter dari kedua ujung string. Jika karakter di posisi left tidak sama dengan karakter di posisi right, maka kalimat tersebut bukan palindrom dan program akan mengembalikan `false`. Jika seluruh karakter pada kedua ujung string sama, maka kalimat tersebut adalah palindrom dan program akan mengembalikan `true`. Setelah melakukan pengecekan, program akan mengeluarkan pesan apakah kalimat yang dimasukkan merupakan palindrom atau bukan. Dengan menggunakan program ini, pengguna dapat dengan mudah mengetahui apakah sebuah kalimat merupakan palindrom atau tidak. 

### 2. Ubahlah guided queue diatas agar menjadi program inputan user dan program menu

```c++
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

    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Muhammad Naufal (2311110034)" << endl;

    return 0;
}
```
#### output

![Screenshot (746)](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/blob/main/Output%20modul%207/Screenshot%202024-05-17%20074257.png)

Codingan diatas merupakan sebuah program C++ yang mengimplementasikan sebuah antrian sederhana menggunakan array untuk menyimpan data pasien. Program ini memungkinkan pengguna untuk menambahkan pasien ke dalam antrian, mengurangi pasien dari antrian, melihat isi antrian, menghitung jumlah pasien dalam antrian, menghapus semua pasien dari antrian, dan keluar dari program. 

Program ini menggunakan konsep penandaan depan (front) dan belakang (back) untuk mengatur penambahan dan pengurangan data dari antrian. Fungsi `isFull()` dan `isEmpty()` digunakan untuk memeriksa apakah antrian penuh atau kosong. Fungsi `enqueueAntrian()` digunakan untuk menambahkan data ke dalam antrian, `dequeueAntrian()` untuk mengurangi data dari antrian, `countQueue()` untuk menghitung jumlah data dalam antrian, `clearQueue()` untuk menghapus semua data dari antrian, dan `viewQueue()` untuk menampilkan isi antrian. Program ini juga memberikan menu interaktif kepada pengguna untuk memilih operasi yang ingin dilakukan pada antrian. Setelah program selesai dijalankan, memori yang dialokasikan untuk array antrian juga dibebaskan dengan menggunakan `delete[] queuePasien`.

## Kesimpulan

Dalam bahasa pemrograman C++, stack dan queue adalah dua struktur data yang umum digunakan untuk menyimpan dan mengatur data secara berurutan. Stack adalah struktur data yang mengikuti prinsip LIFO (Last In, First Out), yang berarti data yang terakhir dimasukkan ke dalam stack akan menjadi data pertama yang dikeluarkan. Implementasi stack biasanya dilakukan menggunakan array atau linked list. Stack sering digunakan dalam implementasi fungsi rekursif, undo functionality, dan evaluasi ekspresi matematika.

Sementara itu, queue adalah struktur data yang mengikuti prinsip FIFO (First In, First Out), yang berarti data yang pertama dimasukkan ke dalam queue akan menjadi data pertama yang dikeluarkan. Implementasi queue juga dapat dilakukan menggunakan array atau linked list. Queue sering digunakan dalam simulasi antrian, penjadwalan tugas, dan pengiriman pesan antar proses. Kedua struktur data ini memiliki kegunaan dan karakteristik yang berbeda, sehingga pemilihan antara stack dan queue harus disesuaikan dengan kebutuhan algoritma yang sedang dikerjakan.

## Referensi
[1] Komalasari, Rita, et al. PENGANTAR ILMU KOMPUTER: TEORI KOMPREHENSIF PERKEMBANGAN ILMU KOMPUTER TERKINI. PT. Sonpedia Publishing Indonesia, 2023. <br>
[2] Erkamim, E., Abdurrohim, I., Yuliyanti, S., Karim, R., Rahman, A., Admira, T. M. A., & Ridwan, A. 2024. Buku Ajar Algoritma dan Struktur Data. PT. Sonpedia Publishing Indonesia. <br>
[3] S. N. Mohanty and P. K. Tripathy, "Data structure and algorithms using C++: A Practical Implementation". John Wiley & Sons, 2021. <br>
[4] Mulyana, Ade. "E-Books Cara Mudah Mempelajari Algoritma dan Struktur Data." 2023. <br>