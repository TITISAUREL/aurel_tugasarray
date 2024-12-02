#include <iostream>
using namespace std;

int main() {
    int array[5];
    cout << "Masukkan 5 angka:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan angka ke-" << i + 1 << " : " ;
        cin >> array[i];
    }
    cout << " Elemen array yang dimasukkan: ";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
} 