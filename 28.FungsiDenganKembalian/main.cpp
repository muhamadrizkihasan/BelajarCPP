#include <iostream>
using namespace std;

int kuadrat(int x){
    int y;
    y = x * x;
    return y; 
}
int tambah(int a, int b){
    int c;
    c = a + b;
    return c;
}
int main(){
    int input,hasil1,hasil2,a,b;
    cout << "NIlai Kuadrat Dari: ";
    cin >> input;

    hasil1 = kuadrat(input);
    cout << hasil1 << endl;

    cout << "Masukan Nilai a: ";
    cin >> a;
    cout << "Masukan Nilai b: ";
    cin >> b;

    hasil2 = tambah(a,b);
    cout << hasil2 << endl;

    return 0;
}