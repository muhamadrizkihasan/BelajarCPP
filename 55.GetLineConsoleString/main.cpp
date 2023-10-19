#include <iostream>
#include <string>
using namespace std;

int main(){
    string kalimat_input;

    //getline(cin, variabel)
    cout << "Masukan Kalimat: ";
    getline(cin,kalimat_input);
    cout << endl << "Input Data: " << kalimat_input << endl << endl;

    //Jumlah Kata Dari Input
    int posisi = 0;
    int jumlah = 0;
    while(true){
        posisi = kalimat_input.find(" ",posisi + 1);
        jumlah++;
        if(posisi < 0){
            break;
        }
    }
    cout << "Jumlah Kata: " << jumlah << endl;
}