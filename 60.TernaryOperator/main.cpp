#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b;
    string hasil1,hasil2,output;

    hasil1 = "otong";
    hasil2 = "ucup";

    a = 5;
    cout << "Masukan Angka: ";
    cin >> b;

    if(a < b){
        output = hasil1;
    }else{
        output = hasil2;
    }
    
    
    output = (a < b) ? hasil1 : hasil2;
    cout << output << endl;
}