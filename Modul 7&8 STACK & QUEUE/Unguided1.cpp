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