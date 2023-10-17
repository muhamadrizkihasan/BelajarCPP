#include <iostream>
#include <string>
using namespace std;

int main(){
    string kalimat_1("Ujang Suka Berolahraga Agar Sehat");
    string kalimat_2("Asep Suka Makan Ubi Di Pagi Hari");

    cout << "1:" << kalimat_1 << endl;
    cout << "2:" << kalimat_2 << endl;

    //Substring, Mengambil String Di Tengah-Tengah
    //Substindex,Panjang
    cout << kalimat_1.substr(11,11) << " ";
    cout << kalimat_2.substr(16.3) << endl;

    //Mencari Posisi Dari Substring
    cout << "Posisi Berolahraga: ";
    cout << kalimat_1.find("Berolahraga") << endl;
    cout << "Posisi Ubi: ";
    cout << kalimat_2.find("Ubi") << endl;

    int a = kalimat_1.find("a");
    cout << a << endl;
    cout << kalimat_1.find("a", a + 1) << endl;

    //Mencari Posisinya Dari Belakang -> rfind
    cout << kalimat_2.rfind("1") << endl;
}