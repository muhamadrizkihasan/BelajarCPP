#include <iostream>
#include <string>
using namespace std;

int main(){
    //Array Char Tidak Bisa Kita Tambah, Fiks Karena Array
    string kata("cat");
    cout << kata << endl << endl;

    string data;
    cout << "Masukan Kata: ";
    cin >> data;
    cout << "Data Yang Dimasukan Adalah: "  << data << endl;

    cin.get();
    return 0;
}