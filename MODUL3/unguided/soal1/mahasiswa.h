#ifndef MAHASISWA_H
#define MAHASISWA_H

#include <string>
using namespace std;

const int MAX_MAHASISWA = 10;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

void inputMahasiswa(Mahasiswa mhs[], int jumlah);
float hitungNilaiAkhir(float uts, float uas, float tugas);
void tampilMahasiswa(Mahasiswa mhs[], int jumlah);

#endif
