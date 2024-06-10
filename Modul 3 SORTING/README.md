# <h1 align="center">Laporan Praktikum Modul Sorting</h1>
<p align="center">Bara Aulia Attar | 2311110053</p>

## Dasar Teori

Pengaksesan data yang kuat, dan cepat membutuhkan pengolahan data yang baik. Salah satu jenis pengolahan data yang menghadirkan permasalahan klasik adalah pengurutan data bilangan bulat (integer). Pengurutan data memainkan peranan penting yang banyak dipertimbangkan dalam penyelesaian masalah terutama yang berkaitan dengan
pengolahan data menjadi lebih baik dan lebih cepat diselesaikan. Sehingga menghasilkan data yang lebih akurat.

Pengurutan data atau sorting merupakan salah satu jenis operasi penting dalam pengolahan data. Dalam kehidupan sehari hari hampir setiap saat ditemui permasalahan-permasalahan yang perlu diselesaikan dengan melakukan operasi pengurutan data. Begitu pentingnya operasi tersebut, sehingga telah banyak dikembangkan metode-metode pengurutan data dan mungkin akan bermunculan metode metode baru. 

Sorting adalah proses mengatur sekumpulan objek menurut urutan atau susunan tertentu. Urutan objek tersebut dapat menaik (ascending), yaitu urutan objek yang disusun mulai dari Nilai terkecil hingga terbesar atau menurun (descending), yaitu urutan objek yang disusun mulai dari Nilai terbesar hingga terkecil[1]. Berikut contoh ascending : A,B,C,D,E dan descending : E,D,C,B,A. Pengurutan data sangat berguna karena data yang terurut akan lebih mudah diperiksa dan diperbaiki jika terdapat kesalahan. Ada berbagai macam algoritma pengurutan data di antaranya adalah Bubble Sort, Selection Sort, Insertion Sort dan lain sebagainya. Namun demikian, pemilihan algoritma pengurutan biasanya didasarkan pada kesederhanaan kecepatan pemrosesan selama pengurutan [2].

Secara umum, algoritma sorting dapat dibagi menjadi beberapa macam, yaitu :
1. Bubble Sort
2. Selection Sort
3. Insertion Sort

Berikut penjelasannya dari masing masing sorting diatas :

### 1. Bubble Sort :

Algoritma Bubble Sort adalah salah satu dari beberapa jenis sorting yang digunakan untuk mengurutkan data [3]. Cara kerja algoritma ini adalah mengulang proses, melakukan perbandingan antara setiap elemen array dan melakukan penggantian posisi jika urutannya sudah benar. Perbandingan setiap elemen dari array ini berlanjut berjalan sampai kondisi yang ditentukan terpenuhi. Atau bisa disebut juga metode pengurutan yang terus-menerus menukar dua buah elemen hingga pengurutan selesai. Cara ini sering dikatakan tidak efisien, namun sangat mudah untuk dipahami.

Berikut langkah-langkah utama dalam algoritma Bubble Sort adalah sebagai berikut:

1. Algoritma membandingkan setiap pasangan elemen berturut-turut dalam array, dimulai dari elemen pertama.
2. Jika pasangan elemen tersebut tidak dalam urutan yang benar (misalnya, elemen pertama lebih besar dari elemen kedua), maka keduanya akan ditukar posisinya.
3. Setelah satu iterasi selesai, elemen terbesar akan "menggelembung" ke posisi paling kanan (bagian belakang) dari array.
4. Proses ini diulang untuk setiap pasangan elemen dalam array, dari awal hingga akhir, sehingga elemen terbesar akan terus "menggelembung" ke posisi yang benar.
5. Algoritma akan terus melakukan iterasi hingga tidak ada lagi pertukaran yang dilakukan dalam satu iterasi, menandakan bahwa array sudah terurut secara ascending.

### 2. Selection Sort :

Suatu  metode  yang  ada  pada algoritma  sorting,  yang  dilakukan  dengan  cara membandingkan  suatu elemen  pertama  dengan  elemen  element  kedua  sampai  pada  element terakhir.  Jika  terdapat elemen  yang  lebih  kecil  dari    elemen  pertama  maka  posisi  tersebut ditukar,  dan  dilakukan  pencatatan  pada  pertukaran  posisi  tersebut. Selection  Sortadalah pemilihan  suatu  nilai  yang  terkecil,  kemudian  dilakukan pertukaran  dengan  elemen paling awal, lalu melakukan perbandingan pada selanjutnya antara elemen sekarang dengan elemen yang terakhir. Perbandingan tersebut dilakukan sampai tidak terjadi pertukaran data [4].

Berikut Langkah-langkah utama dalam algoritma Selection Sort adalah sebagai berikut:

1. Algoritma membagi array menjadi dua bagian: bagian yang sudah diurutkan dan bagian yang belum diurutkan.
2. Pada awalnya, seluruh array dianggap sebagai bagian yang belum diurutkan.
3. Algoritma akan mencari elemen terkecil di antara elemen-elemen yang belum diurutkan.
4. Setelah menemukan elemen terkecil, algoritma akan menukarnya dengan elemen pertama dalam bagian yang belum diurutkan.
5. Elemen yang telah ditukar akan menjadi bagian dari bagian yang sudah diurutkan.
6. Proses ini diulang untuk setiap elemen dalam array, dengan mencari elemen terkecil di antara sisa elemen yang belum diurutkan setiap kali.
7. Setelah semua elemen diproses, array akan menjadi terurut secara ascending.

### 3. Insertion Sort :

Salah  satu  algoritma  sorting  yang  paling sederhana  adalah insertion  sort.  Insertion  Sort disebut-sebut  sebagai metode pertengahan. Metode ini, didasarkan pada sebuah kunci yang diambil pada  elemen ke-2 pada sebuah larik, lalu menyisipkan elemen tersebut jika kondisi percabangan terpenuhi. Metode penyisipan (insertion) bertujuan untuk menjadikan bagian sisi kiri larik terurutkan sampai dengan seluruh larik berhasil diurutkan.

Berikut Langkah-langkah utama dalam algoritma Insertion Sort adalah sebagai berikut:
1. Algoritma membagi array menjadi dua bagian: bagian yang sudah diurutkan dan bagian yang belum diurutkan.
2. Algoritma mulai dengan menganggap elemen pertama sebagai bagian yang sudah diurutkan.
3. Algoritma kemudian mengambil elemen kedua dari bagian yang belum diurutkan dan membandingkannya dengan elemen-elemen sebelumnya dalam bagian yang sudah diurutkan.
4. Elemen yang diambil akan dipindahkan ke posisi yang tepat dalam bagian yang sudah diurutkan, sehingga array tetap terurut setelah setiap iterasi.
5. Langkah-langkah ini diulang untuk setiap elemen dalam array hingga semua elemen diurutkan.

### Kompleksitas Waktu

Kompleksitas waktu dalam analisis algoritma adalah ukuran yang digunakan untuk mengevaluasi seberapa efisien sebuah algoritma dalam menyelesaikan masalah berdasarkan ukuran inputnya. Kompleksitas waktu mengukur berapa banyak waktu yang diperlukan oleh algoritma untuk menyelesaikan masalah tersebut. Untuk dapat mengetahui seberapa efisien suatu algoritma, dipakailah teori kompleksitas algoritma sebagai dasar kajian. Kompleksitas terbagi atas dua, yaitu kompleksitas waktu dan kompleksitas ruang. Kompleksitas Waktu, T(n), adalah jumlah operasi yang dilakukan untuk melaksanakan algoritma sebagai fungsidari ukuran masukan n. Maka, dalam mengukur kompleksitas waktu dihitunglah banyaknya operasi yang dilakukan oleh algoritma. Idealnya, kita memang harus menghitung semua operasi yang ada dalam suatu algoritma.

Berikut beberapa kompleksitas waktu yang umum:
- Algoritma dengan Kompleksitas Waktu Konstan (O(1)): Algoritma dengan kompleksitas waktu konstan menunjukkan bahwa waktu eksekusi algoritma tidak bergantung pada ukuran input. Contohnya adalah operasi aritmatika sederhana atau mengakses elemen tertentu dalam array. Algoritma dengan kompleksitas waktu konstan biasanya dianggap sangat efisien karena waktu eksekusi tetap konstan tidak peduli seberapa besar inputnya.
- Algoritma dengan Kompleksitas Waktu Logaritmik (O(log n)): Algoritma dengan kompleksitas waktu logaritmik menunjukkan bahwa waktu eksekusi algoritma meningkat secara logaritmik seiring dengan pertambahan ukuran input. Contohnya adalah algoritma binary search yang membagi input menjadi setengah setiap iterasi. Algoritma dengan kompleksitas waktu logaritmik dianggap efisien untuk dataset besar karena pertumbuhan waktu eksekusi yang relatif lambat.
- Algoritma dengan Kompleksitas Waktu Linier (O(n)): Algoritma dengan kompleksitas waktu linier menunjukkan bahwa waktu eksekusi algoritma tumbuh sejalan dengan ukuran input. Contohnya adalah iterasi langsung melalui seluruh elemen dalam array. Algoritma dengan kompleksitas waktu linier umumnya dianggap efisien untuk dataset sedang karena pertumbuhan linier waktu eksekusi.
- Algoritma dengan Kompleksitas Waktu Kuadratik (O(n²)) : Algoritma dengan kompleksitas waktu kuadratik menunjukkan bahwa waktu eksekusi algoritma tumbuh seiring dengan kuadrat dari ukuran input. Contohnya adalah Bubble Sort atau Insertion Sort. Algoritma dengan kompleksitas waktu kuadratik cenderung tidak efisien untuk dataset besar karena pertumbuhan waktu eksekusi yang cepat.

## Guided 

### GUIDED-1 

### Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort

```C++
#include <iostream>

using namespace std;

void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j = 0;
    double tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }//end of if
        }//end of for loop
    }//end of while loop
}//end of bubble_sort

void print_array(double a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {
    int length = 6;
    double a[] = {22.1, 15.3, 8.2, 33.21, 99.99, 99.99};

    cout << "Urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);

    bubble_sort(a, length);

    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);
}

Codingan di atas merupakan implementasi algoritma Bubble Sort dalam bahasa C++. Bubble Sort adalah algoritma pengurutan sederhana yang secara berulang membandingkan setiap elemen dalam array dan menukar elemen tersebut jika mereka berada dalam urutan yang salah. Pada fungsi bubble_sort, algoritma melakukan iterasi melalui array sebanyak length - j kali, di mana j adalah jumlah iterasi saat ini. Jika elemen saat ini lebih besar dari elemen berikutnya, maka keduanya akan ditukar posisinya. Proses ini akan terus berlanjut hingga tidak ada lagi pertukaran yang dilakukan, menandakan bahwa array sudah terurut. Fungsi print_array digunakan untuk mencetak isi array ke layar. Pada fungsi main, sebuah array a yang berisi bilangan double diinisialisasi, kemudian dicetak ke layar sebelum diurutkan menggunakan Bubble Sort. Setelah diurutkan, isi array tersebut dicetak kembali ke layar. Hasil eksekusi program menunjukkan bahwa bilangan sebelum diurutkan adalah {22.1, 15.3, 8.2, 33.21, 99.99, 99.99}, dan setelah diurutkan menggunakan Bubble Sort, urutannya menjadi {8.2, 15.3, 22.1, 33.21, 99.99, 99.99}.

### GUIDED-2 

### Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort

```C++
#include <iostream>

using namespace std;

void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;

    for (i = 1; i < length; i++) {
        j = i;

        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }// end of while loop
    }// end of for loop
}

void print_array(char a[], int length) {

    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main() {

    int length = 6;
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};

    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);

    insertion_sort(a, length);

    cout << "nUrutan karakter setelah sorting: " << endl;
    print_array(a, length);
}

Codingan di atas merupakan implementasi algoritma Insertion Sort dalam bahasa C++. Insertion Sort adalah algoritma pengurutan yang mengurutkan elemen satu per satu dengan membandingkan elemen saat ini dengan elemen sebelumnya. Pada fungsi insertion_sort, algoritma melakukan iterasi dari elemen kedua hingga elemen terakhir dalam array. Pada setiap iterasi, elemen saat ini dibandingkan dengan elemen sebelumnya. Jika elemen saat ini lebih besar dari elemen sebelumnya, maka keduanya akan ditukar posisinya. Proses ini akan terus berlanjut hingga elemen saat ini sudah berada di posisi yang benar. Fungsi print_array digunakan untuk mencetak isi array ke layar. Pada fungsi main, sebuah array a yang berisi karakter diinisialisasi, kemudian dicetak ke layar sebelum diurutkan menggunakan Insertion Sort. Setelah diurutkan, isi array tersebut dicetak kembali ke layar. Hasil eksekusi program menunjukkan bahwa karakter sebelum diurutkan adalah {'c', 'f', 'a', 'z', 'd', 'p'}, dan setelah diurutkan menggunakan Insertion Sort, urutannya menjadi {'z', 'p', 'f', 'd', 'c', 'a'}.

## Unguided

### 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerimalembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort!

```C++
#include <iostream>

using namespace std;

void selectionSort(double arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        swap(arr[max_idx], arr[i]);
    }
}

int main() {
    double IPS[] = {3.8, 2.9, 3.3, 4.0, 2.4};
    int n = sizeof(IPS) / sizeof(IPS[0]);

    cout << "IPS sebelum diurutkan: " << endl;
    for (int i = 0; i < n; i++) {
        cout << IPS[i] << " ";
    }
    cout << endl;

    selectionSort(IPS, n);

    cout << "IPS setelah diurutkan secara descending: " << endl;
    for (int i = 0; i < n; i++) {
        cout << IPS[i] << " ";
    }
    cout << endl;

    return 0;
}
```
#### Interpretasi :

Code di atas merupakan implementasi algoritma Selection Sort dalam bahasa pemrograman C++. Algoritma Selection Sort digunakan untuk mengurutkan sebuah array dengan cara mencari elemen terbesar atau terkecil dan menukarnya dengan elemen pertama, kemudian mencari elemen terbesar atau terkecil kedua dan menukarnya dengan elemen kedua, dan seterusnya hingga seluruh elemen terurut. Tujuan dari codingan tersebut adalah untuk mengurutkan nilai-nilai IPS mahasiswa dari yang terbesar hingga terkecil menggunakan algoritma Selection Sort. Dengan demikian, program dapat membantu dalam mengurutkan nilai-nilai IPS secara efisien sehingga memudahkan dalam analisis dan evaluasi kinerja mahasiswa berdasarkan nilai-nilai IPS yang diperoleh. 

Pada fungsi void selectionSort(double arr[], int n): Ini adalah deklarasi fungsi selectionSort yang menerima sebuah array berisi bilangan desimal (double) dan sebuah integer n yang merupakan panjang array. Pada fungsi selectionSort, dilakukan iterasi melalui array untuk mencari elemen terbesar dari array yang belum diurutkan. Jika ditemukan elemen yang lebih besar dari elemen maksimum saat ini, maka indeks maksimum diperbarui. Setelah iterasi selesai, dilakukan pertukaran antara elemen maksimum dengan elemen pada indeks i, sehingga elemen terbesar akan dipindahkan ke posisi yang benar. Di dalam fungsi main, terdapat array IPS yang berisi nilai-nilai IPS mahasiswa yang akan diurutkan. Panjang array dihitung menggunakan sizeof dan kemudian dipanggil fungsi selectionSort untuk mengurutkan array IPS. Setelah pengurutan selesai, nilai-nilai IPS sebelum dan sesudah pengurutan ditampilkan.

#### Output :

![Output1](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/blob/main/Output%20Modul%203/Screenshot%202024-04-30%20162509.png)

Urutan karakter sebelum sorting adalah nilai-nilai IPS mahasiswa sebelum diurutkan. Array IPS memiliki nilai-nilai {3.8, 2.9, 3.3, 4, 2.4}. Setelah algoritma Selection Sort diterapkan pada array IPS, nilai-nilai IPS diurutkan dari yang terbesar hingga terkecil. Urutan Indeks prestasi semester setelah sorting menampilkan nilai-nilai IPS setelah proses pengurutan secara descending. Nilai-nilai IPS yang telah diurutkan adalah {4, 3.8, 3.3, 2.9, 2.4}.

### 2.  Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort!

```c++
#include <iostream>

using namespace std;

void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    string names[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    int n = sizeof(names) / sizeof(names[0]);

    cout << "Nama-nama sebelum sorting: " << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }
    cout << endl << endl;

    bubbleSort(names, n);

    cout << "Nama-nama setelah sorting: " << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }
    cout << endl;

    return 0;
}
```
#### Interpretasi

Codingan di atas merupakan implementasi algoritma Bubble Sort dalam bahasa pemrograman C++. Algoritma Bubble Sort digunakan untuk mengurutkan elemen-elemen array dengan cara membandingkan dua elemen secara berpasangan dan menukar posisi jika urutannya tidak sesuai. Proses ini dilakukan secara berulang hingga seluruh elemen terurut dengan benar. Pada fungsi bubbleSort, terdapat dua loop bersarang yang digunakan untuk membandingkan dan menukar elemen-elemen array. Loop pertama digunakan untuk mengiterasi melalui seluruh elemen array, sedangkan loop kedua digunakan untuk membandingkan dan menukar elemen-elemen secara berpasangan. Jika elemen pada indeks j lebih besar dari elemen pada indeks j+1, maka keduanya ditukar posisinya. Di dalam fungsi main, terdapat array names yang berisi nama-nama yang akan diurutkan menggunakan algoritma Bubble Sort. Panjang array dihitung menggunakan sizeof dan kemudian fungsi bubbleSort dipanggil untuk mengurutkan array names. Setelah proses pengurutan selesai, nama-nama sebelum dan sesudah pengurutan ditampilkan.

Algoritma Bubble Sort memiliki kompleksitas waktu rata-rata sebesar O(n²), di mana n merupakan jumlah elemen dalam array yang diurutkan. Hal ini disebabkan oleh adanya dua loop bersarang yang digunakan untuk membandingkan dan menukar elemen-elemen array. Loop pertama akan berjalan sebanyak n−1 kali, sedangkan loop kedua akan berjalan sebanyak n-i-1 kali di setiap iterasi loop pertama. Sehingga, total jumlah perbandingan yang dilakukan adalah sekitar n x (n-1)/2, yang merupakan kompleksitas waktu rata-rata dari Bubble Sort. Dalam implementasi Bubble Sort pada codingan tersebut, algoritma digunakan untuk mengurutkan nama-nama dalam array names secara alfabet, Meskipun Bubble Sort sederhana dan mudah dipahami, namun kompleksitas waktu yang tinggi membuatnya kurang efisien untuk pengurutan data dalam skala besar.

#### output

![Output 2](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/blob/main/Output%20Modul%203/Screenshot%202024-04-30%20170148.png)

Dari output diatas, kita dapat melihat bahwa nama-nama sebelum pengurutan adalah:Leo Nor sana mina ryu caca najwa surya hanip shin. Setelah proses pengurutan menggunakan algoritma Bubble Sort, nama-nama tersebut menjadi: Hanip Leo Nor Shin caca mina najwa ryu sana surya. Ini menunjukkan bahwa algoritma Bubble Sort berhasil mengurutkan nama-nama tersebut secara alfabet. Nama-nama telah diurutkan mulai dari yang paling awal (Hanip) hingga yang paling terakhir (surya).

### 3.  Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)!

```c++
#include <iostream>

using namespace std;

void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Input (n): ";
    cin >> n;

    string strings[n];

    for (int i = 0; i < n; i++) {
        cout << "Karakter ke-" << i + 1 << ": ";
        cin >> strings[i];
    }

    // Sorting secara menaik (ascending) menggunakan Bubble Sort
    bubbleSort(strings, n);
    
    cout << "Karakter sebelum diurutkan:" << endl;
    for (int i = 0; i < n; i++) {
        cout << strings[i];
        if (i != n - 1) {
            cout << " ";
        }
    }
    cout << endl ;

    cout << endl << "Karakter setelah diurutkan secara menaik (ascending):" << endl;
    for (int i = 0; i < n; i++) {
        cout << strings[i];
        if (i != n - 1) {
            cout << " ";
        }
    }
    cout << endl << endl;

    // Sorting secara menurun (descending) menggunakan Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strings[j] < strings[j + 1]) {
                swap(strings[j], strings[j + 1]);
            }
        }
    }
    
    cout << "Karakter setelah diurutkan secara menurun (descending):" << endl;
    for (int i = 0; i < n; i++) {
        cout << strings[i];
        if (i != n - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
```
#### Interpretasi

Codingan di atas merupakan program sederhana yang mengimplementasikan algoritma Bubble Sort untuk mengurutkan array of strings. Program ini meminta pengguna untuk memasukkan jumlah string (n) yang ingin diurutkan, kemudian meminta pengguna untuk memasukkan setiap string secara berurutan. Setelah semua string dimasukkan, program akan melakukan pengurutan secara menaik (ascending) menggunakan Bubble Sort. Pada bagian output, program akan menampilkan karakter sebelum diurutkan, yaitu string-string yang dimasukkan sebelum proses pengurutan dimulai. Kemudian, program akan menampilkan karakter setelah diurutkan secara menaik (ascending) menggunakan Bubble Sort. Setelah itu, program akan melanjutkan dengan melakukan pengurutan secara menurun (descending) menggunakan Bubble Sort. Setelah proses pengurutan selesai, program akan menampilkan karakter setelah diurutkan secara menurun (descending). Dengan demikian, pengguna dapat melihat perubahan urutan string dari sebelum diurutkan hingga setelah diurutkan secara menaik dan menurun. Program ini memberikan gambaran tentang bagaimana algoritma Bubble Sort bekerja dalam mengurutkan array of strings. Selain itu, program juga menggunakan fungsi swap() untuk menukar posisi elemen dalam array, sesuai dengan aturan pengurutan yang diinginkan.

Algoritma Bubble Sort memiliki kompleksitas waktu rata-rata sebesar O(n²), di mana n merupakan jumlah elemen dalam array yang diurutkan. Dalam konteks codingan di atas, kompleksitas waktu algoritma Bubble Sort akan tergantung pada jumlah string yang dimasukkan oleh pengguna. Pada tahap pengurutan secara menaik (ascending), algoritma Bubble Sort akan melakukan iterasi melalui seluruh array untuk setiap elemen, sehingga memerlukan waktu O(n²) untuk menyelesaikan proses pengurutan. Begitu juga pada tahap pengurutan secara menurun (descending), algoritma Bubble Sort akan kembali melakukan iterasi melalui seluruh array untuk setiap elemen, dengan kompleksitas waktu yang sama. Penggunaan fungsi swap() dalam algoritma Bubble Sort juga mempengaruhi kompleksitas waktu. Meskipun fungsi swap() memiliki kompleksitas waktu konstan O(1), namun penggunaannya dalam loop akan memperhitungkan kontribusi tambahan terhadap kompleksitas waktu total.

#### Output

![Output 3](https://github.com/BaraAltr/Praktikum-Alsturkdat-1/blob/main/Output%20Modul%203/Screenshot%202024-04-30%20170148.png)

Output dari program tersebut menunjukkan proses pengurutan array of strings yang sederhana menggunakan algoritma Bubble Sort. Pertama-tama, program meminta pengguna untuk memasukkan 5 karakter, yaitu 'ana', 'leo', 'budi', 'asep', dan 'maul'. Setelah itu, program menampilkan karakter-karakter tersebut sebelum proses pengurutan dimulai, yaitu "ana leo budi asep maul".

Kemudian, setelah proses pengurutan secara menaik (ascending) menggunakan Bubble Sort, program menampilkan karakter-karakter dalam urutan yang sudah diurutkan dari terkecil hingga terbesar, yaitu "ana asep budi leo maul". Hal ini menunjukkan bahwa algoritma Bubble Sort berhasil mengurutkan array of strings tersebut secara benar dan sesuai dengan aturan pengurutan yang diinginkan.

Selanjutnya, program melanjutkan dengan melakukan pengurutan secara menurun (descending) menggunakan algoritma bubble sort. Hasil outputnya yaitu "maul leo budi asep ana", yang menunjukkan bahwa array of strings berhasil diurutkan secara terbalik dari yang terbesar hingga yang terkecil. Dengan demikian, output tersebut mencerminkan proses pengurutan array of strings menggunakan algoritma Bubble Sort dengan baik dan memberikan pemahaman visual tentang perubahan urutan sebelum dan setelah pengurutan dilakukan.

## Kesimpulan
Kesimpulannya, algortima sorting adalah cara pengurutan yang ada pada bahasa pemrograman. Pengurutan atau sorting dapat dibagi menjadi dua jenis yaitu ascending (dari terkecil ke terbesar) dan descending (dari terbesar ke terkecil). Lalu ada beberapa macam sorting, yaitu bubble sort, selection sort, dan insertion sort.  Bubble sort adalah pengurutan dengan cara membandingkan elemen berdekatan dan menukarnya jika belum terurut, dilakukan beberapa kali sampai semua terurut. Tentu akan memakan waktu yang sangat lama. Selection sort adalah pengurutan dengan elemen pertama, dan ulangi proses sampai semua terurut. Insertion Sort adalah salah satu algoritma pengurutan sederhana yang bekerja dengan cara membandingkan setiap elemen dalam sebuah array dengan elemen sebelumnya, dan memindahkan elemen tersebut ke posisi yang tepat dalam array. Algoritma ini cocok untuk dataset yang hampir terurut dan memiliki performa yang lebih baik daripada Bubble Sort dan Selection Sort dalam kasus tertentu. Kompleksitas waktu dalam analisis algoritma adalah ukuran yang digunakan untuk mengevaluasi seberapa efisien sebuah algoritma dalam menyelesaikan masalah berdasarkan ukuran inputnya. Ada beberapa jenis kompleksitas waktu secara umum, yaitu konstan (O(1)), linear (O(N)), logaritmik (O(log N)), dan kuadrat (O(N²)).

## Referensi
[1] Dwi Putra, M. T., et al., "Belajar Pemrograman Lanjut dengan C++," E. Damayanti (Ed.), CV Widina Media Utama, 2023. <br>
[2] Sari, Nila, et al. "Analisis Algoritma Bubble Sort Secara Ascending Dan Descending Serta Implementasinya 
Dengan Menggunakan Bahasa Pemrograman Java." ADI Bisnis Digital Interdisiplin Jurnal 3.1 (2022): 16-23. <br>
[3] Triansyah, Heru. "Implemetasi Metode Bubble Sort dalam Pengurutan Indeks Prestasi Mahasiswa." JURNAL 
ILMIAH INFORMATIKA 7.01 (2019): 48-53. <br>
[4] Yovita,  C.,  Nasution,  K.,  &  Haramaini,  T. Penerapan Algoritma Naive Bayes dan Selection Sort Pada Penilaian Kuis Di Aplikasi Pembelajaran Pemrograman Java dan PHP, 2023. <br>