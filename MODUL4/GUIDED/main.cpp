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