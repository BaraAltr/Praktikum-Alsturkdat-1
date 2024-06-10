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