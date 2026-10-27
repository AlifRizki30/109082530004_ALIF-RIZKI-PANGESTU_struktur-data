# <h1 align="center">Laporan Praktikum Modul 5 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

<p align="center">ALIF RIZKI PANGESTU - 109082530004</p>

## Dasar Teori

### A. Konsep Singly Linked List <br>

#### 1. Pengertian
Linked list adalah struktur data berupa rangkaian elemen (node) yang saling berkait. Pada singly linked list, setiap elemen hanya memiliki satu pointer, yaitu pointer next yang menunjuk ke elemen berikutnya. Elemen terakhir menunjuk ke Nil, dan list dinyatakan kosong jika pointer first bernilai Nil.

#### 2. Representasi dengan Pointer
Alamat elemen (address) direpresentasikan dengan pointer. Setiap elemen yang beralamat P dapat diakses dengan operator panah, yaitu P panah info untuk mengambil isi data dan P panah next untuk mengakses elemen berikutnya.

#### 3. Struktur Elemen
Setiap elemen terdiri dari dua bagian, yaitu info sebagai tempat menyimpan data dan next sebagai penghubung ke elemen berikutnya. Sebuah list hanya perlu menyimpan satu pointer, yaitu first yang menunjuk ke elemen pertama.

### B. ADT Singly Linked List <br>

ADT (Abstract Data Type) singly linked list terdiri dari tipe data dan operasi-operasi dasarnya. Dalam bahasa C++, ADT dipisah menjadi file header (*.h) yang berisi deklarasi tipe data dan prototipe fungsi, serta file implementasi (*.cpp) yang berisi isi fungsi. Setiap prototipe dilengkapi Initial State (I.S.) dan Final State (F.S.) sebagai spesifikasi kondisi sebelum dan sesudah operasi dijalankan.

Operasi dasar pada ADT dikelompokkan sebagai berikut:
- Pembuatan list: mengecek apakah list kosong dan membentuk list kosong.
- Manajemen memori: membuat elemen baru (alokasi) dan mengembalikan memori elemen ke sistem (dealokasi).
- Pencarian: mencari elemen berdasarkan isi info, mencari elemen berdasarkan alamat, dan mencari elemen sebelum alamat tertentu.
- Penambahan elemen: menambah elemen di awal list, setelah elemen tertentu, dan di akhir list.
- Penghapusan elemen: menghapus elemen di awal list, di akhir list, setelah elemen tertentu, dan berdasarkan isi info.
- Proses semua elemen: menampilkan seluruh info dan menghitung jumlah elemen.
- Proses terhadap list: menghapus seluruh elemen, membalik urutan elemen, dan menyalin list.

### C. Searching <br>

#### 1. Pengertian
Searching adalah operasi dasar pada list untuk mencari node tertentu. Prosesnya dilakukan dengan mengunjungi setiap node mulai dari elemen pertama dan berhenti setelah node yang dicari ditemukan. Hasil pencarian berupa alamat elemen yang dicari, atau Nil jika elemen tidak ditemukan.

#### 2. Kegunaan
Operasi searching mempermudah operasi lain seperti insert after, delete after, dan update. Hal ini karena operasi tersebut membutuhkan alamat node yang dituju, sehingga node harus ditemukan terlebih dahulu sebelum diproses.

#### 3. Cara Kerja
Pencarian dimulai dari elemen yang ditunjuk oleh first. Isi info setiap elemen dibandingkan dengan nilai yang dicari. Jika sama, pencarian berhenti dan alamat elemen dikembalikan. Jika tidak sama, penelusuran berlanjut ke elemen berikutnya sampai bertemu Nil. Fungsi pencarian elemen sebelum P bekerja serupa, tetapi mengembalikan alamat elemen yang berada tepat sebelum P, dan mengembalikan Nil jika P berada di awal list.

### D. Operasi Penambahan dan Penghapusan Elemen <br>

#### 1. Insert
- Insert first menyisipkan elemen di awal list. Elemen baru dihubungkan ke elemen yang sebelumnya pertama, kemudian first dipindahkan ke elemen baru.
- Insert after menyisipkan elemen setelah elemen tertentu (Prec). Elemen baru dihubungkan ke elemen setelah Prec, kemudian Prec dihubungkan ke elemen baru.
- Insert last menyisipkan elemen di akhir list. List ditelusuri sampai elemen terakhir, lalu elemen terakhir dihubungkan ke elemen baru. Jika list kosong, prosesnya sama dengan insert first.

#### 2. Delete
- Delete first menghapus elemen pertama. First dipindahkan ke elemen berikutnya, lalu elemen yang dihapus dilepas dari list.
- Delete last menghapus elemen terakhir. List ditelusuri sampai elemen sebelum terakhir, kemudian elemen terakhir dilepas dan elemen sebelumnya menjadi elemen terakhir yang baru.
- Delete after menghapus elemen yang berada setelah Prec. Prec dihubungkan langsung ke elemen setelah elemen yang dihapus, lalu elemen tersebut dilepas dari list.
- Delete berdasarkan info diawali dengan mencari elemen yang memiliki info tersebut, kemudian elemen itu dihapus dan dikembalikan memorinya ke sistem.

Elemen yang sudah dilepas dari list perlu didealokasi agar memorinya dikembalikan ke sistem.

#### 3. Proses Semua Elemen
Menampilkan isi list dilakukan dengan menelusuri elemen dari first sampai Nil sambil menampilkan info setiap elemen. Penelusuran yang sama dapat digunakan untuk menghitung jumlah elemen. Menghapus seluruh elemen dilakukan dengan menghapus dan mendealokasi setiap elemen satu per satu. Membalik list mengubah urutan elemen dari belakang ke depan, sedangkan menyalin list menghasilkan list lain dengan isi yang sama.

### E. Penerapan pada Latihan Modul <br>

Latihan pada modul ini membuat ADT singly linked list yang berisi pembuatan list, alokasi, dealokasi, menampilkan isi list, dan insert first. Data 2, 0, 8, 12, dan 9 dimasukkan secara berurutan dengan insert first. Karena setiap elemen baru selalu ditempatkan di awal list, urutan data yang tampil adalah kebalikan dari urutan pemasukan, yaitu 9, 12, 8, 0, 2. Selanjutnya dibuat fungsi pencarian untuk menemukan elemen dengan info 8, serta penelusuran list untuk menjumlahkan seluruh info elemen, yaitu 9 + 12 + 8 + 0 + 2 = 31.

## Guided

### 1. list.h

```C++
#ifndef List_h
#define List_h 
#define Nil NULL

#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama, nim;
    int umur;
};

typedef mahasiswa dataMahasiswa;
typedef struct node *address;

struct node
{
    dataMahasiswa isidata;
    address next;
};

struct linkedList
{
    address first;
};

bool isEmpty(linkedList List);
void createList(linkedList &List);
address alokasi(string nama, string nim, int umur);
void dealokasi(address &node);
void printList(linkedList List);
void insertFirst(linkedList &List, address nodeBaru);
void insertLast(linkedList &List, address nodeBaru);
void insertAfter(linkedList &List, address nodeBaru, address prev);
void delFirst(linkedList &List);
void delLast(linkedList &List);
void delAfter(linkedList &List, address nodeHapus, address nodePrev);
int nbList(linkedList List);
void deleteList(linkedList &List);

address FindNodebyData(linkedList List, string data);
void FindNodebyAddress(linkedList List, address node);
void FindNodeByRange(linkedList List, int nilaiAwal, int nilaiAkhir);

void updateFirst(linkedList &list);
void updateLast(linkedList &list);
void updateAfter(linkedList &list, address &prev);
void updateByNim(linkedList &list, string nim);

#endif
```


### 2. list.cpp

```C++
#include "list.h"
#include <iostream>
using namespace std;

// I.S = Initial State / kondisi awal
// F.S = Final State / kondisi akhir

// fungsi untuk cek apakah list kosong atau tidak
bool isEmpty(linkedList List)
{
    if (List.first == Nil)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// pembuatan linked list kosong
void createList(linkedList &List)
{
    /* I.S. sembarang
       F.S. terbentuk list kosong */
    List.first = Nil;
}

// pembuatan node baru dengan menerapkan manajemen memori
address alokasi(string nama, string nim, int umur)
{
    /* I.S. sembarang
       F.S. mengembalikan alamat node baru dengan isidata = sesuai parameter dan next = Nil */
    address nodeBaru = new node;
    nodeBaru->isidata.nama = nama;
    nodeBaru->isidata.nim = nim;
    nodeBaru->isidata.umur = umur;
    nodeBaru->next = Nil;
    return nodeBaru;
}

// penghapusan node dengan menerapkan manajemen memori
void dealokasi(address &node)
{
    /* I.S. P terdefinisi
       F.S. memori yang digunakan node dikembalikan ke sistem */
    node->next = Nil;
    delete node;
}

// prosedur-prosedur untuk insert / menambahkan node baru kedalam list
void insertFirst(linkedList &List, address nodeBaru)
{
    /* I.S. sembarang, P sudah dialokasikan
       F.S. menempatkan elemen list (node) pada awal list */
    nodeBaru->next = List.first;
    List.first = nodeBaru;
}

void insertAfter(linkedList &List, address nodeBaru, address Prev)
{
    /* I.S. sembarang, nodeBaru dan Prev alamat salah satu elemen list (node)
       F.S. menempatkan elemen (node) sesudah elemen node Prev */
    if (Prev != Nil)
    {
        nodeBaru->next = Prev->next;
        Prev->next = nodeBaru;
    }
    else
    {
        cout << "Node sebelumnya tidak valid!" << endl;
    }
}

void insertLast(linkedList &List, address nodeBaru)
{
    /* I.S. sembarang, nodeBaru sudah dialokasikan
       F.S. menempatkan elemen nodeBaru pada akhir list */
    if (isEmpty(List))
    {
        List.first = nodeBaru;
    }
    else
    {
        address nodeBantu = List.first;
        while (nodeBantu->next != Nil)
        {
            nodeBantu = nodeBantu->next;
        }
        nodeBantu->next = nodeBaru;
    }
}

// prosedur-prosedur untuk delete / menghapus node yang ada didalam list
void delFirst(linkedList &List)
{
    /* I.S. list tidak kosong
    F.S. node pertama di list terhapus*/
    address nodeHapus;
    if (isEmpty(List) == false)
    {
        nodeHapus = List.first;
        List.first = List.first->next;
        nodeHapus->next = Nil;
        dealokasi(nodeHapus);
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}

void delLast(linkedList &List)
{
    /* I.S. list tidak kosong
    F.S. node terakhir di list terhapus */
    address nodeHapus, nodePrev;
    if (isEmpty(List) == false)
    {
        nodeHapus = List.first;
        if (nodeHapus->next == Nil)
        {
            List.first->next = Nil;
            dealokasi(nodeHapus);
        }
        else
        {
            while (nodeHapus->next != Nil)
            {
                nodePrev = nodeHapus;
                nodeHapus = nodeHapus->next;
            }
            nodePrev->next = Nil;
            dealokasi(nodeHapus);
        }
    }
    else
    {
        cout << "list kosong" << endl;
    }
}

void delAfter(linkedList &List, address nodeHapus, address nodePrev)
{
    /* I.S. list tidak kosng, Prev alamat salah satu elemen list
    F.S. nodeBantu adalah alamat dari Prev→next, menghapus Prev→next dari list */
    if (isEmpty(List) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    { // jika list tidak kosong
        if (nodePrev != Nil && nodePrev->next != Nil)
        {
            nodeHapus = nodePrev->next;
            nodePrev->next = nodeHapus->next;
            nodeHapus->next = Nil;
            dealokasi(nodeHapus);
        }
        else
        {
            cout << "Node sebelumnya (prev) tidak valid!" << endl;
        }
    }
}

// prosedur untuk menampilkan isi list
void printList(linkedList List)
{
    /* I.S. list mungkin kosong
       F.S. jika list tidak kosong menampilkan semua info yang ada pada list */
    if (isEmpty(List))
    {
        cout << "List kosong." << endl;
    }
    else
    {
        address nodeBantu = List.first;
        while (nodeBantu != Nil)
        {
            cout << "Nama : " << nodeBantu->isidata.nama << ", NIM : " << nodeBantu->isidata.nim << ", Usia : " << nodeBantu->isidata.umur << endl;
            nodeBantu = nodeBantu->next;
        }
    }
}

// function untuk menampilkan jumlah node didalam list
int nbList(linkedList List)
{
    /* I.S. list sudah ada
       F.S. menampilkan jumlah node didalam list*/
    int count = 0;
    address nodeBantu = List.first;
    while (nodeBantu != Nil)
    {
        count++;
        nodeBantu = nodeBantu->next;
    }
    return count;
}

// prosedur untuk menghapus list (menghapus semua node didalam list)
void deleteList(linkedList &List)
{
    /* I.S. list sudah ada
       F.S. menghapus semua node didalam list*/
    address nodeBantu, nodeHapus;
    nodeBantu = List.first;
    while (nodeBantu != Nil)
    {
        nodeHapus = nodeBantu;
        nodeBantu = nodeBantu->next;
        dealokasi(nodeHapus);
    }
    List.first = Nil;
    cout << "List sudah terhapus!" << endl;
}

// prosedur-prosedur untuk melakukan update data node
void updateFirst(linkedList &list)
{
    dataMahasiswa newData;
    cout << "Masukan nama baru : ";
    cin >> newData.nama;
    cout << "Masukan nim baru : ";
    cin >> newData.nim;
    cout << "Masukan umur baru : ";
    cin >> newData.umur;
    list.first->isidata = newData;
}

void updateLast(linkedList &list)
{
    if (isEmpty(list))
    {
        cout << "List kosong!" << endl;
    }
    else
    {
    dataMahasiswa newData;
    cout << "Masukan nama baru : ";
    cin >> newData.nama ;
    cout << "Masukan nim baru : ";
    cin >> newData.nim;
    cout << "Masukan umur baru : ";
    cin >> newData.umur;

    address nodeBantu = list.first;
    while (nodeBantu->next != Nil)
    {
        nodeBantu = nodeBantu->next;
    }

    nodeBantu->isidata = newData;
    }
}

void updateAfter(linkedList &list, address &prev)
{
    if (isEmpty(list))
    {
        cout << "List kosong!" << endl;
    }
    else
    {
    dataMahasiswa newData;
    cout << "Masukan nama baru : ";
    cin >> newData.nama ;
    cout << "Masukan nim baru : ";
    cin >> newData.nim;
    cout << "Masukan umur baru : ";
    cin >> newData.umur;

    prev->next->isidata = newData;
    }
}

void updateByNim(linkedList &list, string nim)
{
    if (!isEmpty(list))
    {
        address nodeBantu = FindNodebyData(list, nim);

        if (nodeBantu != Nil)
        {
            dataMahasiswa newData;
            cout << "Masukan nama baru : ";
            cin >> newData.nama;
            cout << "Masukan nim baru : ";
            cin >> newData.nim;
            cout << "Masukan umur baru : ";
            cin >> newData.umur;

            nodeBantu->isidata = newData;
        }
    }
    else
    {
        cout << "List kosong!" << endl;
    }
}

// prosedur-prosedur untuk searching data didalam list
address FindNodebyData(linkedList List, string data)
{
    /* I.S. list mungkin kosong
       F.S. menampilkan node yang sesuai dengan nama atau nim yang dicari */
    if (isEmpty(List) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        address nodeBantu = List.first;
        int posisi = 0;
        bool found = false;
        while (nodeBantu != Nil)
        {
            posisi++;
            if (nodeBantu->isidata.nama == data || nodeBantu->isidata.nim == data)
            {
                cout << "Data " << data << " ditemukan pada posisi ke-" << posisi << "!" << endl;
                cout << "Nama : " << nodeBantu->isidata.nama << ", NIM : " << nodeBantu->isidata.nim << ", Usia : " << nodeBantu->isidata.umur << endl;
                found = true;
                break;
            }
            nodeBantu = nodeBantu->next;
        }
        if (found == false)
        {
            cout << "Node dengan data " << data << " tidak ditemukan!" << endl;
        }
    }
    cout << endl;
    return Nil;
}

void FindNodebyAddress(linkedList List, address node)
{
    /* I.S. list mungkin kosong
       F.S. menampilkan node yang sesuai dengan alamat yang dicari */
    if (isEmpty(List) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        address nodeBantu = List.first;
        int posisi = 0;
        bool found = false;
        while (nodeBantu != Nil)
        {
            posisi++;
            if (nodeBantu == node)
            {
                cout << "Node ditemukan pada posisi ke-" << posisi << "!" << endl;
                cout << "Alamat Node : " << nodeBantu << endl;
                cout << "Nama : " << nodeBantu->isidata.nama << ", NIM : " << nodeBantu->isidata.nim << ", Usia : " << nodeBantu->isidata.umur << endl;
                found = true;
                break;
            }
            nodeBantu = nodeBantu->next;
        }
        if (found == false)
        {
            cout << "Node dengan alamat " << node << " tidak ditemukan dalam list!" << endl;
        }
    }
    cout << endl;
}

void FindNodeByRange(linkedList List, int nilaiAwal, int nilaiAkhir)
{
    /* I.S. list mungkin kosong
       F.S. menampilkan semua node yang memiliki umur di dalam rentang nilaiAwal sampai nilaiAkhir */
    if (isEmpty(List) == true)
    {
        cout << "List kosong!" << endl;
    }
    else
    {
        address nodeBantu = List.first;
        int posisi = 0;
        bool found = false;
        cout << "--- Data diatas usia " << nilaiAwal << " dan dibawah " << nilaiAkhir << " ---" << endl;
        while (nodeBantu != Nil)
        {
            posisi++;
            int umur = nodeBantu->isidata.umur;
            if (umur > nilaiAwal && umur < nilaiAkhir)
            {
                cout << "Data ditemukan pada posisi ke-" << posisi << " :" << endl;
                cout << "Nama : " << nodeBantu->isidata.nama << ", NIM : " << nodeBantu->isidata.nim << ", Usia : " << nodeBantu->isidata.umur << endl;
                found = true;
            }
            nodeBantu = nodeBantu->next;
        }
        if (found == false)
        {
            cout << "Tidak ada data node dalam range tersebut!" << endl;
        }
    }
    cout << endl;
}
```


### 3. main.cpp

```C++
#include <iostream>
#include "list.h"
using namespace std;

int main(){
		linkedList List;
    address nodeA, nodeB, nodeC, nodeD, nodeE = Nil;
    createList(List);

    nodeA = alokasi("Dhimas", "2311102151", 20);
    nodeB = alokasi("Arvin", "2211110014", 21);
    nodeC = alokasi("Rizal", "2311110029", 20);
    nodeD = alokasi("Satrio", "2211102173", 21);
    nodeE = alokasi("Joshua", "2311102133", 21);

    insertFirst(List, nodeA);
    insertLast(List, nodeB);
    insertAfter(List, nodeC, nodeA);
    insertAfter(List, nodeD, nodeC);
    insertLast(List, nodeE);

    cout << "--- ISI LIST SETELAH DILAKUKAN INSERT ---" << endl;
    printList(List);
    cout << "jumlah node : " << nbList(List) << endl;
    cout << endl;

    // updateFirst(List);
    // cout << "--- ISI LIST SETELAH DILAKUKAN UPDATE FIRST ---" << endl;
    // printList(List);

    // updateLast(List);
    // cout << "--- ISI LIST SETELAH DILAKUKAN UPDATE LAST ---" << endl;
    // printList(List);

    updateAfter(List, nodeC);
    cout << "--- ISI LIST SETELAH DILAKUKAN UPDATE AFTER ---" << endl;
    printList(List);

    updateByNim(List, "2211110014");
    cout << "--- ISI LIST SETELAH DILAKUKAN UPDATE BY NIM ---" << endl;
    printList(List);
    
    return 0;
}
```
### Output guided 1 :

##### Output 1

![Screenshot Output Unguided 1_1]
Kode ini adalah singly linked list untuk data mahasiswa (nama, NIM, umur) yang terdiri dari list.h (deklarasi struct dan prototipe), list.cpp (isi fungsi insert, delete, update, print, hitung node, dan search), dan main.cpp yang membuat lima node, menyisipkannya ke list, menampilkan isinya, lalu memperbarui data node tertentu dengan updateAfter dan updateByNim.

## Unguided
## soal1

### 1. singlylist.h
```C++

#ifndef SINGLYLIST_H
#define SINGLYLIST_H

#include <iostream>
using namespace std;

#define Nil NULL

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};


struct List {
    address First;
};

void CreateList(List &L);
address alokasi(infotype x);

void dealokasi(address &P);
void insertFirst(List &L, address P);
void printInfo(List L);

address findElm(List L, infotype x);
int sumInfo(List L);

#endif
```
### 2. singlylist.cpp

```C++
#include "Singlylist.h"

void CreateList(List &L) {
    L.First = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi(address &P) {
    delete P;
    P = Nil;
}

void insertFirst(List &L, address P) {
    P->next = L.First;
    L.First = P;
}

void printInfo(List L) {
    address P = L.First;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

address findElm(List L, infotype x) {
    address P = L.First;
    while (P != Nil) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }
    return Nil;
}

int sumInfo(List L) {
    int total = 0;
    address P = L.First;
    while (P != Nil) {
        total += P->info;
        P = P->next;
    }
    return total;
}
```

### 3. main.cpp
```C++

#include "Singlylist.h"

int main() {
    List L;
    address P1, P2, P3, P4, P5 = Nil;
    CreateList(L);

    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    printInfo(L);
    address hasil = findElm(L, 8);
    if (hasil != Nil) {
        cout << "8 ditemukan dalam list" << endl;
    } else {
        cout << "8 tidak ditemukan dalam list" << endl;
    }
    cout << "Total info dari kelima elemen adalah " << sumInfo(L) << endl;

    return 0;
}

```
### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/AlifRizki30/109082530004_ALIF-RIZKI-PANGESTU_struktur-data/blob/main/MODUL5/OUTPUT/SOAL.png)
Kode ini adalah singly linked list untuk menyimpan bilangan bulat yang terdiri dari singlylist.h (deklarasi struct ElmList dan List beserta prototipe fungsi), singlylist.cpp (isi fungsi untuk membuat list, alokasi dan dealokasi node, insertFirst, printInfo, findElm untuk mencari elemen, dan sumInfo untuk menjumlahkan semua info), dan main.cpp yang memasukkan angka 2, 0, 8, 12, 9 dengan insertFirst sehingga list tercetak 9 12 8 0 2, lalu mencari angka 8 dan menampilkan total seluruh info, yaitu 31.


## Kesimpulan

## Kesimpulan

Dari praktikum ini dapat disimpulkan bahwa singly linked list adalah struktur data dinamis yang elemen-elemennya dihubungkan dengan pointer, sehingga ukurannya dapat bertambah atau berkurang sesuai kebutuhan tanpa batas ukuran tetap seperti array. Penerapan ADT dengan memisahkan kode ke dalam file header (*.h), file implementasi (*.cpp), dan program utama (main.cpp) membuat program lebih terstruktur, mudah dibaca, dan mudah dikembangkan. Operasi dasar seperti insert, delete, update, dan view dapat dilakukan dengan memanipulasi pointer next dan first, sedangkan operasi searching menjadi dasar untuk operasi lain karena alamat node yang dituju harus ditemukan terlebih dahulu. Pada latihan, penyisipan data menggunakan insertFirst menghasilkan urutan list yang terbalik dari urutan pemasukan, yaitu 9, 12, 8, 0, 2. Fungsi pencarian berhasil menemukan elemen berinfo 8, dan penelusuran list berhasil menghitung total info seluruh elemen, yaitu 31. Selain itu, pengelolaan memori dengan alokasi dan dealokasi penting agar tidak terjadi kebocoran memori.

## Referensi

1. Informatics Lab, Fakultas Informatika, Telkom University. *Modul 5: Singly Linked List (Bagian Kedua)*, Praktikum Struktur Data.
2. Cormen, T. H., Leiserson, C. E., Rivest, R. L., & Stein, C. (2022). *Introduction to Algorithms* (4th ed.). MIT Press.
3. Weiss, M. A. (2014). *Data Structures and Algorithm Analysis in C++* (4th ed.). Pearson.