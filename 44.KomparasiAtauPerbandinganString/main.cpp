#include <iostream>
#include <string>
using namespace std;

int main(){
    //APerbandingan String
    string input;
    string nama_rahasia("asep");

    while(true){
        cout << "Tebak Nama: ";
        cin >> input;
        cout << input << endl;
        if(input == nama_rahasia){
            cout << "Tebakan Anda Benar!!!" << endl;
            break;
        }
        cout << "Tebakan Anda Salah!" << endl;
    }
    cout << "Program Selesai" << endl;

    cin.get();
    return 0;
}