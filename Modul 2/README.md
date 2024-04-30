# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Bara Aulia Attar</p>
<p align="center">2311110053</p>

## Dasar Teori

### ARRAY
Array adalah serangkaian variabel dengan nama yang sama. Nilai individual, juga disebut elemen, dalam rangkaian diakses menggunakan indeks. Anda dapat menganggap array sebagai tabel dengan kolom. Kolom berisi sel, dan di setiap sel terdapat nilai. Anda bisa menyimpan data ke sel, atau mengambil data dari sel, menggunakan nomor baris (atau indeks) dalam tabel[1]. Berikut ini adalah beberapa jenis array:

## 1. Array Satu Dimensi
Array satu dimensi adalah larik yang komponennya berupa item data tunggal (angka tunggal, karakter, dan sebagainya)[2]. Misalnya, kita memiliki array satu dimensi yang berisi angka [1, 2, 3, 4].
```C++
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {9, 3, 5, 2, 1}; //deklarasi array
    cout << arr[1] << endl;
    cout << arr[4];
}
```

## 2. Array Dua Dimensi
Array yang elemen-elemennya merupakan array satu dimensi disebut array dua dimensi [H.Davis, 2004]. Misalnya, kita bisa memiliki array dua dimensi seperti [[1, 2], [3, 4]], yang terdiri dari dua baris dan dua kolom.
```C++
#include<iostream>
using namespace std;
int main(){
    int arr[2][2] = {{3, 2}}, {{2, 5}};
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout << arr[i][j] << " ";
        };
        cout << endl;
    };
}
```

## 3. Array Multidimensi
Array multidimensi adalah struktur data yang memungkinkan kita untuk menyimpan dan mengelola kumpulan data dalam format yang memiliki lebih dari satu dimensi.
```C++
#include<iostream>
using namespace std;
int main(){
    int arr[2][2][3] = {{{2, 8, 7}, {6, 5, 1}}, {{8, 5, 2}, {9, 2, 7}}};

    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            for (int k=0; k<2; k++){
                cout << arr[i][j][k] << " ";
            };
            cout << endl;
        };
        cout << endl;
    };
}
```

## 4. Array Empat Dimensi
Array empat dimensi dapat dianggap sebagai kumpulan array tiga dimensi. Misalnya dalam konteks pemrosesan gambar atau video, sebuah array empat dimensi bisa digunakan untuk menyimpan video, di mana dimensi pertama adalah urutan frame, dimensi kedua dan ketiga adalah piksel gambar dalam setiap frame, dan dimensi keempat adalah nilai warna (misalnya, RGB) dari setiap piksel.
Contoh:
int [3][2][4][4]; 

## 5. Array Lima Dimensi
Array lima dimensi menambahkan satu lapisan kompleksitas lagi dan bisa diibaratkan sebagai kumpulan dari array empat dimensi.
Contoh:
int [2][4][4][3][3];

## Guided

### 1. Program Input Array Tiga Dimensi

```C++
#include <iostream>
using namespace std;

int main(){
    // Deklarasi Array
    int arr[2][3][3];
    // Input elemen
    for (int x=0; x < 2; x++)
    {
        for (int y=0; y < 3; y++)
        {
            for (int z=0; z < 3; z++)
            {
                cout << "Input array[" << x << "] [" << y << "] [" << z <<"] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data array[" << x << "] [" << y << "] [" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    //Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
```
### Penjelasan
Program di atas merupakan program yang menjalankan input array tiga dimensi. Int arr[2][3][3] mendeklarasikan array tiga dimensi secara berurutan dua bagian[matriks], tiga kolom[kolom], tiga baris[baris] sesuai pertanyaan. 

Setelah itu, program meminta user untuk menginputkan nilai menggunakan fungsi perulangan bercabang. Setelah semua nilai telah dimasukkan, program mencetak nilai-nilai array yang telah dimasukkan. Pertama, nilai-nilai array dicetak dalam format [x][y][z] = nilai, di mana x, y, dan z adalah indeks baris, kolom, dan bagian utama array. Setelah itu, program mencetak tampilan array dalam bentuk tabel dengan menggunakan perulangan untuk setiap dimensi.

### 2. Program Mencari Nilai Maksimal pada Array

```C++
#include <iostream>
using namespace std;

int main(){
    int maks, a, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;

    if (a <= 0){
        cout << "Panjang array harus lebih besar dari 0." << endl;
        return 1; //Return 1 to indicate error
    }
    int array[a];
    cout << "Masukkan " << a << " angka\n";

    for (int i = 0; i < a; i++){
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }

    maks = array[0];
    lokasi = 0;

    for (int i = 1; i < a; i++){
        if (array[i] > maks){
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
    return 0;
}
```
### Penjelasan
Program di atas merupakan program yang pencarian nilai maksimum dalam sebuah array yang dimasukkan oleh user.

Pertama, program meminta user untuk memasukkan panjang array 'a' yang diinginkan. Percabangan dilakukan di awal untuk mencetak pesan kesalahan dan mengembalikan nilai 1 jika array kurang dari atau sama dengan 0. Selanjutnya, user diminta untuk memasukkan nilai-nilai array sebanyak 'a' kali melalui perulangan. Program mencari nilai maksimum dalam array menggunakan perulangan yang kedua. Variabel maks digunakan untuk menyimpan nilai maksimum, sementara variabel lokasi digunakan untuk menyimpan indeks di mana nilai maksimum ditemukan. Setelah nilai maksimum ditemukan, program mencetak nilai maksimum beserta indeksnya.

## Unguided
![Screenshot(338)](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/blob/main/Screenshot%202024-04-30%20160929.png)
### 1. Buatlah program untuk menampilkan output seperti berikut dengan data yang diinputkan oleh user!

```C++
#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int data[MAX_SIZE];
    int genap[MAX_SIZE], ganjil[MAX_SIZE];
    int dataCount = 0, genapCount = 0, ganjilCount = 0;

    cout << "Masukkan data array: ";
    int num;
    while (cin.peek() != '\n' && dataCount < MAX_SIZE) {
        cin >> num;
        data[dataCount] = num;
        dataCount++;
        if (num % 2 == 0) {
            genap[genapCount] = num;
            genapCount++;
        } else {
            ganjil[ganjilCount] = num;
            ganjilCount++;
        }
    }

    cout << "Data array:";
    for (int i = 0; i < dataCount; ++i) {
        cout << " " << data[i];
    }

    cout << "\nNomor genap:";
    for (int i = 0; i < genapCount; ++i) {
        cout << " " << genap[i];
    }

    cout << "\nNomor ganjil:";
    for (int i = 0; i < ganjilCount; ++i) {
        cout << " " << ganjil[i];
    }

    return 0;
}
```
#### Output:

![Screenshot(337)](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/blob/main/Screenshot%202024-04-30%20160846.png)

Code di atas merupakan program sederhana dalam bahasa C++ yang meminta pengguna untuk memasukkan data array. Program akan terus menerima input angka hingga pengguna menekan tombol Enter. Setelah semua data dimasukkan, program akan memisahkan angka genap dan ganjil dari data array tersebut. Kemudian, program akan menampilkan data array yang dimasukkan oleh pengguna, diikuti dengan angka genap dan angka ganjil yang dipisahkan. Program ini menggunakan array untuk menyimpan data array, angka genap, dan angka ganjil. Selain itu, program juga menggunakan variabel untuk menghitung jumlah data yang dimasukkan dan jumlah angka genap serta ganjil.

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

```c++
#include <iostream>
using namespace std;

int main() 
{
    int x, y, z;
    cout << "Masukkan jumlah baris: ";
    cin >> x;
    cout << "Masukkan jumlah kolom: ";
    cin >> y;
    cout << "Masukkan jumlah layer: ";
    cin >> z;

    int arr[x][y][z];

    for (int a = 0; a < x; a++) 
    {
        for (int b = 0; b < y; b++) 
        {
            for (int c = 0; c < z; c++) 
            {
                cout << "Input array[" << a << "][" << b << "][" << c << "] = ";
                cin >> arr[a][b][c];
            }
        }
        cout << endl;
    }

    for (int a = 0; a < x; a++)
    {
        for (int b = 0; b < y; b++)
        {
            for (int c = 0; c < z; c++)
            {
                cout << "Data Array[" << a << "][" << b << "][" << c << "] = " << arr[a][b][c] << endl;
            }
        }
    }
    cout << endl;

    for (int a = 0; a < x; a++)
    {
        for (int b = 0; b < y; b++)
        {
            for(int c = 0; c < z; c++)
            {
                cout << arr[a][b][c] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
```
#### output

![Screenshot(561)](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/blob/main/Unguided2%20output%20modul2.png) 

Hasil output program tersebut menunjukkan proses penginputan dan penampilan data dari array tiga dimensi yang telah diisi oleh pengguna. Pengguna diminta untuk memasukkan jumlah baris, kolom, dan layer array, kemudian memasukkan nilai-nilai elemen array sesuai dengan indeksnya. Setelah semua nilai diinputkan, program menampilkan data array dengan format "Data Array[i][j][k] = nilai" yang mencakup semua nilai yang telah dimasukkan sebelumnya.

Selain itu, program juga menampilkan seluruh elemen array dalam format matriks tiga dimensi, di mana setiap baris mewakili satu layer dari array tiga dimensi. Dengan demikian, pengguna dapat melihat dengan jelas struktur dan nilai-nilai dari array tiga dimensi yang telah diinputkan. Dari output tersebut, dapat terlihat bahwa nilai-nilai yang dimasukkan oleh pengguna berhasil disimpan dan ditampilkan dengan benar sesuai dengan indeksnya dalam array tiga dimensi.

### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata–rata dari suatu array dengan input yang dimasukan oleh user!

```c++
#include <iostream>

double hitungMaksimum(int arr[], int n) {
    int maksimum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maksimum) {
            maksimum = arr[i];
        }
    }
    return maksimum;
}

double hitungMinimum(int arr[], int n) {
    int minimum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    return minimum;
}

double hitungRataRata(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / n;
}

int main() {
    int n;
    std::cout << "Masukkan jumlah elemen dalam array: ";
    std::cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        std::cout << "Masukkan elemen ke-" << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int choice;
    do {
        std::cout << "Menu Pilihan:" << std::endl;
        std::cout << "1. Hitung Maksimum" << std::endl;
        std::cout << "2. Hitung Minimum" << std::endl;
        std::cout << "3. Hitung Rata-rata" << std::endl;
        std::cout << "4. Keluar" << std::endl;
        std::cout << "Pilih menu (1/2/3/4): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Nilai Maksimum: " << hitungMaksimum(arr, n) << std::endl;
                break;
            case 2:
                std::cout << "Nilai Minimum: " << hitungMinimum(arr, n) << std::endl;
                break;
            case 3:
                std::cout << "Nilai Rata-rata: " << hitungRataRata(arr, n) << std::endl;
                break;
            case 4:
                std::cout << "Keluar dari program" << std::endl;
                break;
            default:
                std::cout << "Pilihan tidak valid" << std::endl;
        }
    } while (choice != 4);

    return 0;
}
```
#### output

![Screenshot(376)](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/blob/main/Screenshot%202024-04-30%20160725.png)

Program tersebut adalah sebuah program C++ yang memungkinkan pengguna untuk menginputkan elemen-elemen ke dalam sebuah array, kemudian melakukan perhitungan nilai maksimum, minimum, dan rata-rata dari array tersebut. Program ini menggunakan tiga fungsi terpisah, yaitu hitungMaksimum, hitungMinimum, dan hitungRataRata, untuk melakukan perhitungan tersebut. Setelah pengguna memasukkan elemen-elemen array, program akan menampilkan menu pilihan yang berisi opsi untuk menghitung nilai maksimum, minimum, atau rata-rata, serta opsi untuk keluar dari program. Pengguna dapat memilih salah satu opsi tersebut dengan memasukkan angka yang sesuai, dan program akan menampilkan hasil perhitungan sesuai dengan pilihan pengguna. Program akan terus menampilkan menu pilihan sampai pengguna memilih opsi untuk keluar.

Program ini menggunakan array statis di mana ukuran array ditentukan oleh input pengguna. Saat menggunakan array statis seperti ini, ukuran array harus diketahui pada saat kompilasi program. Jika ingin membuat program yang lebih fleksibel dengan ukuran array yang dapat diubah saat runtime, bisa menggunakan pendekatan dengan alokasi memori dinamis atau menggunakan struktur data seperti std::vector dalam C++.

Dalam contoh yang diberikan, array yang dimasukkan terdiri dari 5 elemen yaitu {6, 7, 8, 9, 4}. Setelah melakukan perhitungan, program menemukan bahwa nilai maksimum dari array tersebut adalah 9, nilai minimumnya adalah 4, dan nilai rata-ratanya adalah 6.8. Hal ini berarti bahwa dari elemen-elemen yang dimasukkan, 9 adalah nilai terbesar, 4 adalah nilai terkecil, dan rata-rata dari semua elemen tersebut adalah 6.8. Dengan program ini, pengguna dapat dengan cepat mengetahui nilai maksimum, minimum, dan rata-rata dari sejumlah elemen yang dimasukkan. Hal ini sangat berguna dalam analisis data sederhana dan dapat membantu pengguna dalam mengambil keputusan berdasarkan statistik dasar dari data yang dimiliki.  

## Kesimpulan
Array atau dalam bahasa indonesia disebut larik, merupakan sebuah teknik pemrograman di mana array tersebut dianalogikan sebagai wadah untuk menyimpan data data yang berjumlah banyak dan memiliki tipe data yang sama[4]. Array merupakan struktur data yang digunakan untuk menyimpan sekumpulan nilai yang memiliki tipe data yang sama. Array memungkinkan kita untuk menyimpan data dalam urutan tertentu dan mengaksesnya dengan menggunakan indeks. Terdapat beberapa jenis array, di antaranya adalah array satu dimensi (1D array) yang merupakan kumpulan nilai dalam satu baris, array dua dimensi (2D array) yang merupakan matriks dengan baris dan kolom, array multidimensi yang memiliki lebih dari dua dimensi. Array sangat berguna dalam pemrograman karena memungkinkan kita untuk menyimpan dan mengelola data secara efisien, array empat dimensi merupakan struktur data yang memungkinkan penyimpanan data dalam empat level, sedangkan array lima dimensi memungkinkan penyimpanan data dalam lima level. array empat dimensi dan lima dimensi digunakan untuk kasus-kasus di mana data perlu disusun dalam struktur yang lebih kompleks dan memiliki banyak dimensi[5].

## Referensi
[1] Putri, M. P. (Ed.). Algoritma dan Struktur Data. CV WIDINA MEDIA UTAMA, 2022. <br>
[2] R. Firliana and P. Kasih, Adjie Media Nusantara, "Algoritma dan Pemrograman C++," 2018. <br>
[3] Efendi, Yasin. Buku Ajar Pendidikan Algoritma dan Struktur Data. Eureka Media Aksara, 2022. <br>
[4] Putra, Muhammad Taufik D., et al. BELAJAR DASAR PEMROGRAMAN DENGAN C++. Edited by Damayanti, Evi, CV WIDINA MEDIA UTAMA, 2022. <br>
[5] J. Smith, "Exploring High-Dimensional Arrays for Big Data Processing," Journal of Big Data Analytics, vol. 3, no. 1, pp. 45-55, 2018.