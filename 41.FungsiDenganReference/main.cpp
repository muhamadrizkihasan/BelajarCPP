#include <iostream>
using namespace std;

void fungsi(int &);
void kuadrat(int &);

int main(){
    int a = 5;
    cout << "Address a: " << &a << endl;
    cout << "  nilai a: " << a << endl;

    //Fungsi(a);
    kuadrat(a);
    cout << "  nilai a: " << a << endl;

    cin.get();
    return 0;
}
void fungsi(int &b){
    b = 10;
    cout << "Address b: " << &b << endl;
    cout << "  nilai b: " << b << endl;
}
void kuadrat(int &nilaiRef){
    nilaiRef = nilaiRef * nilaiRef;
}