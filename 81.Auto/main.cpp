#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

template<typename T, typename U>
auto max(T a, U b){
    return (a > b) ? T(a) : U(b);
}

int main(){
    int a = 7;
    string b = "test";
    double c = 15.131;
    float d = 16.5f;
    auto e = max(c,a);

    cout << a << "\t tipe: " << typeid(a).name() << endl;
    cout << b << "\t tipe: " << typeid(b).name() << endl;
    cout << c << "\t tipe: " << typeid(c).name() << endl;
    cout << d << "\t tipe: " << typeid(d).name() << endl;
    cout << e << "\t tipe: " << typeid(e).name() << endl;
}