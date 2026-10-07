#include "buku.h"

void editISi(string &judul, int &halaman, string &penulis, buku &buku)
{
    buku.judul = judul;
    buku.halaman = halaman;
    buku.penulis = penulis;
}
void tampilkanIsiBuku(buku buku){
cout << "Judul uraman" << buku,judul << endl;
cout << "Halaman : " << buku.Halaman << endl;
cout << "Penulis Buku : " << buku.Penulis << endl;
}

bool checkPenulis(Buku buku){
    return buku.penulis == "";
}
