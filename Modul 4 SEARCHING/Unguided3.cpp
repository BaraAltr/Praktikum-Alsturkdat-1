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