
#include <iostream>
#include "mahasiswa.h"

using namespace std;

int main() {
    Mahasiswa mhs[MAX_MAHASISWA];
    int jumlah;

    cout << "Masukkan jumlah mahasiswa (1-10): ";
    cin >> jumlah;

    if (jumlah < 1 || jumlah > MAX_MAHASISWA) {
        cout << "Jumlah mahasiswa tidak valid!" << endl;
        return 1;
    }

    inputMahasiswa(mhs, jumlah);
    tampilMahasiswa(mhs, jumlah);

    return 0;
}
