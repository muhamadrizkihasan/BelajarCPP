#include <iostream>

using namespace std;

int main(){
    //Assignment
    int a = 10;

    cout << "Nilai awal dari a adalah: " << a;
    cout << endl << "============================" << endl;

    //Assignment Operator
    //Variabel = Variabel Operator Ekspresi
    //   a.    =.   a.       -        3
    //Variabel Operator= Ekspresi
    //   a.    =.   a.      -

    a += 3;
    cout << "Ditambah 3 menjadi: " << a << endl;
    a -= 3;
    cout << "Dikurang 3 menjadi: " << a << endl;
    a /= 3;
    cout << "Dibagi 3 menjadi: " << a << endl;
    a *= 3;
    cout << "Dikali 3 menjadi: " << a << endl;
    a %= 3;
    cout << "Dimodulus 3 menjadi: " << a << endl;

    cin.get();
    return 0;
}