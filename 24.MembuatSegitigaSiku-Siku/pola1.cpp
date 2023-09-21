#include <iostream>

using namespace std;

int main(){
    int n;
    
    cout << "Masukan Panjang Pola: ";
    cin >> n;

    cout << "Pola 1\n";
    for(int i=1; i<=n; i++){
        for (int x=1; x<=i; x++){
            cout << "*";
        }cout << endl;
    }

    cout << "Pola 2\n";
    for(int i=1; i<=n; i++){
        for (int x=n; x>=i; x--){
            cout << "*";
        }cout << endl;
    }

    cout << "Pola 3\n";
    for(int i=1; i<=n; i++){
        for (int x=1; x<i; x++){
            cout << " ";
        }for(int y=n; y>=i; y--){
            cout << "*";
        }cout << endl;
    }

    cout << "Pola 4\n";
    for(int i=1; i<=n; i++){
        for (int x=n; x>i; x--){
            cout << " ";
        }for(int y=1; y<=i; y++){
            cout << "*";
        }cout << endl;
    }
    
}