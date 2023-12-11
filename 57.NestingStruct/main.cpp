#include <iostream>
#include <string>
using namespace std;

struct aktor{
    string nama;
    int tahun_lahir;
};

struct film{
    string judul;
    string genre;
    int tahun;
    // Struct Actor
    aktor pemeran_1;
    aktor pemeran_2;
};

int main(){
    aktor aktor1, aktor2;
    film film1, film2;

    //Aktor 1W
    aktor1.nama = "Steven Ucok";
    aktor1.tahun_lahir = 1999;
    //Aktor 2
    aktor2.nama = "Michael Ujang";
    aktor2.tahun_lahir = 2001;

    //Film
    film1.judul = "Pengabdi Wakanda";
    film1.genre = "Dokumenter";
    film1.tahun = 2018;
    film1.pemeran_1 =  aktor1; 
    film1.pemeran_2 =  aktor2;

    film2.judul = "Dilanda Hujan";
    film2.genre = "Romantis";
    film2.tahun = 2022;
    film2.pemeran_1 =  aktor1; 

    cout << film1.judul << endl;
    cout << "Genre: " << film1.genre << endl;
    cout << "Tahun: " << film1.tahun << endl << "Aktor: \n";
    cout << film1.pemeran_1.nama << endl;
    cout << film1.pemeran_2.nama << endl << endl;

    cout << film2.judul << endl;
    cout << "Genre: " << film2.genre << endl;
    cout << "Tahun: " << film2.tahun << endl << "Aktor: ";
    cout << film2.pemeran_1.nama << endl;
}