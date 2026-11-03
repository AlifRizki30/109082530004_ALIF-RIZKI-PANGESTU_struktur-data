#ifndef GAMBAR_H
#define GAMBAR_H

#include <iostream>
#include <string>
using namespace std;

#define Nil NULL

struct Tindakan {
    string jenis;
    string keterangan;
};

typedef struct ElmTindakan *address;

struct ElmTindakan {
    Tindakan info;
    address bawah;
};

struct Tumpukan {
    address atas;
};

struct Gambar {
    Tumpukan aktif;
    Tumpukan dibatalkan;
};

void buatTumpukan(Tumpukan &T);
bool tumpukanKosong(Tumpukan T);
address alokasi(Tindakan t);
void dealokasi(address &P);
void taruhTindakan(Tumpukan &T, Tindakan t);
bool keluarkanTindakan(Tumpukan &T, Tindakan &t);
void kosongkanTumpukan(Tumpukan &T);
void tampilkanTumpukan(Tumpukan T);

void buatGambar(Gambar &G);
void catatTindakan(Gambar &G, string jenis, string keterangan);
void batalkanTindakan(Gambar &G);
void terapkanKembali(Gambar &G);
void tampilkanGambar(Gambar G);
void hapusGambar(Gambar &G);

#endif