#include <iostream>
#include <string>
using namespace std;

int main(){
    string kalimat_1("aku suka kamu suka, siapa? dia!");
    string kalimat_2("wakanda foevah!!!");

    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl << endl;

    //Swap String
    kalimat_1.swap(kalimat_2);
    cout << "Swap String" << endl;
    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl << endl;

    //Replace, Mengganti string
    kalimat_2.replace(
      kalimat_1.find("ah"),
      2,
      "er"  
    );

    cout << "Reflace String" << endl;
    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl << endl;

    //Insert String
    kalimat_1.insert(8,"dan hatiku ");
    cout << "Insert String" << endl;
    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;
}