# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Bara Aulia Attar</p>
<p align="center">2311110053</p>

## Dasar Teori

### TIPE DATA
Tipe data adalah klasifikasi data yang memberitahu compiler atau interpreter bagaimana pengembang ingin memasukkan data[1]. Tipe data juga membantu memengaruhi cara data tersebut diproses, disimpan, dan digunakan dalam program. Dengan kita memahami tipe data, maka kita dapat membuat keputusan dengan lebih baik dalam merancang struktur data, mengoptimalkan kinerja program, dan dapat terhindar dari manipulasi data. Jenis – jenis tipe data antara lain:

## 1. Tipe Data Primitif
Bahasa pemrograman seperti C++ dan Java memiliki tipe data bawaan (disebut tipe data dasar atau tipe data primitif)seperti bilangan bulat yang mewakili informasi dan memiliki operasi yang dapat dilakukan pada data tersebut (seperti perkalian dan penjumlahan). Misalnya tipe data dasar bawaan di C++ adalah short, int, long, float, double dan char[2].

## 2. Tipe Data Abstrak
Tipe data abstrak adalah sebuah model matematis untuk jenis data, dimana tipe data tersebut mendefinisikan operasi yang dapat dilakukan padanya, tanpa mengungkapkan implementasi detail dari operasi tersebut. Fitur Class adalah fitur yang sering digunakan untuk Object Oriented Programming (OOP) pada bahasa C++ yang mirip dengan struct pada bahasa C. Akses struct bersifat public sedangkan class bersifat private.

## 3. Tipe Data Koleksi
Tipe data koleksi di C++ sering dikelola melalui Standard Template Library (STL), yang menyediakan kelas-kelas untuk berbagai struktur data koleksi. Beberapa contoh termasuk:
<pre>
a.	Vector: Mirip dengan array, tetapi ukurannya dapat berubah.
b.	List  : Daftar terhubung yang memungkinkan penyisipan dan penghapusan elemen dengan cepat di mana saja dalam daftar.
c.	Map   : Koleksi pasangan kunci-nilai dengan kunci unik, sering digunakan untuk pencarian cepat berdasarkan kunci.
d.	Set   : Kumpulan elemen unik yang terurut secara otomatis.
</pre>

## Guided

### 1. Tipe Data Primitif

```C++
#include<iostream>
using namespace std;
///Main program
int main()
{
    char op;
    float num1, num2;
    //it allows user to enter operator i.e. +,- ,*, /
    cout<<"Masukan Operator: " << endl;
    cin >> op;
    cout << "Masukkan Angka 1 dan 2: ";
    cin>>num1>>num2;

    switch(op)
    {
    case'+':
        cout<<num1+num2;
        break;
    case'_':
        cout<<num1 - num2;
        break;
    case '*':
        cout<<num1 * num2;
        break;
    case '/':
        cout<<num1 / num2;
        break;
    default:
        cout<<"Error!operator is not correct";
    
    }//switch statement ends
    return 0;
}
```
### Penjelasan
Program di atas merupakan program kalkulator sederhana dimana kita dapat menginput operator dan angka yang kita inginkan untuk dihitung. 

Variabel op merupakan variabel bertipe char yang dapat dimasukkan satu karakter. Dalam program ini kita dapat memasukkan operator yang diinginkan seperti +, -, *, /. Variabel num1, num2 merupakan variabel bertipe data float yang dapat kita masukkan operand (angka) yang kita inginkan.

Struktur switch dan case merupakan struktur dalam pengambilan keputusan. Blok switch memeriksa nilai op. Jika op adalah +, maka program akan menjalankan num1 + num2. Jika op adalah -, maka program akan menjalankan num1 - num2 dan seterusnya. Akan tetapi, jika op tidak sesuai dengan semua case, maka program akan menampilkan Error!operator is not correct.

### 2. Tipe Data Abstrak

```C++
#include <stdio.h>

//Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    // menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    
    // mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    // mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}
```
### Penjelasan
Program di atas merupakan program yang menggunakan tipe data struct yang memungkinkan kita menggabungkan beberapa variabel dengan tipe data yang berbeda menjadi satu kesatuan. Dalam program ini, struct Mahasiswa memiliki tiga anggota yaitu name, age, address. name dan address merupakan pointer ke string (const char *) dan age adalah bilangan bulat (int). 

Variabel dapat diisi dengan tipe struct. Dalam program ini, kita membuat dua variabel yaitu mhs1 dan mhs2  dengan tipe Mahasiswa. Kita dapat mengisi nilai ke variabel mhs1 dan mhs2 dengan menggunakan operator ".", contohnya mhs.name = "Dian" dan dapat dipanggil menggunakan syntax printf.

### 3. Tipe Data Koleksi

```C++
#include <iostream>
using namespace std;

int main()
{
    //deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;
    //mencetak array
    cout << "Isi array pertama :" << nilai[0] << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}
```
### Penjelasan
Program di atas merupakan program tipe data koleksi yaitu array. int nilai[5]; mendeklarasikan sebuah array integer dengan nama nilai dan berukuran 5 elemen serta dapat menyimpan 5 nilai integer. nilai[0] = 23 artinya memberikan bilangan bulat spesifik 23 ke variabel nilai dan ditampilkan menggunakan pernyataan cout.

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
class Calculator {
public:
    float add(float x, float y) {
        return x + y;
    }

    float subtract(float x, float y) {
        return x - y;
    }

    float multiply(float x, float y) {
        return x * y;
    }

    float divide(float x, float y) {
        if (y == 0) {
            return 0; // Anda dapat memilih untuk mengubah ini sesuai kebutuhan
        } else {
            return x / y;
        }
    }
};
```
### Penjelasan :
Ini adalah file yang berisi definisi kelas Calculator.
Kelas Calculator memiliki empat metode: add, subtract, multiply, dan divide.
Setiap metode melakukan operasi aritmatika dasar: penambahan, pengurangan, perkalian, dan pembagian.
Metode divide memiliki penanganan khusus untuk pembagian dengan nol

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya.
```C++
#include <iostream>
#include "unguided1.cpp"

using namespace std;

int main() {
    Calculator calculator;

    cout << "Calculator Program" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;

    int choice;
    cout << "Enter choice (1/2/3/4): ";
    cin >> choice;

    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (choice) {
        case 1:
            cout << "Result: " << calculator.add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << calculator.subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << calculator.multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << calculator.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }

    return 0;
}
```
### Output:
!"C:/Users/ASUS/Pictures/Screenshots/Screenshot 2024-04-08 131647.png"

### Penjelasan:
File ini berfungsi untuk meminta input dari pengguna dan menampilkan hasil perhitungan.
Ini memasukkan file header unguided1.cpp yang berisi definisi kelas Calculator.
Di dalam fungsi main(), objek Calculator dibuat.
Program mencetak menu kalkulator dan meminta pengguna untuk memilih operasi yang ingin dilakukan.
Setelah pengguna memilih operasi, program meminta dua angka yang akan dioperasikan.
Operasi yang dipilih oleh pengguna dieksekusi menggunakan metode yang sesuai dari objek Calculator, dan hasilnya ditampilkan.

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map

```C++
#include <iostream>
#include <map>

using namespace std;

// Fungsi-fungsi untuk operasi aritmatika
float add(float x, float y) { return x + y; }
float subtract(float x, float y) { return x - y; }
float multiply(float x, float y) { return x * y; }
float divide(float x, float y) { return (y == 0) ? 0 : x / y; }

int main() {
    // Inisialisasi map dengan pasangan nilai string dan fungsi
    map<string, float(*)(float, float)> operations;
    operations["+"] = add;
    operations["-"] = subtract;
    operations["*"] = multiply;
    operations["/"] = divide;

    float num1, num2;
    string op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    // Mencari dan menjalankan fungsi yang sesuai dari map
    if (operations.find(op) != operations.end()) {
        cout << "Result: " << operations[op](num1, num2) << endl;
    } else {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}

```

### Penjelasan:
1.Program ini menggunakan std::map untuk memetakan string (operator) ke fungsi-fungsi operasi aritmatika.
2.Empat fungsi add, subtract, multiply, dan divide didefinisikan untuk operasi aritmatika dasar.
3.Pada main(), pengguna diminta untuk memasukkan dua angka dan operator.
4.Operator yang dimasukkan oleh pengguna dicocokkan dengan kunci dalam std::map.
5.Jika operator valid, fungsi yang sesuai dipanggil dan hasilnya ditampilkan.
6.Jika operator tidak valid, program memberikan pesan kesalahan.

### Perbedaan antara Array dan Map
Array: Array adalah struktur data yang terdiri dari kumpulan elemen dengan tipe data yang sama, yang diindeks oleh nomor integer. Dalam array, elemen-elemen tersebut disimpan secara berurutan di dalam memori. Array memungkinkan akses elemen secara langsung melalui indeksnya.

Map: Map adalah struktur data yang memetakan kunci unik ke nilai-nilai yang terkait. Kunci dan nilai dalam map dapat memiliki tipe data yang berbeda. Di C++, std::map adalah implementasi dari struktur data map menggunakan red-black tree, yang memastikan kunci-kunci terurut secara terurut, sedangkan di Python, map() adalah fungsi yang digunakan untuk menerapkan operasi ke semua elemen dalam sebuah iterable.

### Kesimpulan
Perbedaan utama antara array dan map adalah cara mereka menyimpan dan mengorganisasi data. Array menyimpan data secara berurutan dalam memori dan diakses menggunakan indeks, sedangkan map menyimpan data dalam bentuk pasangan kunci-nilai yang tidak harus berurutan dalam memori dan diakses melalui kunci yang terkait.

## Referensi
[1] Nagendra Singh, Manish Kumar, Vidhan Singh, and Dayanand Choudhary, “Pengenalan tipe data dasar dalam pemrograman,” Nov. 2023.

[2] W. S. Y. Hardy, “Abstract Data Types,” 2001.

