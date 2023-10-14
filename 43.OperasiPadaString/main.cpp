#include <iostream>
#include <string>
using namespace std;

int main(){
    string kata("cat");
    //Menampilkan Data String
    cout << kata << endl;

    //Mengambil Karakter Berdasarkan Index
    cout << "Indek Ke-0: " << kata[0] << endl;
    cout << "Indek Ke-1: " << kata[1] << endl;
    cout << "Indek Ke-2: " << kata[2] << endl;

    //Merubah Karakter Pada Index
    kata[1] = 'e';
    cout << kata << endl;

    //Menyambung, Concatenation
    string kata2(kata + "ar");
    cout << kata2 << endl;

    string kata3("Membahana");
    kata.append(" " + kata3);
    cout << kata2 << endl;

    string kata4("Uhuyyy~~");
    kata2 += " " + kata4;
    cout << kata2 << endl;

    cin.get();
    return 0;
}