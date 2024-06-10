#include <iostream>
#include <map> // library untuk map
using namespace std;

// main program
int main() {
    /* inisialisasi map dengan nama "spook"
     -- int untuk key map dan string untuk value map -- */
    map <int, string> spook;

    /* setiap key diisi dengan value berupa string data
     -- isian key bisa dimulai dari key indeks 0 -- */
    spook[0] = "Burnout";
    spook[1] = "Having a Blast";
    spook[2] = "Chump";
    spook[3] = "Longview";
    spook[4] = "Welcome to Paradise";
    spook[5] = "Pulling Teeth";
    spook[6] = "Basket Case";
    spook[7] = "She";
    spook[8] = "Sassafras Roots";
    spook[9] = "When I Come Around";
    spook[10] = "Coming Clean";
    spook[11] = "Emenius Sleepus";
    spook[12] = "In The End";
    spook[13] = "F.O.D.";
    spook[14] = "All by Myself";

    // cetak map dari masing-masing key map
    cout << "===== DOOKIE TRACK LIST =====" << endl;
    cout << "Track-01: " << spook[0] << endl;
    cout << "Track-02: " << spook[1] << endl;
    cout << "Track-03: " << spook[2] << endl;
    cout << "Track-04: " << spook[3] << endl;
    cout << "Track-05: " << spook[4] << endl;
    cout << "Track-06: " << spook[5] << endl;
    cout << "Track-07: " << spook[6] << endl;
    cout << "Track-08: " << spook[7] << endl;
    cout << "Track-09: " << spook[8] << endl;
    cout << "Track-10: " << spook[9] << endl;
    cout << "Track-11: " << spook[10] << endl;
    cout << "Track-12: " << spook[11] << endl;
    cout << "Track-13: " << spook[12] << endl;
    cout << "Track-14: " << spook[13] << endl;
    cout << "Track-15: " << spook[14] << endl;
    cout << "=============================" << endl;
    // output akan berupa value dari masing-masing key tsb.

    return 0;
}