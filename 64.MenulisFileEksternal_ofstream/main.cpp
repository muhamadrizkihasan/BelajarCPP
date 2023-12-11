#include <iostream>
#include <fstream> //ofstream,ifstream,fstream
using namespace std;

int main(){
    ofstream myFile;

    // ios::out = Default Operasi Output;
    // ios::app - Menuliskan Pada Akhir Baris;
    // ios::trunc = Defaul, Membuat File Jika Tidak Ada Akan Membuat File Baru;

    myFile.open("Data1.txt", ios::out); 
    myFile << "\nMenuliskan Baris Baru Pada Data 1";
    myFile.close();

    myFile.open("Data2.txt", ios::trunc);
    myFile << "\nMenuliskan Baris Baru Pada Data 2";
    myFile.close(); 

    myFile.open("Data3.txt", ios::app); // append
    myFile << "\nMenuliskan Baris Baru Pada Data 3";
    myFile.close(); 
}