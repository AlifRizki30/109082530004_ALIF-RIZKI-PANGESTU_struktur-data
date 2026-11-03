#include "Gambar.h"

int main() {
    Gambar G;
    buatGambar(G);

    cout << "=== 1. MENCATAT EMPAT TINDAKAN ===" << endl;
    catatTindakan(G, "Garis", "(0,0) ke (10,10)");
    catatTindakan(G, "Lingkaran", "pusat (5,5), r=3");
    catatTindakan(G, "Persegi", "sisi 4 di (2,2)");
    catatTindakan(G, "Garis", "(10,0) ke (0,10)");
    cout << endl;
    tampilkanGambar(G);

    cout << "\n=== 2. MEMBATALKAN DUA TINDAKAN ===" << endl;
    batalkanTindakan(G);
    batalkanTindakan(G);
    cout << endl;
    tampilkanGambar(G);

    cout << "\n=== 3. MENERAPKAN KEMBALI SATU TINDAKAN ===" << endl;
    terapkanKembali(G);
    cout << endl;
    tampilkanGambar(G);

    cout << "\n=== 4. KETIKA TIDAK ADA TINDAKAN TERSEDIA ===" << endl;
    terapkanKembali(G);
    terapkanKembali(G);
    batalkanTindakan(G);
    batalkanTindakan(G);
    batalkanTindakan(G);
    batalkanTindakan(G);
    batalkanTindakan(G);
    cout << endl;
    tampilkanGambar(G);

    hapusGambar(G);
    return 0;
}