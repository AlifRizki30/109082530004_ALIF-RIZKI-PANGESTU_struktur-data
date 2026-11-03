#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack <string> gudang;
    string kode;
    int jumlah = 0;

    cout << "=== PROGRAM GUDANG KOTAK ===" << endl;
    while (jumlah < 5){
        cout << " Masukan kode kotak ke-" << jumlah + 1 << ": ";
        cin >> kode;

        stack <string> sementara = gudang;
        bool sama = false;

        while (!sementara.empty()){
            if (sementara.top() == kode)
            {
                sama = true;
                break;
            }
            sementara.pop();
        }

        if(sama){
            cout << " Kode kotak sudah digunakan!" << endl;
        }else{
            gudang.push(kode);
            jumlah++;
        }
    }
    cout << "\nKotak berhasil tersimpan." << endl;
    for (int i = 0; i < 3; i++){
        if (!gudang.empty()){
            cout << "Kotak yag diambil" << gudang.top() << endl;
            gudang.pop();
        }else{
            cout << "Gudang kosong tidak ada kotak yang bisa diambil." << endl;
        }
    }
    cout << "\n=== KOTAK YANG MASIH TERSIMPAN ===" << endl;
    if (gudang.empty()){
        cout << "Gudang kosong." << endl;
    }else{
        stack<string> sementara = gudang;
        
        while(!sementara.empty()){
            cout << sementara.top() << endl;
            sementara.pop();
        }
    }
    return 0;
}