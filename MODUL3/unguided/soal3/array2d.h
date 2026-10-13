#ifndef ARRAY2D_H
#define ARRAY2D_H

const int BARIS = 3;
const int KOLOM = 3;

void tampilArray(int arr[BARIS][KOLOM]);
void tukarElemen(
    int A[BARIS][KOLOM],
    int B[BARIS][KOLOM],
    int baris,
    int kolom
);
void tukarPointer(int *p1, int *p2);

#endif
