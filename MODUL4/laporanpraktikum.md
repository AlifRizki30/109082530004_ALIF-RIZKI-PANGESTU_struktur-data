# <h1 align="center">Laporan Praktikum Modul 4 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

<p align="center">ALIF RIZKI PANGESTU - 109082530004</p>

## Dasar Teori

### A. Konsep Linked List  <br/>
Linked list adalah struktur data berupa rangkaian elemen yang saling terhubung dan dapat bertambah atau berkurang ukurannya sesuai kebutuhan.

#### 1. Pengertian Linked List
Linked list menyimpan data dalam elemen-elemen yang saling berkait. Data yang disimpan dapat berupa data tunggal (satu variabel) atau data majemuk (record).

#### 2. Linked List dengan Pointer
Pointer dipilih karena bersifat dinamis, sedangkan array bersifat statis. Elemen diakses dengan operator `->` atau `.`.

#### 3. Operasi Umum Linked List
Operasi dasarnya adalah create list, insert, delete, view, searching, dan update.

### B. Singly Linked List <br/>
Singly linked list adalah linked list yang hanya memiliki satu arah pointer.

#### 1. Komponen Elemen
Setiap elemen terdiri dari data (informasi yang disimpan) dan successor (penghubung ke elemen berikutnya).

#### 2. Sifat Singly Linked List
Hanya memerlukan satu pointer, node terakhir menunjuk ke Nil, dan hanya bisa dibaca maju.

#### 3. Istilah Penting
- first/head: pointer ke elemen pertama.
- next: pointer ke elemen berikutnya.
- Nil/NULL: tidak menunjuk ke mana pun.
- Node: tempat penyimpanan data.

### C. Implementasi ADT Singly Linked List <br/>
ADT diimplementasikan dengan memisahkan kode ke dalam tiga file.

#### 1. File Header (Singlylist.h)
Berisi definisi tipe data (`infotype`, `address`, `ElmList`, `List`) dan prototipe fungsi.

#### 2. File Implementasi (Singlylist.cpp)
Berisi isi fungsi `CreateList`, `alokasi`, `dealokasi`, `printInfo`, dan `insertFirst`.

#### 3. File Program Utama (main.cpp)
Memanggil fungsi ADT untuk membentuk list, menyisipkan data 2, 0, 8, 12, 9, lalu menampilkannya (`9 12 8 0 2`).

### D. Operasi pada Singly Linked List <br/>

#### 1. Pembentukan List dan Alokasi
`CreateList` mengisi `first` dengan Nil, `alokasi` membuat elemen baru dengan `new`, dan `dealokasi` menghapusnya dengan `delete`.

#### 2. Insert
Menambah elemen di awal (`insertFirst`), di akhir (`insertLast`), atau setelah node tertentu (`insertAfter`).

#### 3. View
Menelusuri list dari `first` sampai Nil sambil menampilkan data tiap node (`printInfo`).

#### 4. Delete
Menghapus elemen di awal, di akhir, atau setelah node tertentu, lalu memori elemen dibebaskan dengan `dealokasi`.

#### 5. Update
Mengubah data pada node, biasanya diawali dengan mencari node yang akan diubah.

## Guided

### 1. list.h

```C++
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#define Nil NULL

#include <iostream>
using namespace std;

typedef struct Node *address;

struct student {
    int age;
    string name, id;
};

struct Node {
    student data;
    address next;
};

struct LinkedList {
    address first;
};

bool isEmpty(LinkedList L);
void createList(LinkedList &L);
address alokasi(int age, string name, string id);
void dealokasi(address &P);
void printList(LinkedList L);
void insertFirst(LinkedList &L, address P);
void insertAfter(LinkedList &L, address Prev, address P);
void insertLast(LinkedList &L, address P);

void delfirst(LinkedList &L);
void delAfter(LinkedList &L, address Prev, address P);
void delLast(LinkedList &L);
int nbList(LinkedList L);
void delList(LinkedList &L);
#endif
```


### 2. list.cpp

```C++
#include "List.h"
#include <iostream>
using namespace std;

bool isEmpty(LinkedList L){
    if (L.first == Nil){
        return (L.first == Nil);
    } else {
        return (L.first == Nil);
    }
};

void createList(LinkedList &L){
    L.first = Nil;
};

address alokasi(int age, string name, string id){
    address P = new Node;
    if (P != Nil){
        P->data.age = age;
        P->data.name = name;
        P->data.id = id;
        P->next = Nil;
    }
    return P;
};

void dealokasi(address &P){
    P->next = Nil;
    delete P;
};

void printList(LinkedList L){
    address P = L.first;
    while (P != Nil){
        cout << "Name: \t" << P->data.name << ", ID: \t" << P->data.id << ", Age: " << P->data.age << endl;
        P = P->next;
    }
};

void insertFirst(LinkedList &L, address P)
{
    if (isEmpty(L)){
        L.first = P;
    } else {
        P->next = L.first;
        L.first = P;
    }
};
void insertAfter(LinkedList &L, address Prev, address P)
{
    if (Prev != Nil){
        P->next = Prev->next;
        Prev->next = P;
    }
};

void insertLast(LinkedList &L, address P)
{
    if (isEmpty(L)){
        L.first = P;
    } else {
        address Q = L.first;
        while (Q->next != Nil){
            Q = Q->next;
        }
        Q->next = P;
    }
};

void delfirst(LinkedList &L){
    if (isEmpty(L)){
        cout << "List is empty, cannot delete." << endl;
    } else {
        address P = L.first;
        L.first = P->next;
        dealokasi(P);
    }
};
void delAfter(LinkedList &L, address Prev, address P){
    if (isEmpty(L)){
        cout << "List is empty, cannot delete." << endl;
    } else {
        if(Prev != Nil && Prev->next != Nil){
            P = Prev->next;
            Prev->next = P->next;
            P->next = Nil;
            dealokasi(P);
        }else{
            cout << "Previous node is not valid, cannot delete." << endl;
        }
    }
};
void delLast(LinkedList &L){
    if (isEmpty(L)){
        cout << "List is empty, cannot delete." << endl;
    } else {
        address P = L.first;
        address Q = Nil;
        while (P->next != Nil){
            Q = P;
            P = P->next;
        }
        if (Q != Nil){
            Q->next = Nil;
        } else {
            L.first = Nil;
        }
        dealokasi(P);
    }
};
int nbList(LinkedList L){
    int count = 0;
    address P = L.first;
    while (P != Nil){
        count++;
        P = P->next;
    }
    return count;
};
void delList(LinkedList &L){
    while (!isEmpty(L)){
        delfirst(L);
    }
};
```


### 3. main.cpp

```C++
#include <iostream>
#include "List.h"

using namespace std;

int main(){

    LinkedList L;
    address nodeA = Nil, nodeB = Nil, nodeC = Nil, nodeD = Nil, nodeE = Nil;
    createList(L);

    nodeA = alokasi(20, "Dhimas", "2311102151");
    nodeB = alokasi(21, "Arvin",  "2311102152");
    nodeC = alokasi(20, "Budi",   "2311102153");
    nodeD = alokasi(22, "Citra",  "2311102154");
    nodeE = alokasi(19, "Dina",   "2311102155");

    insertFirst(L, nodeA);          
    insertLast(L, nodeB);         
    insertAfter(L, nodeA, nodeC);   
    insertFirst(L, nodeD);         
    insertLast(L, nodeE);          

    cout << "Isi list:" << endl;
    printList(L);
    cout << "Jumlah node: " << nbList(L) << endl;

    delfirst(L);                   
    delLast(L);                     
    delAfter(L, L.first, Nil);  

    cout << "\nSetelah penghapusan:" << endl;
    printList(L);
    cout << "Jumlah node: " << nbList(L) << endl;

    delList(L);                  
    cout << "\nSetelah delList, jumlah node: " << nbList(L) << endl;

    return 0;
}
```
### Output guided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/AlifRizki30/109082530004_ALIF-RIZKI-PANGESTU_struktur-data/blob/main/MODUL4/OUTPUT/guided.png)
Program menyimpan data mahasiswa (nama, ID, dan umur) pada singly linked list. Pada tahap pertama, seluruh isi list ditampilkan dan hasil penghitungan menunjukkan ada 5 node. Pada tahap kedua, beberapa node dihapus sehingga yang tersisa hanya data Dhimas dan Arvin, dan jumlah node menjadi 2. Pada tahap terakhir, delList menghapus seluruh node dan membebaskan memorinya, sehingga jumlah node menjadi 0.


## Unguided
## soal1

### 1. singlylist.h
```C++

#ifndef SINGLYLIST_H_INCLUDED
#define SINGLYLIST_H_INCLUDED

#include <iostream>
#include <cstddef>
using namespace std;

#define Nil NULL

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};
struct List {
    address first;
};
void CreateList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

#endif
```
### 2. singlylist.cpp

```C++
#include "Singlylist.h"

void CreateList(List &L) {
    L.first = Nil;
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

void printInfo(List L) {
    address P = L.first;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
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

    return 0;
}

```
### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/AlifRizki30/109082530004_ALIF-RIZKI-PANGESTU_struktur-data/blob/main/MODUL4/OUTPUT/SOAL.png)
Program membentuk list kosong dengan CreateList, lalu membuat lima elemen dengan alokasi (nilai 2, 0, 8, 12, 9). Setiap elemen disisipkan ke awal list dengan insertFirst, sehingga elemen yang terakhir dimasukkan (9) berada di depan. Fungsi printInfo menelusuri list dari first sampai Nil, sehingga output tampil terbalik dari urutan penyisipan, yaitu 9 12 8 0 2.


## Kesimpulan

1. Linked list adalah struktur data dinamis yang elemen-elemennya saling terhubung dan dapat bertambah atau berkurang sesuai kebutuhan. Karena itu, linked list lebih fleksibel daripada array yang ukurannya tetap.
2. Pada singly linked list, setiap elemen menyimpan data (`info`) dan satu pointer ke elemen berikutnya (`next`), dan elemen terakhir menunjuk ke `Nil`.
3. Implementasi ADT dipisah menjadi tiga file, yaitu `Singlylist.h` (tipe data dan prototipe), `Singlylist.cpp` (isi fungsi), dan `main.cpp` (program utama), sehingga kode lebih rapi dan mudah dikelola.
4. Pada latihan, fungsi `CreateList`, `alokasi`, `dealokasi`, `printInfo`, dan `insertFirst` berhasil diimplementasikan. Data 2, 0, 8, 12, dan 9 disisipkan dengan `insertFirst`, sehingga setiap elemen baru berada di awal list dan output yang tampil berurutan terbalik, yaitu `9 12 8 0 2`.
5. Alokasi memori dengan `new` dan dealokasi dengan `delete` menunjukkan bahwa memori elemen dikelola secara dinamis oleh programmer.

## Referensi

1. Informatics Lab, Fakultas Informatika, Telkom University. *Modul 4: Singly Linked List (Bagian Pertama)*, Praktikum Struktur Data.
2. Cormen, T. H., Leiserson, C. E., Rivest, R. L., & Stein, C. *Introduction to Algorithms*. MIT Press.
3. Weiss, M. A. *Data Structures and Algorithm Analysis in C++*. Pearson.
4. Goodrich, M. T., Tamassia, R., & Mount, D. M. *Data Structures and Algorithms in C++*. Wiley.
5. cppreference.com. *new expression* dan *delete expression*. https://en.cppreference.com/w/cpp/language/new