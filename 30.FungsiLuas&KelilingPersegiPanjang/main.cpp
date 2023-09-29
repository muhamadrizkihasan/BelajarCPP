#include <iostream>
using namespace std;

//Fungsi Menghitung Luas Persegi Panjang
double hitung_luas(double p, double l){
    double luas = p * l;
    return luas;
}
//Fungsi Menghitung Keliling Persegi Panjang
double hitung_keliling(double p, double l){
    double keliling = p * l;
    return keliling;
}

void tampilkan_luas(double p, double l){
    cout << "Menggunakan void\n";
    cout << "Luasnya adalah: ";
    cout << hitung_luas(p,l) << endl;
}
void tampilkan_keliling(double p, double l){
    cout << "Menggunakan void\n";
    cout << "Luasnya adalah: ";
    cout << hitung_luas(p,l) << endl;
}
int main(){
    double panjang,lebar;
    cout << "Panjang: ";
    cin >> panjang;
    cout << "lebar: ";
    cin >> lebar;
    cout << endl;
    
    tampilkan_luas(panjang,lebar);
    tampilkan_keliling(panjang,lebar);
}