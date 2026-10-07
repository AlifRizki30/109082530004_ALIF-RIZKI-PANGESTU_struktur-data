# <h1 align="center">Laporan Praktikum Modul 2 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

<p align="center">ALIF RIZKI PANGESTU - 109082530004</p>

## Dasar Teori

### A. Array dan Pointer  <br/>
    Array dan pointer merupakan konsep dalam C++ yang berkaitan dengan penyimpanan dan pengaksesan data di memori komputer [2], [3].



#### 1. Array Satu, Dua, dan Berdimensi Banyak
    Array adalah tempat penyimpanan beberapa data dengan tipe yang sama dalam satu kelompok. Setiap data di dalamnya memiliki posisi atau indeks yang dapat digunakan untuk mengambil data dengan cepat, yaitu O(1) [2]. Array satu dimensi digunakan untuk menyimpan data dalam satu baris, sedangkan array dua dimensi dapat digunakan untuk data berbentuk baris dan kolom. Jika memiliki lebih dari dua dimensi, array disebut array multidimensi dan penggunaannya menjadi lebih kompleks.


#### 2. Alamat Memori dan Pointer
    Data yang digunakan dalam program akan disimpan pada lokasi tertentu di memori dan setiap lokasi memiliki alamat masing-masing. Pointer merupakan variabel khusus yang berfungsi menyimpan alamat dari variabel lain [3]. Operator & digunakan untuk memperoleh alamat suatu variabel, sedangkan operator * digunakan untuk mengambil nilai yang tersimpan pada alamat tersebut.

#### 3. Hubungan Pointer dengan Array dan String
    Pointer memiliki hubungan dengan array karena nama array dapat digunakan untuk mengacu pada alamat elemen pertama. Oleh karena itu, elemen array dapat diakses menggunakan indeks ataupun pointer. Perbedaannya, array memiliki ukuran yang sudah ditentukan, sedangkan pointer dapat digunakan secara lebih fleksibel dalam pengelolaan memori [2], [3]. String dalam C++ juga berkaitan dengan array karena tersusun dari karakter char dan diakhiri dengan \0, sehingga dapat diakses menggunakan pointer.

### B. Fungsi dan Prosedur <br/>
    Fungsi dan prosedur digunakan untuk membagi program menjadi beberapa bagian berdasarkan tugasnya. Hal ini membuat program lebih rapi dan lebih mudah dipahami


#### 1. Fungsi
    Fungsi merupakan sekumpulan perintah yang dibuat untuk menyelesaikan suatu pekerjaan tertentu. Fungsi dapat menerima parameter sebagai masukan dan mengembalikan suatu nilai sebagai hasil [1]. Dengan menggunakan fungsi, kode yang sama tidak perlu ditulis berulang kali sehingga program menjadi lebih efisien dan sesuai dengan konsep Don't Repeat Yourself (DRY).

#### 2. Prosedur
    Prosedur digunakan untuk menjalankan perintah atau pekerjaan tertentu tanpa menghasilkan nilai yang dikembalikan. Pada C++, prosedur umumnya dibuat menggunakan fungsi dengan tipe data void.

#### 3. Parameter Fungsi
    arameter berfungsi sebagai perantara untuk memasukkan data ke dalam fungsi. Terdapat parameter formal yang ditulis ketika fungsi dideklarasikan dan parameter aktual yang diberikan saat fungsi digunakan. Parameter dapat dikirim melalui call by value, call by pointer, atau call by reference. Pada call by value, fungsi hanya menerima salinan data sehingga nilai asli tidak berubah. Sementara itu, call by pointer dan call by reference dapat digunakan untuk melakukan perubahan langsung terhadap data asli [3].

### C. Parameter Fungsi <br/>
    Parameter fungsi digunakan untuk mengirimkan data dari bagian program ke dalam sebuah fungsi. Dalam C++, parameter dapat diberikan dengan beberapa cara, yaitu menggunakan nilai, pointer, atau referensi. Setiap cara memiliki mekanisme yang berbeda dalam mengakses dan mengubah data.

#### 1. Parameter Formal dan Aktual
    Parameter formal adalah variabel yang dituliskan pada saat fungsi dibuat dan berfungsi sebagai tempat menerima data. Sedangkan parameter aktual adalah nilai atau variabel yang diberikan ketika fungsi tersebut dipanggil.

#### 2. Call by Value
    Call by value adalah metode pengiriman parameter dengan cara menyalin nilai dari variabel ke dalam parameter fungsi. Perubahan yang dilakukan di dalam fungsi tidak akan mengubah nilai variabel aslinya.

#### 3. Call by Pointer
    Call by pointer adalah cara mengirimkan alamat suatu variabel ke dalam fungsi menggunakan pointer. Karena fungsi mendapatkan alamat data, perubahan nilai melalui pointer dapat memengaruhi variabel aslinya.

#### 4. Call by Reference
    Call by reference merupakan metode pengiriman parameter dengan menggunakan referensi terhadap variabel asli. Dengan cara ini, fungsi dapat langsung mengakses dan mengubah nilai variabel tanpa perlu membuat salinan data.

## Guided

### 1. 

```C++
#include <iostream>
#define MAX 5
using namespace std;

int main(){
    int i,j;
    float nilai_total, rata_rata;
    float nilai[MAX];
    static int nilai_tahun[MAX] [MAX]=
    {   {0,2,2,0,0},
        {0,1,1,1,0},
        {0,3,3,3,0},
        {4,4,0,0,4},
        {5,0,0,0,5}
    };
    for (i=0; i<MAX; i++)
    {
        cout<<"masukan nilai ke-"<<i+1<<endl;
        cin>>nilai[i];
    }
    cout<<"\ndata nilai siswa :\n";
    for (i=0; i<MAX; i++)
    {
        for(j=0; j<MAX; j++)
        cout<<nilai_tahun[i][j];
        cout<<"\n";
    }
    return 0;
}```

Program ini digunakan untuk menampilkan tulisan Hello World sebagai contoh program dasar C++.

### 2. 

```C++
#include <iostream>
using namespace std;
int main(){
    int x, y; 
    int *px;

    x = 87;
    px = &x;
    y = *px;

    cout<< "alamat x= " << &x << endl;
    cout<< "isi px= " << px << endl;
    cout<< "isi x= " << x << endl;
    cout << "Nilai yang ditunjuk px= " << *px << endl;
    cout << "Nilai y= " << y << endl;
    
return 0;
}
```

Program ini menghitung nilai z menggunakan operasi penjumlahan dan pembagian.

### 3. 

```C++
#include <iostream>
using namespace std;

int maks3(int a, int b, int c);

int main(){
int x,y,z;
cout<<"masukkan nilai bilangan ke-1 =";
cin>>x;
cout<<"masukkan nilai bilangan ke-2 =";
cin>>y;
cout<<"masukkan nilai bilangan ke-3 =";
cin>>z;
cout<<"nilai maksimumnya adalah =" <<maks3(x,y,z);
return 0;
}
int maks3 (int a, int b, int c){
int temp_max =a;
if(b > temp_max)
temp_max=b;
if(c > temp_max)
temp_max=c;
return (temp_max);
}
```

Program ini menunjukkan penggunaan pre-increment ++r, yaitu nilai r ditambah 1 terlebih dahulu sebelum digunakan.

### 4. Percabangan If-Else

```C++
#include <iostream>
using namespace std;

void tulis(int x);
int main()

{

int jum;
cout << ” jumlah baris kata=”;
cin >> jum;
tulis(jum);
return 0;
}

void tulis(int x){
    for (int i=0;i<x;i++)
        cout << ”baris ke-“ << i + 1 <<endl;
}
```

Program ini menentukan diskon 5% jika total pembelian minimal Rp100.000.

### 5. 

```C++
#include <iostream>
using namespace std;

void tukar(int x, int y);
int main(){
    int a, b;
    a = 4;
    b = 6;

    cout << "kondisi sebelum ditukar\n";
    cout << "a = " << a << " b = " << b << endl;

    tukar(a, b);

    cout << "kondisi setelah ditukar\n";
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}
void tukar(int x, int y){
    int temp;

    temp = x;
    x = y;
    y = temp;

    cout << "nilai akhir pada fungsi tukar\n";
    cout << "x = " << x << " y = " << y << endl;
}
```

Program ini menentukan apakah kode hari yang dimasukkan termasuk hari kerja atau hari libur menggunakan switch-case.


## Unguided

### 1. (Buatlah program yang dapat melakukan operasi penjumlahan, pengurangan, dan perkalian matriks 3x3.)

```C++
#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3];
    int tambah[3][3], kurang[3][3], kali[3][3];

    cout << "Masukkan elemen Matriks A:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    cout << "\nMasukkan elemen Matriks B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tambah[i][j] = A[i][j] + B[i][j];
            kurang[i][j] = A[i][j] - B[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            kali[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                kali[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nHasil Penjumlahan A + B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << tambah[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nHasil Pengurangan A - B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << kurang[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nHasil Perkalian A x B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << kali[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
```

### Output Unguided 1 : 

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/AlifRizki30/109082530004_ALIF-RIZKI-PANGESTU_struktur-data/blob/main/output/output-soal1.png)

Program ini digunakan untuk menerima dua bilangan bertipe float, kemudian menghitung penjumlahan, pengurangan, perkalian, dan pembagian. Bagian if (b != 0) digunakan untuk mengecek agar bilangan kedua tidak bernilai 0 sebelum melakukan pembagian.

### 2. (Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100)

```C++
#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    string satuan[] = {
        "nol", "satu", "dua", "tiga", "empat",
        "lima", "enam", "tujuh", "delapan", "sembilan",
        "sepuluh", "sebelas"
    };

    if (angka >= 0 && angka <= 11) {
        cout << satuan[angka] << endl;
    }
    else if (angka < 20) {
        cout << satuan[angka - 10] << " belas" << endl;
    }
    else if (angka < 100) {
        cout << satuan[angka / 10] << " puluh";

        if (angka % 10 != 0) {
            cout << " " << satuan[angka % 10];
        }

        cout << endl;
    }
    else if (angka == 100) {
        cout << "seratus" << endl;
    }
    else {
        cout << "Angka harus 0-100" << endl;
    }

    return 0;
}
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/AlifRizki30/109082530004_ALIF-RIZKI-PANGESTU_struktur-data/blob/main/output/output-soal2.png)

Program ini menerima angka 0–100, kemudian mengubahnya menjadi bentuk tulisan. Array satuan digunakan untuk menyimpan nama angka, sedangkan percabangan if-else menentukan bentuk tulisan berdasarkan nilai angka, misalnya 15 menjadi lima belas dan 79 menjadi tujuh puluh sembilan

### 3. (isi dengan soal unguided 3)

```C++
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Input: ";
    cin >> n;

    cout << "Output:" << endl;

    for (int i = n; i >= 1; i--) {

        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << " * ";
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/AlifRizki30/109082530004_ALIF-RIZKI-PANGESTU_struktur-data/blob/main/output/output-soal3.png)

Program ini digunakan untuk membuat pola angka berbentuk mirror. Perulangan for pertama mengatur jumlah baris, sedangkan for berikutnya digunakan untuk mencetak angka dari belakang ke depan dan dari depan ke belakang. Bagian cout << " * " digunakan sebagai tanda * di tengah pola, sementara perulangan spasi membuat bentuk pola semakin menjorok ke kanan.

## Kesimpulan

Dari ketiga program tersebut, dapat dipahami penggunaan dasar C++ seperti **input/output, tipe data, operator, percabangan, array, dan perulangan**. Ketiga konsep tersebut dapat digunakan untuk membuat program perhitungan, mengubah angka menjadi tulisan, serta membuat pola menggunakan perulangan.


## Referensi

[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN.
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.<br>[1] Modul Praktikum Struktur Data 1, “Code Blocks IDE & Pengenalan Bahasa C++ (Bagian Pertama)”, Program Studi Informatika, 2026.<br>[2] L. J. E. Dewi, “Media Pembelajaran Bahasa Pemrograman C++,” Jurnal Pendidikan Teknologi dan Kejuruan, vol. 7, no. 1, 2010.<br>[3] A. Kadir, Dasar Pemrograman C++, Yogyakarta: Andi, 2014.<br>[4] B. S. Sidik, Pemrograman C++, Bandung: Informatika, 2012.