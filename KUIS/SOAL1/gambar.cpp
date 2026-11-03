#include "Gambar.h"

void buatTumpukan(Tumpukan &T) {
    T.atas = Nil;
}

bool tumpukanKosong(Tumpukan T) {
    return T.atas == Nil;
}

address alokasi(Tindakan t) {
    address P = new ElmTindakan;
    P->info = t;
    P->bawah = Nil;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

void taruhTindakan(Tumpukan &T, Tindakan t) {
    address P = alokasi(t);
    P->bawah = T.atas;
    T.atas = P;
}

bool keluarkanTindakan(Tumpukan &T, Tindakan &t) {
    if (tumpukanKosong(T)) {
        return false;
    }
    address P = T.atas;
    t = P->info;
    T.atas = P->bawah;
    P->bawah = Nil;
    dealokasi(P);
    return true;
}

void kosongkanTumpukan(Tumpukan &T) {
    Tindakan t;
    while (keluarkanTindakan(T, t)) {
    }
}

static void tampilkanDariDasar(address P) {
    if (P == Nil) {
        return;
    }
    tampilkanDariDasar(P->bawah);
    cout << "   - " << P->info.jenis << " (" << P->info.keterangan << ")" << endl;
}

void tampilkanTumpukan(Tumpukan T) {
    if (tumpukanKosong(T)) {
        cout << "   (kosong)" << endl;
        return;
    }
    tampilkanDariDasar(T.atas);
}

void buatGambar(Gambar &G) {
    buatTumpukan(G.aktif);
    buatTumpukan(G.dibatalkan);
}

void catatTindakan(Gambar &G, string jenis, string keterangan) {
    Tindakan t;
    t.jenis = jenis;
    t.keterangan = keterangan;
    taruhTindakan(G.aktif, t);
    kosongkanTumpukan(G.dibatalkan);
    cout << "[GAMBAR] " << jenis << " (" << keterangan << ")" << endl;
}

void batalkanTindakan(Gambar &G) {
    Tindakan t;
    if (!keluarkanTindakan(G.aktif, t)) {
        cout << "[BATAL]  Tidak ada tindakan yang bisa dibatalkan." << endl;
        return;
    }
    taruhTindakan(G.dibatalkan, t);
    cout << "[BATAL]  Membatalkan " << t.jenis << " (" << t.keterangan << ")" << endl;
}

void terapkanKembali(Gambar &G) {
    Tindakan t;
    if (!keluarkanTindakan(G.dibatalkan, t)) {
        cout << "[ULANG]  Tidak ada tindakan yang bisa diterapkan kembali." << endl;
        return;
    }
    taruhTindakan(G.aktif, t);
    cout << "[ULANG]  Menerapkan kembali " << t.jenis << " (" << t.keterangan << ")" << endl;
}

void tampilkanGambar(Gambar G) {
    cout << "Tindakan aktif:" << endl;
    tampilkanTumpukan(G.aktif);
    cout << "Tindakan dibatalkan:" << endl;
    tampilkanTumpukan(G.dibatalkan);
}

void hapusGambar(Gambar &G) {
    kosongkanTumpukan(G.aktif);
    kosongkanTumpukan(G.dibatalkan);
}