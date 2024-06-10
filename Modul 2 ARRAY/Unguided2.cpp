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