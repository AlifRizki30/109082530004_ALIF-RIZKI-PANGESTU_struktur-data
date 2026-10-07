#ifndef BUKU_H
#define BUKU_H
#include <iostream>

using namespace std;
 struct buku
 {
    string judul;
    int halaman;
    string penulis;
 };


 void editIsi(string &judul , int &halaman, string &penulis);
 void TampilkanIsiBuku (Buku buku);
 bool checkPenulis(Buku buku);
 
#endif