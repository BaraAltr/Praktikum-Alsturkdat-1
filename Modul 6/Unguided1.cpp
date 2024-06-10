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
