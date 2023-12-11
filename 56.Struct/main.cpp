#include <iostream>
#include <string>
using namespace std;

struct buah{
    string warna;
    float berat;
    int harga;
    string rasa;
};

int main(){
    buah apel;
    buah jeruk;

    apel.warna = "Merah";
    apel.berat = 250.50f;
    apel.harga = 50000;
    apel.rasa = "Manis";

    jeruk.warna = "Oren";
    jeruk.berat = 150.0f;
    jeruk.harga = 20000;
    jeruk.rasa = "Asam";

    cout << " Apel " << endl;
    cout << "-" << apel.warna << endl;
    cout << "-" << apel.berat << endl;
    cout << "-" << apel.harga << endl;
    cout << "-" << apel.rasa << endl;

    cout << endl << " jeruk " << endl;
    cout << "-" << jeruk.warna << endl;
    cout << "-" << jeruk.berat << endl;
    cout << "-" << jeruk.harga << endl;
    cout << "-" << jeruk.rasa << endl;
}