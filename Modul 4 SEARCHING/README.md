# <h1 align="center">Laporan Praktikum Modul Searching</h1>
<p align="center">Bara Aulia Attar | 2311110053</p>

## Dasar Teori

Algoritma  pencarian  (searching  algorithm)  adalah  algoritma  yang  menerima  sebuah  kata kunci  dan  dengan  langkah-langkah  tertentu  akan  mencari  rekaman  dengan  kata  kunci  tersebut. Setelah proses pencarian dilaksanakan, maka akan diperoleh salah satu dari dua hal kemungkinan, yaitu data yang dicari ditemukan atau tidak ditemukan [1].

Pencarian (searching) merupakan proses yang fundamental dalam pengolahan data. Proses pencarian adalah menemukan nilai (data) tertentu di dalam sekumpulan data yang bertipe sama (baik bertipe dasar atau bertipe bentukan). Algoritma dan pemrograman telah disebutkan bahwa aktifitas yang berkaitan dengan pengolahan data sering didahului dengan proses pencarian. Sebagai contoh, untuk  mengubah  (update)  data  tertentu,  langkah  pertama  yang  harus  dilakukan  adalah  mencari keberadaan data tersebut didalam kumpulannya. Jika data yang dicari ditemukan, makadata tersebut dapat diubah nilainya dengan data yang baru. Aktifitas awal yang sama juga dilakukan pada proses penambahan (insert) data baru. Proses penambahan data dimulai dengan mencari apakah data yang akan  ditambahkan  sudah  terdapat  di  dalam  kumpulan. Jika  sudah  ada  dan  mengamsusikan  tidak boleh ada duplikasi data maka data tersebut tidak perlu ditambahkan, tetapi jika belum ada, maka ditambahkan.  Data  dapat  disimpan  secara  temporer  dalam  memori  utama  atau  disimpan  secara permanen didalam memori skunder(tape atau disk). Didalam memori utama, struktur penyimpanan data yang umum adalah berupa larik atau tabel (array), sedangkan didalam memori sekunder berupa arsip (file) [1].

Terdapat 2 metode pada algoritma Searching, yaitu:
1. Sequential Search
2. Binary Search

Berikut penjelasannya dari masing masing algoritma Searching diatas :

### 1. Sequential Search :

Algoritma sequential searching yang biasanya disebut sebagai pendekatan pencarian secara beruntun merupakan pencarian yang diawali dari elemen awal sampai dengan elemen akhir secara beruntun hingga bisa menemukan elemen yang akan dikunjungi [2]. Algoritma ini mampu melakukan pencarian dengan array yang data-datanya tidak perlu melalui pengurutan data sebelumnya. Cara kerja algoritma ini adalah dengan melakukan perbandingan antara
data yang ada dengan data yang akan dicari satu per satu secara berurutan sampai dapat menemukan datanya. Berikut konsep penggunaan sequential searching: <br> 
Terdapat A yang terdapat enam data yang disimpan pada array. Maka, didapatkan persamaan 1
seperti berikut ini: <br>

A[1], A[2], A[3], ……, A[n-1] 

Untuk data yang akan dilakukan pencarian disimbolkan dengan b. Maka, untuk menemukan data tersebut dapat dinotasikan dengan A[i]=b. Dimana. i merupakan bilangan index yang paling kecil yang dapat terpenuhi dengan kondisi 0 ≤ k ≤ n-1. Tetap, dapat dimungkinkan data yang akan dilakukan pencarian tidak ditemukan. <br>

Pendekatan sequential searching dapat melakuan pengembalian nilai record atau pointer ke record. Record merupakan jenis tipe data yang berisi atas variable-varibel atau kumpulanya yang diberi nama field. Tahapan dari Sequential Search melakukan kunjungan dari satu pohon ke pohon yang lain dengan cara pada tiap-tiap simpulnya dikunjungi sekali saja yang biasanya disebut dengan tree transversal/kunjungan pohon. Tahapan pada pendekatan pencarian secara berurutan melalui beberapa proses [2], yaitu melakukan identifikasi array, menentukan data yang akan dilakukan pencarian, mencocokkan data diawali dari data pertama hingga data terakhir, data yang dilakukan pencarian kemudian membandingkan dengan setiap datanya pada array. Pencarian dilakukan dengan membandingkan seluruh data pada array sampai selesai. Apabila data yang akan dilakukan pencarian telah didapatkan maka proses membandingkan elemen array akan dihentikan, dan apabila data yang dicari pada seluruh array tidak ditemukan
maka proses akan berhenti [3].

### 2. Binary Search :

Pencarian biner (Binary Search) adalah metode pencarian data pada array yang telah terurut. Metode ini lebih efisien daripada metode pencarian linier dimana semua elemen di dalam array diuji satu per satu sampai ditemukan elemen yang diinginkan. Selain dari pencarian biner, terdapat juga pencarian interpolasi (interpolation search), pencarian lompat (jump search), yang sama-sama bekerja pada data yang terurut. Pencarian pada data yang terurut menghasilkan pencarian yang cepat. Pencarian interpolasi mempunyai kekompleksan waktu rata-rata adalah O (log log n), sedangkan pencarian lompat adalah O(kn1/(k+1)). Kekompleksan waktu untuk pencarian biner adalah O (log n) seperti yang dikemukakan oleh Knuth. 

Pada pencarian biner, data harus dalam keadaan terurut. Proses pencarian bermula dengan membagikan array menjadi dua. Jika data yang dicari lebih kecil dari data yang terletak di tengah-tengah, maka proses pencarian akan dilanjutkan ke sebelah kiri dengan cara membagi array sebelah kirim menjadi dua. Sebaliknya jika data yang
dicari lebih besar dari data yang terletak di tengah, maka proses pencarian akan dilanjutkan ke sebelah kanan dengan kembali membagi array menjadi dua bagian dan mencari titik tengahnya. Proses pembagian akan terus berulang hingga data yang dicari ditemukan [4].

Prinsip pencarian biner dapat dijelaskan sebagai berikut Misalkan indeks kiri adalah i dan indeks kanan adalah j. Pada mulanya, kita inisialisasi i dengan 1 dan j dengan n .
1. Bagi dua elemen larik pada elemen tengah. Elemen tengah adalah elemen dengan indeks k = (i + j) div 2. ( Elemen tengah L[K], membagi larik menjadi dua bagian yaitu bagian kiri L[i..j] dan bagian kanan L[k+1..j]) <br>
2. Periksa apakah L[K] = x, jika L[K] = x maka pencarian selesai sebab x sudah ditemukan. Tetapi jika L[K] ≠ x, harus ditentukan apakah pencarian akan dilakukan di larik bagian kiri atau dilarik bagian kanan. Jika L[K] < x, maka pencarian dilakukan lagi pada larik bagian kiri. Sebaliknya, jika L[K] > x maka pencarian dilakukan lagi pada larik bagian kanan. <br>
3. Ulangi langkah pertama hingga x ditemukan atau i > j yaitu ukuran larik sudah nol.

## Guided 

### 1. Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data.

```C++
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;
    //Algoritma sequential search
    for (i = 0; i < n; i++) {
        if (data[i] == cari) {
            ketemu = true;
            break;
        }
    }
    cout << "\t Program Sequential Search Sederhana\n" << endl;
    cout << " Data : {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;

    if (ketemu) {
        cout << "\n Angka" << cari << "ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    return 0;
}
```
#### Output

![Screenshot (657)](https://github.com/mhmmadnaufal/Praktikum-Data-Structure-Assigment/assets/153933119/8a31508b-3cc6-4b30-b708-19ef0b98d1c6)

Codingan diatas merupakan implementasi sederhana dari algoritma pencarian Sequential Search dalam bahasa pemrograman C++. Pada awal program, terdapat inisialisasi array 'data' yang berisi 10 elemen bilangan bulat. Selain itu, terdapat variabel 'cari' yang menyimpan nilai yang akan dicari dalam array tersebut, dalam kasus ini adalah angka 10. Program kemudian melakukan iterasi dari indeks 0 hingga 9 untuk membandingkan setiap elemen array dengan nilai yang dicari menggunakan loop for.

Selama iterasi, program memeriksa setiap elemen array apakah sama dengan nilai yang dicari. Jika nilai tersebut ditemukan, variabel 'ketemu' diubah menjadi true dan program keluar dari loop dengan menggunakan break. Setelah iterasi selesai, program mencetak pesan berisi informasi bahwa nilai yang dicari (angka 10) ditemukan pada indeks ke berapa dalam array 'data'. Jika nilai tidak ditemukan, program akan mencetak pesan bahwa nilai tersebut tidak ditemukan dalam array.

Dalam kasus ini, output program menunjukkan bahwa angka 10 berhasil ditemukan pada indeks ke-9 dalam array 'data'. Hal ini berarti bahwa nilai 10 terdapat dalam array tersebut pada posisi indeks ke-9. Dengan demikian, program Sequential Search sederhana ini berhasil menemukan nilai yang dicari dalam array dengan menggunakan pendekatan pencarian berurutan secara berurutan dari awal hingga akhir array. Algoritma Sequential Search cocok digunakan untuk mencari nilai dalam array yang tidak terurut, meskipun memiliki kompleksitas waktu O(n) yang linear.

### 2. Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search.

```C++
#include <iostream>
#include <iomanip>

using namespace std;

int bil_data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for(i = 0; i < 7; i++) {
        min = i;
        for(j = i + 1; j < 7; j++) {
            if(bil_data[j] < bil_data[min]) {
                min = j;
            }
        }
        temp = bil_data[i];
        bil_data[i] = bil_data[min];
        bil_data[min] = temp;
    }
}

void binary_search() {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 6;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(bil_data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(bil_data[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if(b_flag == 1) {
        cout << "\n Data ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\n Data tidak ditemukan\n";
    }
}

int main() {
    cout << "\t BINARY SEARCH\n";
    cout << "\n Data : ";
    // tampilkan data awal
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";
    // urutkan data dengan selection sort
    selection_sort();
    // tampilkan data setelah diurutkan
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    binary_search();
    return 0;
}
```
#### Output

![Screenshot (658)](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/blob/main/Output%20Modul%204/Screenshot%202024-05-02%20195420.png)

Codingan di atas merupakan program C++ yang mengimplementasikan algoritma Binary Search untuk mencari nilai tertentu dalam array bilangan bulat yang telah diurutkan secara ascending. Program ini terdiri dari fungsi selection_sort() untuk mengurutkan array menggunakan algoritma Selection Sort dan fungsi binary_search() untuk melakukan pencarian menggunakan algoritma Binary Search. Array 'bil_data' berisi 7 elemen bilangan bulat yang belum terurut, dan variabel 'cari' menyimpan nilai yang akan dicari dalam array tersebut.

Pada bagian main() program, terdapat langkah-langkah eksekusi utama. Pertama, program menampilkan data awal yang belum diurutkan. Kemudian, pengguna diminta untuk memasukkan nilai yang ingin dicari. Selanjutnya, dilakukan pengurutan data dengan menggunakan fungsi selection_sort() dan menampilkan data setelah diurutkan. Setelah itu, dilakukan pencarian nilai yang dimasukkan pengguna menggunakan algoritma Binary Search melalui fungsi binary_search(). Algoritma Binary Search bekerja dengan membagi array menjadi dua bagian setiap iterasi, lalu membandingkan nilai tengah dengan nilai yang dicari. Jika nilai tengah sama dengan nilai yang dicari, maka data ditemukan dan program mengeluarkan pesan dengan indeks tempat data tersebut ditemukan. Jika tidak, program akan terus membagi array menjadi dua bagian hingga menemukan nilai yang dicari atau menunjukkan bahwa data tidak ditemukan dalam array. 

Program di atas merupakan implementasi algoritma Binary Search pada array bilangan bulat yang telah diurutkan menggunakan algoritma Selection Sort. Pada awalnya, program menampilkan data awal yang belum diurutkan, yaitu 1, 8, 2, 5, 4, 9, dan 7. Pengguna diminta untuk memasukkan nilai yang ingin dicari, dalam kasus ini adalah angka 5. Selanjutnya, program mengurutkan data menggunakan Selection Sort dan menampilkan data setelah diurutkan menjadi 1, 2, 4, 5, 7, 8, dan 9.

Setelah itu, program melakukan pencarian nilai 5 menggunakan algoritma Binary Search. Karena array sudah diurutkan, Binary Search dapat dengan cepat menemukan nilai yang dicari. Hasil output program menunjukkan bahwa nilai 5 ditemukan pada index ke-3 dalam array yang telah diurutkan. Dengan demikian, program memberikan informasi bahwa nilai 5 berhasil ditemukan dalam array dan menampilkan indeks tempat nilai tersebut berada. Dengan menggunakan algoritma Binary Search, program ini dapat mencari nilai dalam array dengan kompleksitas waktu O(log n), yang lebih efisien dibandingkan dengan Sequential Search. 

## Unguided 

### 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!

```C++
#include <iostream>
#include<algorithm>
#include<string>

using namespace std;

// Fungsi untuk pencarian biner
int binarySearch(const string& str, char target) {
    int left = 0;
    int right = str.length() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (str[mid] == target) {
            return mid;
        } else if (str[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

// Fungsi untuk mencari huruf dalam kalimat
string searchLetterInSentence(const string& sentence, char letter) {
    string sortedSentence = sentence;
    sort(sortedSentence.begin(), sortedSentence.end());

    int index = binarySearch(sortedSentence, letter);

    if (index != -1) {
        // Mengembalikan pesan dengan penyesuaian indeks ke kalimat asli
        int originalIndex = sentence.find(sortedSentence[index]);
        return "Huruf '" + string(1, letter) + "' ditemukan pada indeks ke-" + to_string(originalIndex) + " dalam kalimat.";
    } else {
        return "Huruf '" + string(1, letter) + "' tidak ditemukan dalam kalimat.";
    }
}

int main() {
    string kalimat;
    char huruf;

    // Input kalimat
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    // Input huruf yang ingin dicari
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;

    // Mencari huruf dalam kalimat
    string hasilPencarian = searchLetterInSentence(kalimat, huruf);

    // Output hasil pencarian
    cout << hasilPencarian << endl;

    return 0;
}
```
#### Output:

![Screenshot (659)](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/blob/main/Output%20Modul%204/Screenshot%202024-05-01%20221217.png)

Codingan di atas merupakan program C++ yang mengimplementasikan algoritma Binary Search untuk mencari huruf tertentu dalam sebuah kalimat yang dimasukkan oleh pengguna. Program ini terdiri dari dua fungsi utama, yaitu binarySearch() untuk melakukan pencarian biner pada string yang telah diurutkan dan searchLetterInSentence() untuk mencari huruf dalam kalimat asli yang diinputkan pengguna. Algoritma Binary Search digunakan untuk mencari huruf target dalam string yang telah diurutkan.

Pada bagian main() program, pengguna diminta untuk memasukkan sebuah kalimat dan huruf yang ingin dicari dalam kalimat tersebut. Selanjutnya, program akan melakukan pencarian huruf dalam kalimat dengan menggunakan fungsi searchLetterInSentence(). Pertama, kalimat diurutkan secara alfabetis menggunakan fungsi sort(). Kemudian, dilakukan pencarian huruf target dalam kalimat yang telah diurutkan menggunakan binarySearch(). Jika huruf ditemukan, program akan menampilkan pesan dengan indeks huruf dalam kalimat asli.

Dalam hasil output yang diberikan berdasarkan input "Saya mengambil mata kuliah sains data" dan huruf 'g', program berhasil menemukan huruf 'g' pada indeks ke-8 dalam kalimat tersebut. Hal ini menunjukkan bahwa program telah berhasil melakukan pencarian huruf target dalam kalimat yang diinputkan oleh pengguna. Dengan demikian, program ini memberikan informasi yang jelas dan tepat mengenai lokasi huruf yang dicari dalam kalimat asli yang telah diinputkan. Dengan menggunakan algoritma Binary Search, program ini memberikan solusi efisien untuk mencari huruf dalam sebuah kalimat dengan kompleksitas waktu yang lebih rendah.

### 2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!

```c++
#include <iostream>
#include <string>

void countVowels(const std::string& sentence) {
    int aCount = 0, iCount = 0, uCount = 0, eCount = 0, oCount = 0;
    for (char c : sentence) {
        char lowercaseChar = std::tolower(c);
        if (lowercaseChar == 'a') {
            aCount++;
        } else if (lowercaseChar == 'i') {
            iCount++;
        } else if (lowercaseChar == 'u') {
            uCount++;
        } else if (lowercaseChar == 'e') {
            eCount++;
        } else if (lowercaseChar == 'o') {
            oCount++;
        }
    }
    std::cout << "Jumlah huruf 'A' dalam kalimat: " << aCount << std::endl;
    std::cout << "Jumlah huruf 'I' dalam kalimat: " << iCount << std::endl;
    std::cout << "Jumlah huruf 'U' dalam kalimat: " << uCount << std::endl;
    std::cout << "Jumlah huruf 'E' dalam kalimat: " << eCount << std::endl;
    std::cout << "Jumlah huruf 'O' dalam kalimat: " << oCount << std::endl;
}

int main() {
    std::string kalimat;

    // Input kalimat
    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, kalimat);

    // Hitung jumlah huruf vokal dalam kalimat
    countVowels(kalimat);

    return 0;
}
```
#### output

![Screenshot (660)](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/blob/main/Output%20Modul%204/Screenshot%202024-05-01%20221500.png)

Codingan di atas adalah program C++ sederhana yang menghitung jumlah huruf vokal 'a', 'i', 'u', 'e', dan 'o' dalam sebuah kalimat yang dimasukkan oleh pengguna. Program ini menggunakan fungsi countVowels() yang mengiterasi setiap karakter dalam kalimat, mengubahnya menjadi huruf kecil, dan kemudian menghitung jumlah kemunculan masing-masing huruf vokal. Setelah menghitung jumlah huruf vokal, program akan mencetak jumlah kemunculan masing-masing huruf vokal ke layar.

Dalam fungsi main(), pengguna diminta untuk memasukkan sebuah kalimat. Setelah kalimat dimasukkan, program akan memanggil fungsi countVowels() untuk menghitung jumlah huruf vokal dalam kalimat tersebut. Program akan menghitung dan mencetak jumlah kemunculan huruf vokal 'a', 'i', 'u', 'e', dan 'o' dalam kalimat yang dimasukkan oleh pengguna.

Dari hasil output yang diberikan berdasarkan input "Saya berkuliah di institut teknologi telkom purwokerto", program berhasil menghitung jumlah kemunculan masing-masing huruf vokal. Program mencetak jumlah huruf 'a', 'i', 'u', 'e', dan 'o' dalam kalimat tersebut secara terpisah. Dengan demikian, output tersebut memberikan informasi yang jelas mengenai jumlah kemunculan huruf vokal dalam kalimat yang diinputkan oleh pengguna. Kalimat yang diinputkan pengguna : Saya berkuliah di institut teknologi telkom purwokerto, sehingga banyak huruf vokal yang ada pada kalimat tersebut seperti berikut : Jumlah huruf 'a' dalam kalimat: 3, Jumlah huruf 'i' dalam kalimat: 5, Jumlah huruf 'u' dalam kalimat: 3, Jumlah huruf 'e' dalam kalimat: 4, Jumlah huruf 'o' dalam kalimat: 5. Program ini memberikan solusi sederhana namun efektif untuk menghitung jumlah huruf vokal dalam sebuah kalimat dengan menggunakan iterasi karakter dan kondisional if-else.

### 3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

```c++
#include <iostream>
#include <vector>

using namespace std;

int sequentialSearch(const vector<int>& data, int target) {
    int count = 0;
    for (int num : data) {
        if (num == target) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> data = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target = 4;

    // Hitung berapa banyak angka 4 dalam data menggunakan Sequential Search
    int jumlahAngka4 = sequentialSearch(data, target);

    // Output hasil perhitungan
    cout << "Jumlah angka 4 dalam data adalah: " << jumlahAngka4 << endl;

    return 0;
}
```
#### output

![Screenshot (661)](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/blob/main/Output%20Modul%204/Screenshot%202024-05-01%20221604.png)

Codingan diatas merupakan program sederhana dalam bahasa C++ yang mengimplementasikan fungsi sequential search untuk mencari berapa kali angka tertentu muncul dalam vector `data`. Program menghitung berapa kali angka `4` muncul dalam vector `data` dengan menggunakan fungsi `sequentialSearch`. Setelah itu, program mencetak hasil perhitungan tersebut ke layar dengan menggunakan `cout`.

Dalam program tersebut, vector `data` berisi sekumpulan angka integer yang akan diiterasi satu per satu. Fungsi `sequentialSearch` akan memeriksa setiap elemen dalam vector `data` dan menghitung berapa kali angka `4` muncul. Hasil perhitungan tersebut akan disimpan dalam variabel `jumlahAngka4`, yang kemudian dicetak ke layar menggunakan `cout`.

Dari hasil output yang diberikan berdasarkan vektor data {9, 4, 1, 4, 7, 10, 5, 4, 12, 4} dan target angka 4, program berhasil menghitung dan mencetak jumlah kemunculan angka 4 di dalam vektor data tersebut. Dengan demikian, output "Jumlah angka 4 dalam data adalah: 4" menunjukkan bahwa angka 4 muncul sebanyak 4 kali di dalam vektor data. Program ini memberikan solusi sederhana untuk melakukan pencarian sekuensial dalam vektor data dan menghitung jumlah kemunculan angka tertentu dengan efisien menggunakan iterasi dan perbandingan sederhana.

## Kesimpulan
Kesimpulannya, algoritma searching adalah proses menemukan sebuah data yang diinginkan dalam sebuah kumpulan data. Dalam menemukan sebuah data yang diinginkan algoritma ini memiliki dua metode yang umum diketahui yaitu binary search dan sequential search. Binary search merupakan metode pencarian yang digunakan pada struktur data terurut, seperti array atau vektor yang diurutkan secara menaik atau menurun. Pencarian dilakukan dengan membagi struktur data menjadi dua bagian dan membandingkan elemen tengah dengan elemen yang dicari. Jika elemen tengah sama dengan elemen yang dicari, pencarian selesai. Jika tidak, pencarian dilanjutkan ke separuh struktur data yang memungkinkan elemen tersebut berada. Sedangkan sequential search atau dapat disebut juga dengan *linear search merupakan metode pencarian sederhana yang dilakukan dengan cara memeriksa setiap elemen dalam struktur data secara berurutan satu per satu. Proses pencarian dimulai dari elemen pertama hingga elemen terakhir. Jika elemen yang dicari ditemukan, pencarian akan berhenti.

Secara umum, binary search lebih efisien dibandingkan sequential search untuk struktur data yang besar dan terurut. Namun, jika struktur data tidak terurut atau ukuran struktur data kecil, sequential search dapat menjadi pilihan yang lebih sederhana dan mudah diimplementasikan.

## Referensi
[1] N. Chafid and S. Alfian, "PENERAPAN ALGORITMA PENCARIAN SEQUENTIAL PADA APLIKASI KAMUS TIGA BAHASA INDONESIA-JAWA-JAWA BANTEN," Jurnal Satya Informatika, vol. 4, no. 1, pp. 54-55, Mei 2019. <br>
[2] P. Wahyuningsih and N. Mustika, “Sistem informasi lokasi sejarah pahlawan Sulawesi Selatan menggunakan Algoritma Sequential Search berbasis Android,” Electro Luceat, vol. 6, no. 2, pp. 266–273, Nov. 2020. <br>
[3] Y. Rahmanto, J. Alfian, D. Damayanti, and R.I. Borman, “Penerapan Algoritma Sequential Search pada Aplikasi Kamus Bahasa Ilmiah Tumbuhan,” Jurnal Buana Informatika, vol. 12, no. 1, pp. 23, Apr. 2021. <br>
[4] Alba Ragil Sutra Deva, “PENERAPAN ALGORITMA BINARY SEARCH PADA APLIKASI E-ORDER (STUDI KASUS PARIS VAN JAVA KOTA BENGKULU),” JUKOMIKA-(JURNAL ILMU KOMPUTER DAN INFORMATIKA), vol. 3, no. 6, pp. 572-573, Des. 2020. <br>