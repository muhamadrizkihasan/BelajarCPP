#include <iostream>
using namespace std;

int main(){
    //Variabel
    int a = 5;
    cout << "Address Dari a: " << &a << endl;
    cout << "  Nilai Dari a: " << a << endl << endl;

    //Reference
    int &b = a;
    cout << "Address Dari b: " << b << endl;
    cout << "  Nilai Dari b: " << &b << endl << endl;

    b = 10;
    cout << "  Nilai Dari a: " << b << endl;
    cout << "  Nilai Dari b: " << b << endl << endl;

    b = 20;
    cout << "  Nilai Dari a: " << b << endl;
    cout << "  Nilai Dari b: " << b << endl << endl;
}