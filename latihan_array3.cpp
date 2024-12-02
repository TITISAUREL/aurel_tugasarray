#include <iostream>
using namespace std;

int main() {
    int array[7], maksimum;
    cout << " Masukkan 7 angka: " << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Masukkan angka ke-" << i + 1 << " : ";
        cin >> array[i];
    }
    maksimum = array[0];
    for (int i = 1; i < 7; i++) {
        if (array[i] > maksimum) {
            maksimum = array[i];
        }
    }
    cout << "Nilai maksimum dalam array adalah:" << maksimum << endl;
    return 0;
}
