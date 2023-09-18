#include <iostream>

using namespace std;

int main(){
    int a = 1;
    int b = 1;

    // 1.Increment:
    //Postincrement
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;
    //Preincrement
    cout << b << endl;
    cout << ++b << endl;
    cout << b << endl << endl;

    // 2.Decrement:
    //Postdecrement
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl;
    //Predecrement
    cout << b << endl;
    cout << --b << endl;
    cout << b << endl;

    cin.get();
    return 0;
}