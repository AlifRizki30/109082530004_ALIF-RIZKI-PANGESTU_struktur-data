#include <iostream>
#include "array2d.h"

using namespace std;

int main() {
    int A[BARIS][KOLOM] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[BARIS][KOLOM] = {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18}
    };

    cout << "Array A sebelum ditukar:\n";
    tampilArray(A);

    cout << "\nArray B sebelum ditukar:\n";
    tampilArray(B);

    int baris, kolom;

    cout << "\nMasukkan baris (1-3): ";
    cin >> baris;

    cout << "Masukkan kolom (1-3): ";
    cin >> kolom;

    if (baris < 1 || baris > 3 ||
        kolom < 1 || kolom > 3) {
        cout << "Posisi tidak valid!" << endl;
        return 1;
    }

    tukarElemen(A, B, baris - 1, kolom - 1);

    cout << "\nArray A setelah pertukaran:\n";
    tampilArray(A);

    cout << "\nArray B setelah pertukaran:\n";
    tampilArray(B);

    int x = 100;
    int y = 200;

    int *p1 = &x;
    int *p2 = &y;

    cout << "\nSebelum pertukaran pointer:\n";
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    tukarPointer(p1, p2);

    cout << "\nSetelah pertukaran pointer:\n";
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
