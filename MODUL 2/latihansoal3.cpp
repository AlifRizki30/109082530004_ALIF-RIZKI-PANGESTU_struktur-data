#include <iostream>
using namespace std;

#define MAX 10

int nilaiMaksimum(int arr[], int n) {
    int maks = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maks) {
            maks = arr[i];
        }
    }

    return maks;
}

int nilaiMinimum(int arr[], int n) {
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

void hitungRataRata(int arr[], int n, float &rata) {
    int jumlah = 0;

    for (int i = 0; i < n; i++) {
        jumlah += arr[i];
    }

    rata = (float)jumlah / n;
}

void tampilArray(int arr[], int n) {
    cout << "Isi Array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    int arr[MAX] = {48, 2, 7, 21, 5, 20, 77, 9, 10, 1};
    int pilihan;
    float rata;

    do {
        cout << "\n--- Menu Program Array ---\n";
        cout << "1. Tampilkan isi array\n";
        cout << "2. Cari nilai maksimum\n";
        cout << "3. Cari nilai minimum\n";
        cout << "4. Hitung nilai rata-rata\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tampilArray(arr, MAX);
                break;

            case 2:
                cout << "Nilai maksimum = "
                     << nilaiMaksimum(arr, MAX) << endl;
                break;

            case 3:
                cout << "Nilai minimum = "
                     << nilaiMinimum(arr, MAX) << endl;
                break;

            case 4:
                hitungRataRata(arr, MAX, rata);
                cout << "Nilai rata-rata = " << rata << endl;
                break;

            case 5:
                cout << "Program selesai.\n";
                break;

            default:
                cout << "Pilihan tidak tersedia.\n";
        }

    } while (pilihan != 5);

    return 0;
}