#include <iostream>
using namespace std;

void fungsi(int *);
void kuadrat(int *);

int main(){
    int a = 5;
    cout << "Address a: " << &a << endl;
    cout << "  nilai a: " << a << endl;

    //Fungsi(&a); // Fungsi Dengan Input Pointer
    kuadrat (&a);
    cout << "  nilai a: " << a << endl;
}
void fungsi(int *b){
    cout << "Address b: " << b << endl;
    cout << "  nilai b: " << *b << endl;
}
void kuadrat(int *valPtr){
    *valPtr = (*valPtr) * (*valPtr);
}