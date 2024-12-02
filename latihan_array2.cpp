#include <iostream>
using namespace std;

int main() {
    int array[10], jumlah = 0;
    cout << "Masukkan 10 angka:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Masukkan angka ke-" << i + 1 << " : " ;
        cin >> array[i];
        jumlah += array[i];
    }
    cout << " Jumlah semua elemen array adalah: " << jumlah << endl;
    return 0;
}
