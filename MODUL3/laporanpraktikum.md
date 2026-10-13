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
### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/AlifRizki30/109082530004_ALIF-RIZKI-PANGESTU_struktur-data/blob/main/MODUL%202/OUTPUT/OUTPUT%203%20M2.png)

Program ini digunakan untuk mengolah data array, seperti menampilkan isi array, mencari nilai maksimum dan minimum, serta menghitung nilai rata-rata melalui menu pilihan.


## Kesimpulan

Berdasarkan beberapa program yang telah dibuat, dapat disimpulkan bahwa C++ memiliki berbagai konsep penting seperti array, pointer, fungsi, parameter, dan reference. Konsep tersebut dapat digunakan untuk mengolah data, mencari nilai maksimum dan minimum, menghitung rata-rata, melakukan operasi matriks, serta menukar nilai variabel. Dengan memahami konsep-konsep tersebut, program dapat dibuat lebih terstruktur dan mudah dipahami.



## Referensi

[1] Kadir. (2019). Dasar Pemrograman C++. Yogyakarta: Andi. <br>
[2] Sianipar, R. H. (2015). Pemrograman C++ untuk Pemula. Jakarta: Elex Media Komputindo. <br>
[3] Kurniawan, E. (2019). Belajar C++. Bandung: Informatika. <br>