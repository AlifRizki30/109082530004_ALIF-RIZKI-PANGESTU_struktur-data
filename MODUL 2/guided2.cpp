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