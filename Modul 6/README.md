# <h1 align="center">Laporan Praktikum Modul Linked List</h1>
<p align="center">Bara Aulia Attar</p>
<p align="center">2311110053</p>

## Dasar Teori
Linked list adalah suatu bentuk struktur data yang berupa sekumpulan elemen data yang bertipe sama dimana tiap elemen saling berkaita atau dihubungkan dengan elemen lain melalui suatu pointer. Pointer itu sendiri adalah alamat elemen data yang tersimpan di memori. Penggunaan pointer untuk mengacu elemen berakibat elemen-elemen bersebelahan secara logik walau tidak bersebelahan secara fisik di memori [1].
Berdasarkan jenis operasinya, terdapat dua algoritma Linked List, yaitu:

### Single Linked List
Single Linked List adalah suatu kumpulan elemen data (yang disebut sebagai node) dimana urutannya ditentukan oleh suatu pointer. Single Linked List hanya memiliki 1 (satu) petunjuk/pointer (NEXT). Setiap elemen (node) dari suatu linked list terdiri atas dua bagian, yaitu :
<pre>
1. INFO: berisi informasi tentang elemen data yang bersangkutan.
2. NEXT(link field/next pointer field): berisi alamat dari elemen (node) selanjutnya yang dituju [2].
</pre>

### Double Linked List
Pada Double Linked List, struktur data atas tiap-tiap node memiliki rujukan pada node sebelum (PREV) dan berikutnya (NEXT). Sebagian algoritma membutuhkan taut ganda, contohnya sorting dan reverse traversing. Tiap node memiliki pointer yang menunjuk ke node sesudahnya dan pointer yang menunjuk ke node sebelumnya [2].

## Guided
### 1. PROGRAM SINGLE LINKED LIST NON-CIRCULAR
```C++
#include <iostream>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
    //komponen/member
    int data;
    Node *next;
};
    Node *head;
    Node *tail;
//Inisialisasi Node
void init(){
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty(){
    if (head == NULL)
        return true;
    else
        return false;
}
//Tambah Depan
void insertDepan(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
        baru->next = head;
        head = baru;
    }
}
//Tambah Belakang
void insertBelakang(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
    tail->next = baru;
    tail = baru;
    }
}
//Hitung Jumlah List
int hitungList(){
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while( hitung != NULL ){
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
//Tambah Tengah
void insertTengah(int data, int posisi){
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
            bantu = head;
            int nomor = 1;
        while( nomor < posisi - 1 ){
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
//Hapus Depan
void hapusDepan() {
    Node *hapus;
    if (isEmpty() == false){
        if (head->next != NULL){
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Belakang
void hapusBelakang() {
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false){
        if (head != tail){
            hapus = tail;
            bantu = head;
            while (bantu->next != tail){
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Tengah
void hapusTengah(int posisi){
    Node *hapus, *bantu, *bantu2;
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        int nomor = 1;
        bantu = head;
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){
                bantu2 = bantu;
            }
            if( nomor == posisi ){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
    delete hapus;
    }
}
//Ubah Depan
void ubahDepan(int data){
    if (isEmpty() == false){
        head->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Tengah
void ubahTengah(int data, int posisi){
    Node *bantu;
    if (isEmpty() == false){
        if( posisi < 1 || posisi > hitungList() ){
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if( posisi == 1){
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else{
            bantu = head;
            int nomor = 1;
            while (nomor < posisi){
                bantu = bantu->next;nomor++;
            }
            bantu->data = data;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Belakang
void ubahBelakang(int data){
    if (isEmpty() == false){
        tail->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Hapus List
void clearList(){
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
//Tampilkan List
void tampil(){
    Node *bantu;
    bantu = head;
    if (isEmpty() == false){
        while (bantu != NULL){
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
int main(){
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7,2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();

    insertTengah(7,1);
    tampil();
    return 0;
}
```
### Penjelasan
Program diatas merupakan program single linked list non-circular yang mencakup pengaplikasian untuk insert depan, insert tengah, insert belakang, hapus depan, hapus tengah, hapus belakang, ubah depan, ubah tengah, ubah belakang. 

Program dimulai dengan mengimpor library 'iostream' untuk input/output. Kemudian, mendefinisikan sebuah struct bernama 'Node' yang memiliki dua member, yaitu 'data' untuk menyimpan nilai dan 'next' untuk menunjuk ke node berikutnya. Dan mendeklarasikan dua pointer global, yaitu 'head' dan 'tail', yang digunakan untuk menunjuk ke node pertama dan terakhir dalam linked list. Fungsi 'init()' digunakan untuk menginisialisasi head dan tail menjadi NULL. Fungsi 'isEmpty()' digunakan untuk memeriksa apakah linked list kosong atau tidak. Fungsi 'insertDepan(int nilai)' digunakan untuk menambahkan node baru di depan linked list. Fungsi 'insertBelakang(int nilai)' digunakan untuk menambahkan node baru di belakang linked list. Fungsi 'hitungList()' digunakan untuk menghitung jumlah node dalam linked list. Fungsi 'insertTengah(int data, int posisi)' digunakan untuk menambahkan node baru di posisi tengah tertentu dalam linked list. Fungsi 'hapusDepan()' digunakan untuk menghapus node pertama dari linked list. Fungsi 'hapusBelakang()' digunakan untuk menghapus node terakhir dari linked list. Fungsi 'hapusTengah(int posisi)' digunakan untuk menghapus node pada posisi tengah tertentu dalam linked list. Fungsi 'ubahDepan(int data)' digunakan untuk mengubah nilai data pada node pertama. Fungsi 'ubahTengah(int data, int posisi)' digunakan untuk mengubah nilai data pada node di posisi tengah tertentu. Fungsi 'ubahBelakang(int data)' digunakan untuk mengubah nilai data pada node terakhir. Fungsi 'clearList()' digunakan untuk menghapus seluruh node dalam linked list. Fungsi 'tampil()' digunakan untuk menampilkan isi dari linked list. 

Terakhir, membuat fungsi utama 'main()', beberapa operasi dasar pada linked list dipanggil secara berurutan untuk menguji implementasi yang telah dibuat.

### 2. PROGRAM DOUBLE LINKED LIST
```C++
#include <iostream>
using namespace std;

class Node {
    public:int data;
    Node* prev;
    Node* next;
};
class DoublyLinkedList {
        public:
        Node* head;
        Node* tail;
        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
    }
    void push(int data) { //tambahdepan
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } 
        else {
            tail = newNode;
        }
        head = newNode;
    }
    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } 
        else {
            tail = nullptr;
        }
        delete temp;
    }
    bool update(int oldData, int newData) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};


int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add " << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```
### Penjelasan
Program diatas merupakan program double linked list.  Double linked list mirip dengan single linked list, namun setiap node dalam double linked list memiliki dua pointer: satu untuk menunjuk ke node sebelumnya (prev) dan satu untuk menunjuk ke node berikutnya (next).

Program dimulai dengan mengimpor library 'iostream' untuk input/output. Kemudian mendefinisikan sebuah kelas bernama 'Node' yang memiliki tiga atribut: 'data' untuk menyimpan nilai, 'prev' untuk menunjuk ke node sebelumnya, dan 'next' untuk menunjuk ke node berikutnya. Mendefinisikan sebuah kelas bernama 'DoublyLinkedList' yang memiliki atribut 'head' dan 'tail' yang merupakan pointer ke node pertama dan terakhir dalam linked list. Menginisialisasi 'head' dan 'tail' menjadi nullptr. Menambahkan node baru di depan linked list (mirip dengan 'insertDepan' pada implementasi single linked list). Node baru dibuat, dihubungkan dengan node sebelumnya (jika ada), kemudian diatur sebagai node pertama. Menghapus node pertama dari linked list (mirip dengan 'hapusDepan' pada implementasi single linked list). Node pertama dihapus, dan node berikutnya diatur sebagai node pertama baru. Mengubah nilai data dari node dengan nilai data tertentu. Fungsi ini mencari node dengan nilai data tertentu, kemudian mengubah nilainya jika ditemukan. Menghapus semua node dalam linked list. Fungsi ini menghapus setiap node satu per satu dan mengatur 'head' dan 'tail' menjadi nullptr. Membuat fungsi 'display()' untuk Menampilkan isi dari linked list. 

Terakhir, membuat fungsi utama 'main()', pengguna diberi pilihan untuk menambahkan data, menghapus data, mengubah data, menghapus semua data, menampilkan data, atau keluar dari program. Setiap pilihan diproses sesuai dengan operasi yang telah didefinisikan sebelumnya.

## Unguided
### 1. Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user. Lakukan operasi berikut:
![Screenshot 2024-06-10 112220](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/assets/161289680/5acf73e6-45e3-479c-9bd4-b9238db528a2)

```C++
#include <iostream>
using namespace std;

// Node structure
struct Node {
    string nama;
    int usia;
    Node* next;
};

// Kelas untuk Daftar Tertaut Tunggal
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Berfungsi untuk memasukkan data di bagian depan
    void insertFront(string nama, int usia) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->usia = usia;
        newNode->next = head;
        head = newNode;
    }

    // Berfungsi untuk memasukkan data di akhir
    void insertEnd(string nama, int usia) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->usia = usia;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Berfungsi untuk memasukkan data setelah node tertentu (di sini, setelah nama tertentu)
    void insertAfter(string afterNama, string nama, int usia) {
        Node* newNode = new Node;
        newNode->nama = nama;
        newNode->usia = usia;

        Node* temp = head;
        while (temp != nullptr && temp->nama != afterNama) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Node dengan nama " << afterNama << " tidak ditemukan." << endl;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Berfungsi untuk menghapus node dengan nama tertentu
    void deleteNode(string nama) {
        Node* temp = head;
        Node* prev = nullptr;
        while (temp != nullptr && temp->nama != nama) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Node dengan nama " << nama << " tidak ditemukan." << endl;
            return;
        }
        if (prev == nullptr) {
            head = temp->next;
        } else {
            prev->next = temp->next;
        }
        delete temp;
    }

    // Berfungsi untuk mengupdate data node tertentu (di sini, dengan nama tertentu)
    void updateNode(string nama, string newNama, int newUsia) {
        Node* temp = head;
        while (temp != nullptr && temp->nama != nama) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Node dengan nama " << nama << " tidak ditemukan." << endl;
            return;
        }
        temp->nama = newNama;
        temp->usia = newUsia;
    }

    // Berfungsi untuk menampilkan semua node dalam daftar
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->nama << "\t" << temp->usia << endl;
            temp = temp->next;
        }
    }
};

int main() {
    LinkedList list;
    // Menambahkan data sesuai urutan
    list.insertEnd("John", 19);
    list.insertEnd("Jane", 20);
    list.insertEnd("Michael", 18);
    list.insertEnd("Yusuke", 19);
    list.insertEnd("Akechi", 20);
    list.insertEnd("Hoshino", 18);
    list.insertEnd("Karin", 18);

    // Hapus data Akechi
    list.deleteNode("Akechi");

    // Tambahkan data Futaba antara John dan Jane
    list.insertAfter("John", "Futaba", 18);

    // Tambahkan data Igor di awal
    list.insertFront("Igor",  20);

    // Menambahkan data awal (nama dan usia Anda)
    list.insertFront("Nama_anda Usia_Anda",1);

    // Ubah data Michael menjadi Reyn
    list.updateNode("Michael", "Reyn", 18);

    // Tampilkan seluruh data
    cout << "Data Mahasiswa:" << endl;
    list.display();

    return 0;
}
```
#### Output:
![Screenshot 2024-06-10 112453](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/assets/161289680/3f2e538d-76a5-4b71-9908-9d3793ee3000)
### Penjelasan:
Program ini menggunakan linked list untuk mengelola data mahasiswa. Setiap node dalam linked list menyimpan informasi tentang satu mahasiswa, termasuk nama dan usia. Fungsi-fungsi seperti insertFront, insertEnd, insertAfter, deleteNode, dan updateNode memungkinkan manipulasi data dalam linked list, sementara display digunakan untuk menampilkan seluruh data. Program ini mencatat operasi-operasi yang dilakukan, seperti menambah, menghapus, dan mengubah data, serta menampilkan hasilnya.

### 2. Modifikasi Guided Double Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus, dan update di tengah / di urutan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan Nama produk dan harga.
![Screenshot 2024-06-10 113625](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/assets/161289680/715c7a43-e336-409a-b808-4b03323d34a9)
#### Case: 1.Tambahkan produk Azarine dengan harga 65000 diantara Somethinc dan Skintific 2.Hapus produk wardah 3.Update produk Hanasui menjadi Cleora dengan harga 55.000 4.Tampilkan menu seperti dibawah ini Toko Skincare Purwokerto 1.Tambah Data 2.Hapus Data 3.Update Data 4.Tambah Data Urutan Tertentu 5.Hapus Data Urutan Tertentu 6.Hapus Seluruh Data 7.Tampilkan Data 8.Exit
Pada menu 7, tampilan akhirnya akan menjadi seperti dibawah ini :
![Screenshot 2024-06-10 113921](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/assets/161289680/77dda91c-df43-40e8-ac92-49c4fe5116bc)
```C++
#include <iostream>
#include <string>
#include <iomanip> // Untuk format data agar lebih rapit 
using namespace std;

class Node {
public:
    string namaProduk;
    double harga; 
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void push(string namaProduk, double harga) {
        Node* newNode = new Node;
        newNode->namaProduk = namaProduk;
        newNode->harga = harga;
        newNode->prev = nullptr;
        newNode->next = head;

        if (head != nullptr) {
            head->prev = newNode;
        } else {
            tail = newNode;
        }

        head = newNode;
    }

    void pop() {
        if (head == nullptr) {
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }

        delete temp;
    }

    bool update(string oldNamaProduk, string newNamaProduk, double newHarga) {
        Node* current = head;
        while (current != nullptr) {
            if (current->namaProduk == oldNamaProduk) {
                current->namaProduk = newNamaProduk;
                current->harga = newHarga;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }

    void display() {
        Node* current = head;
        cout << setw(20) << left << "Nama Produk" << "Harga" << endl;
        cout << setfill('-') << setw(30) << "-" << endl;
        cout << setfill(' ');
        while (current != nullptr) {
            cout << setw(20) << left << current->namaProduk << fixed << setprecision(3) << current->harga << endl;
            current = current->next;
        }
        cout << endl;
    }

    void insertAtPosition(string namaProduk, double harga, int position) {
        if (position < 1) {
            cout << "Posisi tidak tersedia" << endl;
            return;
        }

        Node* newNode = new Node;
        newNode->namaProduk = namaProduk;
        newNode->harga = harga;

        if (position == 1) {
            newNode->next = head;
            newNode->prev = nullptr;
            if (head != nullptr) {
                head->prev = newNode;
            } else {
                tail = newNode;
            }
            head = newNode;
            return;
        }

        Node* current = head;
        int currentPosition = 1;
        while (currentPosition < position - 1 && current != nullptr) {
            current = current->next;
            currentPosition++;
        }

        if (current == nullptr) {
            cout << "Posisi tidak tersedia" << endl;
            return;
        }

        newNode->next = current->next;
        newNode->prev = current;
        if (current->next != nullptr) {
            current->next->prev = newNode;
        } else {
            tail = newNode;
        }
        current->next = newNode;
    }

    void deleteAtPosition(int position) {
        if (head == nullptr || position < 1) {
            cout << "Posisi tidak tersedia" << endl;
            return;
        }

        if (position == 1) {
            Node* temp = head;
            head = head->next;
            if (head != nullptr) {
                head->prev = nullptr;
            } else {
                tail = nullptr;
            }
            delete temp;
            return;
        }

        Node* current = head;
        int currentPosition = 1;
        while (currentPosition < position && current != nullptr) {
            current = current->next;
            currentPosition++;
        }

        if (current == nullptr) {
            cout << "Posisi tidak tersedia" << endl;
            return;
        }

        if (current == tail) {
            tail = tail->prev;
            tail->next = nullptr;
            delete current;
            return;
        }

        current->prev->next = current->next;
        current->next->prev = current->prev;
        delete current;
    }
};

int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "Toko Skincare Purwokerto" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;
        int choice;
        cout << "Pilih operasi: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                string namaProduk;
                double harga;
                cout << "Masukkan nama produk: ";
                cin >> namaProduk;
                cout << "Masukkan harga: ";
                cin >> harga;
                list.push(namaProduk, harga);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                string oldNamaProduk, newNamaProduk;
                double newHarga;
                cout << "Masuk nama produk yang akan di update: ";
                cin >> oldNamaProduk;
                cout << "Masukkan nama produk yang baru: ";
                cin >> newNamaProduk;
                cout << "Masukkan harga produk yang baru: ";
                cin >> newHarga;
                bool updated = list.update(oldNamaProduk, newNamaProduk, newHarga);
                if (!updated) {
                    cout << "Data tidak ada" << endl;
                }
                break;
            }
            case 4: {
                string namaProduk;
                double harga;
                int position;
                cout << "Masukkan nama produk: ";
                cin >> namaProduk;
                cout << "Masukkan harga: ";
                cin >> harga;
                cout << "Masukkan posisi: ";
                cin >> position;
                list.insertAtPosition(namaProduk, harga, position);
                break;
            }
            case 5: {
                int position;
                cout << "Masukkan posisi yang akan di hapus: ";
                cin >> position;
                list.deleteAtPosition(position);
                break;
            }
            case 6: {
                list.deleteAll();
                break;
            }
            case 7: {
                list.display();
                break;
            }
            case 8: {
                return 0;
            }
            default: {
                cout << "Pilihan salah. Masukkan operasi yang benar" << endl;
                break;
            }
        }
    }
    return 0;
}
```
### Output:
![Screenshot 2024-06-10 113035](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/assets/161289680/6ed08336-e7b2-42ad-bd52-ec77a80ad981)
![Screenshot 2024-06-10 113101](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/assets/161289680/d4d0c279-9a64-4927-b146-9af84e55c50a)
![Screenshot 2024-06-10 113113](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/assets/161289680/24b4336b-4b84-43c7-8697-63d4bf71086b)
### Penjelasan:
Program ini adalah implementasi dari doubly linked list dalam bahasa C++. Doubly linked list adalah struktur data linear di mana setiap elemen disimpan dalam node yang memiliki dua pointer: satu untuk menunjuk ke node sebelumnya (prev) dan satu untuk menunjuk ke node berikutnya (next). Program ini memungkinkan pengguna untuk mengelola daftar produk skincare di toko Purwokerto dengan berbagai operasi seperti menambah, menghapus, memperbarui, dan menampilkan data produk.

### Struktur Node:
Setiap node dalam linked list memiliki dua variabel data, yaitu `namaProduk` dan `harga`, yang menyimpan informasi tentang nama produk dan harganya. Node juga memiliki dua pointer: `prev` untuk menunjuk ke node sebelumnya dan `next` untuk menunjuk ke node berikutnya.

### Kelas DoublyLinkedList:
Kelas ini mengimplementasikan operasi-operasi dasar pada doubly linked list, seperti `push` (menambah node di awal), `pop` (menghapus node di awal), `update` (memperbarui data produk), `insertAtPosition` (menambah node pada posisi tertentu), `deleteAtPosition` (menghapus node pada posisi tertentu), `deleteAll` (menghapus seluruh data), dan `display` (menampilkan seluruh data).

### Fungsi Main:
Fungsi main merupakan bagian utama dari program yang berinteraksi dengan pengguna. Pengguna diberi pilihan untuk melakukan operasi-operasi yang telah didefinisikan pada linked list, seperti menambah, menghapus, memperbarui, atau menampilkan data produk. Program akan terus berjalan hingga pengguna memilih untuk keluar.

Melalui program ini, pengguna dapat mengelola inventaris produk skincare di toko Purwokerto dengan mudah dan efisien.

## Kesimpulan
#### Hasil praktikum:
Pada kesempatan praktikum ini, saya belajar program yang disebut Linked List. Linked List sendiri adalah suatu bentuk struktur data yang berupa sekumpulan elemen data yang bertipe sama dimana tiap elemen saling berkaita atau dihubungkan dengan elemen lain melalui suatu pointer. Pointer itu sendiri adalah alamat elemen data yang tersimpan di memori. Penggunaan pointer untuk mengacu elemen berakibat elemen-elemen bersebelahan secara logik walau tidak bersebelahan secara fisik di memori.
Berdasarkan jenis operasinya, terdapat dua algoritma Linked List yaitu Single Linked List dan Double Linked List.

#### Pelajaran yang didapat: 
Linked list adalah suatu bentuk struktur data yang berupa sekumpulan elemen data yang bertipe sama dimana tiap elemen saling berkaita atau dihubungkan dengan elemen lain melalui suatu pointer. Pointer itu sendiri adalah alamat elemen data yang tersimpan di memori. Penggunaan pointer untuk mengacu elemen berakibat elemen-elemen bersebelahan secara logik walau tidak bersebelahan secara fisik di memori. Berdasarkan jenis operasinya, terdapat dua algoritma Linked List yaitu Single Linked List (suatu kumpulan elemen data (yang disebut sebagai node) dimana urutannya ditentukan oleh suatu pointer) dan Double Linked List (mirip dengan single linked list, namun setiap node dalam double linked list memiliki dua pointer: satu untuk menunjuk ke node sebelumnya (prev) dan satu untuk menunjuk ke node berikutnya (next)).

## Referensi
[1] Johnson Sihombing, “PENERAPAN STACK DAN QUEUE PADA ARRAY DAN LINKED LIST DALAM JAVA”, 2019.

[2] Abdi Dharma, Hendra Handoko Syahputra P, "Aplikasi Pembelajaran Linked List Berbasis Mobile Learning", 2017. 