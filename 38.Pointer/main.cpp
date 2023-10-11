#include <iostream>
using namespace std;

int main(){
    int a = 5;

    //Pointer
    int *aPtr = nullptr;
    aPtr = &a;

    //int a Mempunyai Nilai Dan Address ( Alamat )
    cout << "Nilai dari a: " << a << endl;
    cout << "Alamat Dari a: " << aPtr << endl;

    //Dereferencing, Mengambil Data Dari Sebuah Pointer
    a = 10;
    cout << "Mengambil Nilai Dari Pointer aPtr: " << aPtr << endl; 
}