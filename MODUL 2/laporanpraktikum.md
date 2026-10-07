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

Program ini digunakan untuk menginput 5 nilai siswa dan menampilkan data nilai dalam array 2 dimensi menggunakan perulangan for.

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

Program ini menunjukkan **penggunaan pointer** untuk menyimpan alamat variabel x dan mengambil nilainya melalui px, kemudian menyimpannya ke variabel y.


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

Program ini digunakan untuk mencari nilai terbesar dari tiga bilangan dengan menggunakan fungsi maks3().

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

Program ini digunakan untuk menampilkan beberapa baris kata sesuai jumlah yang dimasukkan, dengan menggunakan fungsi tulis().


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

Program ini menunjukkan pertukaran nilai menggunakan fungsi tukar() dengan parameter nilai (call by value), sehingga nilai a dan b di main() tetap sama.



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

![Screenshot Output Unguided 1_1](https://github.com/AlifRizki30/109082530004_ALIF-RIZKI-PANGESTU_struktur-data/blob/main/MODUL%202/OUTPUT/OUTPUT%201%20M2.png)

Program ini digunakan untuk melakukan penjumlahan, pengurangan, dan perkalian dua matriks berukuran 3×3, lalu menampilkan hasilnya.


### 2. (Berdasarkan guided pointer dan reference sebelumnya, buatlah keduanya dapat menukar nilai dari 3 variabel.)

```C++
#include <iostream>
using namespace std;

void tukarPointer(int *a, int *b, int *c) {
    int temp;

    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

void tukarReference(int &a, int &b, int &c) {
    int temp;

    temp = a;
    a = b;
    b = c;
    c = temp;
}

int main() {
    int a = 10, b = 20, c = 30;

    cout << "Nilai awal:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    tukarPointer(&a, &b, &c);

    cout << "\nSetelah ditukar menggunakan pointer:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    tukarReference(a, b, c);

    cout << "\nSetelah ditukar menggunakan reference:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/AlifRizki30/109082530004_ALIF-RIZKI-PANGESTU_struktur-data/blob/main/MODUL%202/OUTPUT/OUTPUT%202%20M2.png)

Program ini digunakan untuk menukar nilai tiga variabel menggunakan pointer dan reference, lalu menampilkan hasil pertukarannya.


### 3. (Buatlah program yang dapat mencari nilai minimum, maksimum, dan rata – rata dari array tersebut! Kerjakan soal dengan ketentuan )

```C++
#include <iostream>
using namespace std;

#define MAX 10

int nilaiMaksimum(int arr[], int n) {
    int maks = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maks) {
            maks = arr[i];
        }
    }

    return maks;
}

int nilaiMinimum(int arr[], int n) {
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

void hitungRataRata(int arr[], int n, float &rata) {
    int jumlah = 0;

    for (int i = 0; i < n; i++) {
        jumlah += arr[i];
    }

    rata = (float)jumlah / n;
}

void tampilArray(int arr[], int n) {
    cout << "Isi Array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    int arr[MAX] = {48, 2, 7, 21, 5, 20, 77, 9, 10, 1};
    int pilihan;
    float rata;

    do {
        cout << "\n--- Menu Program Array ---\n";
        cout << "1. Tampilkan isi array\n";
        cout << "2. Cari nilai maksimum\n";
        cout << "3. Cari nilai minimum\n";
        cout << "4. Hitung nilai rata-rata\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tampilArray(arr, MAX);
                break;

            case 2:
                cout << "Nilai maksimum = "
                     << nilaiMaksimum(arr, MAX) << endl;
                break;

            case 3:
                cout << "Nilai minimum = "
                     << nilaiMinimum(arr, MAX) << endl;
                break;

            case 4:
                hitungRataRata(arr, MAX, rata);
                cout << "Nilai rata-rata = " << rata << endl;
                break;

            case 5:
                cout << "Program selesai.\n";
                break;

            default:
                cout << "Pilihan tidak tersedia.\n";
        }

    } while (pilihan != 5);

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