#include <iostream>
using namespace std;

int kuadrat(int x){
    int y;
    y = x * x;
    return y; 
}
//Worker
void tampilkan(int input){
    cout << "Menampilkan Dengan Void\n";
    cout << input << endl;
}
int main(){
    int input,hasil1;
    cout << "NIlai Kuadrat Dari: ";
    cin >> input;

    hasil1 = kuadrat(input);
    tampilkan(hasil1);
    return 0;
}