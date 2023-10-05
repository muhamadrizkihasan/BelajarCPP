#include <iostream>
using namespace std;

int pangkatIterasi(int a, int b){
    int hasil = a;
    for(int i=1; i<b; i++){
        hasil = hasil * b;
    }
    return hasil;
}
int pangkatRekursif(int a, int b){
    if( b<=1 ){
        cout << "Akhir Dari Rekursif\n";
        return a;
    }else{
        cout << "Rekursif\n";
        return a * pangkatRekursif(a,(b - 1));
    }
}
int main(){
    int a;
    int b;
    cout << "Angka: ";
    cin >> a;
    cout << "Pangkat: ";
    cin >> b;
    cout << "Hasil Iterasi = " << pangkatIterasi(a,b) << endl;
    cout << "Hasil Rekursif = " << pangkatRekursif(a,b) << endl;
    
    return 0;
}