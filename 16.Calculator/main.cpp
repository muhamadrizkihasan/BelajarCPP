#include <iostream>

using namespace std;

int main(){
    float a,b,hasil;
    char aritmatika;

    cout << "Selamat datang di program calculator" << endl << endl;

    //Masukan input data user
    cout << "Masukan angka pertama: ";
    cin >> a;
    cout << "Pilih operator +,-,/,*: ";
    cin >> aritmatika;
    cout << "Masukan angka kedua: ";
    cin >> b;

    cout << "Hasil perhitungan: ";
    cout << a << aritmatika << b;

    if (aritmatika == '5+'){
        hasil = a + b;
    }else if (aritmatika == '-'){
        hasil = a - b;
    }else if (aritmatika == '/'){
        hasil = a / b;
    }else if (aritmatika == '*'){
        hasil = a * b;
    }else {
        cout << "Operator anda salah" << endl;
    }
    cout << " = " << hasil << endl;
    
    cin.get();
    return 0;
}