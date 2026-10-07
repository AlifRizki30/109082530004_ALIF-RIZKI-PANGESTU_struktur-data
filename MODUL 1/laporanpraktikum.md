# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>

<p align="center">ALIF RIZKI PANGESTU - 109082530004</p>

## Dasar Teori

Berdasarkan dasar teori tersebut, dapat disimpulkan bahwa pemrograman C++ memiliki beberapa konsep dasar seperti penggunaan variabel, tipe data, input/output, dan operator. Konsep-konsep tersebut menjadi dasar untuk membuat program sederhana dan memahami cara kerja program C++ secara lebih terstruktur.

### A. Code::Blocks dan Bahasa C++<br/>

Code::Blocks merupakan IDE free dan open-source yang digunakan untuk membuat, meng-compile, dan menjalankan program C/C++.

#### 1. Struktur Program C++
Struktur dasar C++ terdiri dari library, fungsi main(), deklarasi variabel, dan perintah program. Setiap statement biasanya diakhiri dengan tanda ;.

#### 2. Identifier
Identifier adalah nama yang digunakan untuk variabel, konstanta, fungsi, atau objek. C++ bersifat case sensitive, sehingga huruf besar dan kecil dianggap berbeda.

#### 3. Variabel dan Konstanta
Variabel digunakan untuk menyimpan nilai yang dapat berubah, sedangkan konstanta menyimpan nilai yang tetap selama program berjalan.

### B. Tipe Data dan Input/Output <br/>

Tipe data menentukan jenis nilai yang dapat disimpan dalam variabel, seperti int, float, double, dan char.

#### 1. Tipe Data Dasar
int digunakan untuk bilangan bulat, float dan double untuk bilangan pecahan, sedangkan char digunakan untuk karakter.

#### 2. input 
Input digunakan untuk menerima data dari pengguna. Dalam C++, input dapat dilakukan menggunakan cin dengan operator >>.

#### 3. Output
Output digunakan untuk menampilkan data atau hasil program. Dalam C++, cout digunakan untuk menampilkan teks maupun nilai variabel.

### C. Operator <br/>

Operator adalah simbol yang digunakan untuk melakukan operasi pada data dalam program, seperti perhitungan dan perbandingan.

#### 1. Operator Aritmatika
Operator aritmatika digunakan untuk perhitungan seperti +, -, *, /, dan %.

#### 2. Operator Logika
Operator logika digunakan untuk mengolah kondisi, seperti && untuk AND, || untuk OR, dan ! untuk NOT.

#### 3. Operator Increment dan Decrement
++ digunakan untuk menambah nilai variabel satu, sedangkan -- digunakan untuk mengurangi nilai variabel satu.

## Guided

### 1. Program Hello World

```C++
#include <iostream>
using namespace std;

int main(){
    cout << "Hello world!" << endl;
    return 0;
}
```

Program ini digunakan untuk menampilkan tulisan Hello World sebagai contoh program dasar C++.

### 2. Penggunaan Operator Aritmatika

```C++
#include<iostream>
using namespace std;

int main(){
    int w, x, y; 
    float z;
    
    x = 7; 
    y = 3; 
    w = 1;
    z = (x + y)/(y + w);
    
    cout << "nilai z = " << z << endl;
    return 0;
}
```

Program ini menghitung nilai z menggunakan operasi penjumlahan dan pembagian.

### 3. Penggunaan Operator Increment

```C++
#include <iostream>
using namespace std;

int main(){
    int r = 10;
    int s;
    
    s = 10 + ++r;
    
    cout << "Nilai r = " << r << endl;
    cout << "Nilai s = " << s << endl;
    
    return 0;
}
```

Program ini menunjukkan penggunaan pre-increment ++r, yaitu nilai r ditambah 1 terlebih dahulu sebelum digunakan.

### 4. Percabangan If-Else

```C++
#include <iostream>
using namespace std;

int main(){
    double tot_pembelian, diskon;
    
    cout << "total pembelian : Rp";
    cin >> tot_pembelian;
    
    diskon = 0;
    
    if (tot_pembelian >= 100000)
        diskon = 0.05 * tot_pembelian;
    else
        diskon = 0;
        
    cout << "besar diskon = Rp" << diskon;
}
```

Program ini menentukan diskon 5% jika total pembelian minimal Rp100.000.

### 5. Percabangan Switch-Case

```C++
#include <iostream>
using namespace std;

int main(){
    int kode_hari;
    
    puts("Menentukan hari kerja/libur\n");
    puts("1=senin 3=rabu 5=jumat 7=minggu ");
    puts("2=selasa 4=kamis 6=sabtu ");
    
    cin >> kode_hari;
    
    switch (kode_hari){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Hari kerja";
            break;
        case 6:
        case 7:
            cout << "Hari libur";
            break;
        default:
            cout << "code masukan salah" << endl;
    }
    
    return 0;
}
```

Program ini menentukan apakah kode hari yang dimasukkan termasuk hari kerja atau hari libur menggunakan switch-case.

### 6. Perulangan Do-While

```C++
#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int jum;
    
    cout << "masukan banyak baris: ";
    cin >> jum;
    
    do{
        cout << "baris ke-" << (i+1) << endl;
        i++;
    } while (i < jum);
    
    return 0;
}
```

Program ini menggunakan do-while untuk menampilkan nomor baris secara berulang. Perintah dijalankan terlebih dahulu sebelum kondisi diperiksa.

### 7. Perulangan While

```C++
#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int jum;
    
    cout << "masukan banyak baris: ";
    cin >> jum;
    
    while(i <= jum){
        cout << "baris ke-" << i << endl;
        i++;
    }
    
    return 0;
}
```

Program ini menggunakan while untuk melakukan perulangan selama nilai i masih memenuhi kondisi i <= jum.

### 8.Perulangan For

```C++
#include <iostream>
using namespace std;

int main(){
    int jum;
    
    cout << "jumlah perulangan: ";
    cin >> jum;
    
    for(int i = 0; i < jum; i++){
        cout << "saya pintar\n";
    }
    
    return 0;
}
```

Program ini menggunakan for untuk mencetak tulisan "saya pintar" sebanyak jumlah perulangan yang dimasukkan.

### 9. Struktur dan Array

```C++
#include <iostream>
#define MAX 5
using namespace std;

int main(){
    int i;
    
    struct data{
        char nama[40];
        int nilai;
    };
    
    data siswa[MAX];
    
    for (i = 0; i < MAX; i++){
        cout << "masukkan data ke-" << i+1 << endl;
        cout << "nama = ";
        cin >> siswa[i].nama;
        cout << "nilai = ";
        cin >> siswa[i].nilai;
    }
    
    cout << "\ndata siswa\n";
    cout << "=======";
    
    for (i = 0; i < MAX; i++){
        cout << "\n\ndata ke-" << i+1;
        cout << "\n\nnama = " << siswa[i].nama;
        cout << "\n\nnilai = " << siswa[i].nilai;
    }
    
    return 0;
}
```

Program ini menggunakan struct dan array untuk menyimpan data 5 siswa berupa nama dan nilai, kemudian menampilkan kembali data tersebut.

### 10. Penggunaan Fungsi

```C++
#include <iostream>
using namespace std;

float ctof(float celcius);

int main() {
    float celcius, fahrenheit;
    
    cout << "nilai Celcius? ";
    cin >> celcius;
    
    fahrenheit = ctof(celcius);
    
    cout << celcius << " Celcius adalah "
         << fahrenheit << " Fahrenheit" << endl;
    
    return 0;
}

float ctof(float celcius){
    return (celcius * 1.8) + 32;
}
```

Program ini menggunakan fungsi ctof() untuk mengubah suhu dari Celcius ke Fahrenheit, sehingga perhitungan dipisahkan dari program utama.

## Unguided

### 1. (Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.)

```C++
#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;

    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << "Penjumlahan   = " << a + b << endl;
    cout << "Pengurangan   = " << a - b << endl;
    cout << "Perkalian     = " << a * b << endl;
    
    if (b != 0) {
        cout << "Pembagian     = " << a / b << endl;
    } else {
        cout << "Pembagian     = tidak dapat dibagi 0" << endl;
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