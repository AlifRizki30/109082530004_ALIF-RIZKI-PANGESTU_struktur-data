#include <iostream>
#include "array2d.h"

using namespace std;

void tampilArray(int arr[BARIS][KOLOM]) {
    for (int i = 0; i < BARIS; i++) {
        for (int j = 0; j < KOLOM; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

void tukarElemen(
    int A[BARIS][KOLOM],
    int B[BARIS][KOLOM],
    int baris,
    int kolom
) {
    int sementara = A[baris][kolom];
    A[baris][kolom] = B[baris][kolom];
    B[baris][kolom] = sementara;
}

void tukarPointer(int *p1, int *p2) {
    int sementara = *p1;
    *p1 = *p2;
    *p2 = sementara;
}
