# <h1 align="center">Laporan Praktikum Modul 3 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

<p align="center">ALIF RIZKI PANGESTU - 109082530004</p>

## Dasar Teori

### A. Konsep Abstract Data Type (ADT)  <br/>
   Abstract Data Type (ADT) merupakan konsep dalam struktur data yang menggabungkan definisi tipe data dengan sekumpulan operasi dasar untuk mengolah data tersebut. ADT membantu program menjadi lebih terstruktur karena data dan operasi yang digunakan untuk mengolahnya memiliki pembagian tugas yang jelas.



#### 1. Pengertian Abstract Data Type (ADT)
   ADT adalah tipe data yang terdiri dari definisi tipe dan sekumpulan operasi dasar atau primitif yang digunakan untuk mengolah data tersebut.


#### 2. Operasi Dasar ADT
    ADT memiliki beberapa operasi dasar, seperti konstruktor untuk membentuk objek, selector untuk mengakses komponen, serta prosedur untuk mengubah dan menampilkan data.

#### 3. Tujuan Penggunaan ADT
    ADT bertujuan memisahkan definisi tipe data dari implementasi operasi yang digunakan sehingga program lebih teratur dan mudah dipahami.

### B. Implementasi ADT <br/>
    Implementasi ADT dalam C++ dilakukan dengan memisahkan definisi tipe data, implementasi operasi, dan program utama ke dalam file yang berbeda. Pemisahan ini bertujuan mempermudah pengelolaan kode serta membuat program lebih rapi dan mudah dikembangkan.

#### 1. File Header (.h)
   File .h digunakan untuk mendefinisikan struktur data, konstanta, dan deklarasi fungsi atau prosedur yang akan digunakan dalam program.

#### 2. File Implementasi (.cpp)
   File .cpp digunakan untuk menuliskan implementasi fungsi dan prosedur yang telah dideklarasikan pada file .h.

#### 3. File Program Utama (main.cpp)
   File main.cpp berfungsi sebagai program utama yang memanggil fungsi dan prosedur untuk menjalankan program sesuai kebutuhan.

### C. Penerapan ADT pada Program <br/>
    Penerapan ADT dapat dilihat melalui pembuatan program yang menggunakan struktur data dan fungsi khusus untuk mengolahnya. Pada latihan modul ini, ADT diterapkan untuk mengelola data mahasiswa, data pelajaran, serta operasi pengolahan data menggunakan fungsi dan prosedur.

#### 1. ADT untuk Data Mahasiswa
    Pada program data mahasiswa, struktur Mahasiswa digunakan untuk menyimpan nama, NIM, nilai UTS, UAS, tugas, dan nilai akhir. Data mahasiswa disimpan dalam array dengan kapasitas maksimal 10 data.

#### 2. ADT untuk Data Pelajaran
   Pada program pelajaran, struktur pelajaran digunakan untuk menyimpan nama dan kode mata pelajaran. Fungsi create_pelajaran() digunakan untuk membentuk objek pelajaran, sedangkan tampil_pelajaran() digunakan untuk menampilkan datanya.

#### 3. Fungsi Perhitungan Nilai Akhir
    Pada program mahasiswa, fungsi hitungNilaiAkhir() digunakan untuk menghitung nilai akhir menggunakan rumus \(0.3 \times UTS + 0.4 \times UAS + 0.3 \times Tugas\). Hasilnya disimpan dalam atribut nilaiAkhir.

#### 4. Penggunaan Fungsi dan Prosedur dalam ADT
    Penggunaan ADT membuat setiap fungsi memiliki tugas tertentu sehingga program utama dapat memanggil operasi yang dibutuhkan tanpa menuliskan seluruh proses pengolahan data di dalam main.cpp.

### D. Array dan Pointer pada Penerapan ADT <br/>
    Array dan pointer merupakan konsep yang digunakan untuk menyimpan serta mengakses data dalam pemrograman C++. Dalam latihan ketiga, keduanya digunakan untuk mengolah elemen array dua dimensi dan menukar nilai variabel melalui alamat memorinya.

#### 1. Pengertian dan Penggunaan Array
   Array merupakan struktur data yang menyimpan beberapa elemen dengan tipe data yang sama. Pada program mahasiswa, array digunakan untuk menyimpan maksimal 10 mahasiswa, sedangkan pada program ketiga digunakan dua array integer berukuran \(3 \times 3\).

#### 2. Array Dua Dimensi
  Array dua dimensi menyimpan data dalam bentuk baris dan kolom. Pada program ketiga, prosedur tampilArray() digunakan untuk menampilkan seluruh elemen array menggunakan perulangan.

#### 3.Pengertian dan Penggunaan Pointer
   Pointer adalah variabel yang menyimpan alamat memori variabel lain. Pada program ketiga, pointer integer p1 dan p2 digunakan untuk menunjuk variabel x dan y.

## Guided

### 1. buku.h

```C++
# ifndef BUKU_H
#define BUKU_H
#include <iostream>

using namespace std;
struct buku {
    string judul;
    int halaman;
    string penulis;
};

void editIsi (string judul, int halaman, string penulis, buku &buku);
void tampilanIsiBuku (buku buku);
bool checkPenulis(buku buku);

#endif
```

Program ini digunakan untuk menginput 5 nilai siswa dan menampilkan data nilai dalam array 2 dimensi menggunakan perulangan for.

### 2. buku.cpp

```C++
#include "buku.h"

void editIsi (string judul, int halaman, string penulis, buku &buku){
    buku.judul = judul;
    buku.halaman = halaman;
    buku.penulis = penulis;
}

void tampilanIsiBuku(buku buku){
    cout << "Judul Buku : " << buku.judul << endl;
    cout << "Halaman Buku : " << buku.halaman << endl;
    cout << "penulis buku : " << buku.penulis << endl;
}

bool checkPenulis(buku buku)
{
    return buku.penulis == "";
}
```

Program ini menunjukkan penggunaan pointer untuk menyimpan alamat variabel x dan mengambil nilainya melalui px, kemudian menyimpannya ke variabel y.


### 3. main.cpp

```C++
#include <iostream>
#include "buku.h"

using namespace std;

int main (){

    buku novel;
    string judul, penulis;
    int halaman;

    cout << "masukan judul buku : ";
    cin >> judul;
    cout << "masukan halaman buku : ";
    cin >> halaman;
    cout << "masukan penulis buku : ";
    cin >> penulis;

    editIsi(judul, halaman, penulis, novel);
    tampilanIsiBuku(novel);
    
    cout << checkPenulis(novel);

    return 0;
}
```

Program ini digunakan untuk mencari nilai terbesar dari tiga bilangan dengan menggunakan fungsi maks3().


## Unguided
## soal1

### 1. mahasiswa.cpp
```C++

#include <iostream>
#include <iomanip>
#include "mahasiswa.h"

using namespace std;

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3f * uts + 0.4f * uas + 0.3f * tugas;
}

void inputMahasiswa(Mahasiswa mhs[], int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData mahasiswa ke-" << i + 1 << endl;

        cout << "Nama  : ";
        getline(cin >> ws, mhs[i].nama);

        cout << "NIM   : ";
        cin >> mhs[i].nim;

        cout << "Nilai UTS   : ";
        cin >> mhs[i].uts;

        cout << "Nilai UAS   : ";
        cin >> mhs[i].uas;

        cout << "Nilai Tugas : ";
        cin >> mhs[i].tugas;

        mhs[i].nilaiAkhir = hitungNilaiAkhir(
            mhs[i].uts, mhs[i].uas, mhs[i].tugas
        );
    }
}

void tampilMahasiswa(Mahasiswa mhs[], int jumlah) {
    cout << "\n===== DATA MAHASISWA =====\n";
    cout << fixed << setprecision(2);

    for (int i = 0; i < jumlah; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama        : " << mhs[i].nama << endl;
        cout << "NIM         : " << mhs[i].nim << endl;
        cout << "UTS         : " << mhs[i].uts << endl;
        cout << "UAS         : " << mhs[i].uas << endl;
        cout << "Tugas       : " << mhs[i].tugas << endl;
        cout << "Nilai Akhir : " << mhs[i].nilaiAkhir << endl;
    }
}
```
### 2. mahasiswa.h

```C++
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
```

### 3. main.cpp
```C++

#include <iostream>
#include "mahasiswa.h"

using namespace std;

int main() {
    Mahasiswa mhs[MAX_MAHASISWA];
    int jumlah;

    cout << "Masukkan jumlah mahasiswa (1-10): ";
    cin >> jumlah;

    if (jumlah < 1 || jumlah > MAX_MAHASISWA) {
        cout << "Jumlah mahasiswa tidak valid!" << endl;
        return 1;
    }

    inputMahasiswa(mhs, jumlah);
    tampilMahasiswa(mhs, jumlah);

    return 0;
}

```
### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/AlifRizki30/109082530004_ALIF-RIZKI-PANGESTU_struktur-data/blob/main/MODUL3/output/soal1.png)
Program ini dibuat untuk menyimpan data maksimal 10 mahasiswa dalam sebuah array. Setiap mahasiswa memiliki data nama, NIM, nilai UTS, UAS, tugas, dan nilai akhir. Nilai akhir dihitung menggunakan fungsi hitungNilaiAkhir() dengan rumus 30% nilai UTS, 40% nilai UAS, dan 30% nilai tugas. Program juga menggunakan fungsi inputMahasiswa() untuk memasukkan data dan tampilMahasiswa() untuk menampilkan seluruh data mahasiswa beserta nilai akhirnya.


## soal2

### 1. pelajaran.cpp
```C++

#include <iostream>
#include "pelajaran.h"

using namespace std;

pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran pel;

    pel.namaMapel = namapel;
    pel.kodeMapel = kodepel;

    return pel;
}

void tampil_pelajaran(pelajaran pel) {
    cout << "Nama Mata Pelajaran: "
         << pel.namaMapel << endl;

    cout << "Kode Mata Pelajaran: "
         << pel.kodeMapel << endl;
}
```
### 2. pelajaran.h

```C++

#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <string>
using namespace std;

struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

pelajaran create_pelajaran(string namapel, string kodepel);
void tampil_pelajaran(pelajaran pel);

#endif
```

### 3. main.cpp
```C++

#include <iostream>
#include "pelajaran.h"

using namespace std;

int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";

    pelajaran pel = create_pelajaran(namapel, kodepel);

    tampil_pelajaran(pel);

    return 0;
}

```
### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/AlifRizki30/109082530004_ALIF-RIZKI-PANGESTU_struktur-data/blob/main/MODUL3/output/soal2.png)
Program ini dibuat untuk menerapkan ADT pelajaran yang menyimpan nama dan kode mata pelajaran. Fungsi create_pelajaran() digunakan untuk membuat objek pelajaran dan mengisi atributnya, sedangkan prosedur tampil_pelajaran() digunakan untuk menampilkan nama dan kode mata pelajaran. Program ini memisahkan deklarasi, implementasi, dan program utama ke dalam file pelajaran.h, pelajaran.cpp, dan main.cpp agar kode lebih terstruktur dan mudah dipahami.
## soal1

### 1. array2d.cpp
```C++

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
```
### 2. mahasiswa.h

```C++
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
```

### 3. main.cpp
```C++

#include <iostream>
#include "array2d.h"

using namespace std;

int main() {
    int A[BARIS][KOLOM] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[BARIS][KOLOM] = {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18}
    };

    cout << "Array A sebelum ditukar:\n";
    tampilArray(A);

    cout << "\nArray B sebelum ditukar:\n";
    tampilArray(B);

    int baris, kolom;

    cout << "\nMasukkan baris (1-3): ";
    cin >> baris;

    cout << "Masukkan kolom (1-3): ";
    cin >> kolom;

    if (baris < 1 || baris > 3 ||
        kolom < 1 || kolom > 3) {
        cout << "Posisi tidak valid!" << endl;
        return 1;
    }

    tukarElemen(A, B, baris - 1, kolom - 1);

    cout << "\nArray A setelah pertukaran:\n";
    tampilArray(A);

    cout << "\nArray B setelah pertukaran:\n";
    tampilArray(B);

    int x = 100;
    int y = 200;

    int *p1 = &x;
    int *p2 = &y;

    cout << "\nSebelum pertukaran pointer:\n";
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    tukarPointer(p1, p2);

    cout << "\nSetelah pertukaran pointer:\n";
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}

```
### Output Unguided 3 :

##### Output 3

![Screenshot Output Unguided 3_3](https://github.com/AlifRizki30/109082530004_ALIF-RIZKI-PANGESTU_struktur-data/blob/main/MODUL3/output/soal3.png)
Program ini dibuat untuk mengolah dua array integer dua dimensi berukuran 3×3 dan menggunakan dua pointer integer. Prosedur tampilArray() digunakan untuk menampilkan isi array, sedangkan tukarElemen() digunakan untuk menukar elemen dari dua array pada posisi tertentu. Selain itu, prosedur tukarPointer() digunakan untuk menukar nilai dua variabel melalui pointer dengan bantuan operator dereferensi *.

## Kesimpulan

Berdasarkan ketiga soal praktikum Struktur Data, dapat disimpulkan bahwa konsep Abstract Data Type (ADT) membantu membuat program lebih terstruktur dengan memisahkan deklarasi tipe data, implementasi fungsi, dan program utama ke dalam file .h, .cpp, dan main.cpp. Pada soal pertama, ADT digunakan untuk menyimpan data mahasiswa dan menghitung nilai akhir. Pada soal kedua, ADT digunakan untuk membuat dan menampilkan data mata pelajaran. Sementara itu, pada soal ketiga, array dua dimensi dan pointer digunakan untuk menampilkan serta menukar elemen array dan nilai variabel. Dengan mengerjakan ketiga soal tersebut, konsep ADT, penggunaan array, fungsi, prosedur, dan pointer dalam bahasa C++ dapat dipahami dengan lebih baik.


## Referensi

[1]. Modul Praktikum Struktur Data. (t.t.). Modul 3: Abstract Data Type (ADT), hlm. 32–35. Bahan ajar praktikum Struktur Data.
[2]. Malik, D. S. (2010). C++ Programming: From Problem Analysis to Program Design (5th ed.). Cengage Learning.
[3]. Deitel, P., & Deitel, H. (2017). C++ How to Program (10th ed.). Pearson.