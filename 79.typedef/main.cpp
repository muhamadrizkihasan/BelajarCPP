#include <iostream>
using namespace std;

int main(){
    // typedef adalah memberikan alias untuk tipedata
    typedef int I;
    typedef int ivector2D[2];
    typedef unsigned long ulong;
    typedef double vector[2];

    using numbers = double;

    I a = 10;
    ivector2D b = {1,2};
    ulong c = 121974812;
    vector d = {10,80};
    double e = 10.31313;

    cout << "Nilai a: " << a << endl;
    cout << "nilai b: " << b[0] << " Dan " << b[1] << endl;
    cout << "Nilai c: " << c << endl;
    cout << "nilai d: " << b[0] << " Dan " << d[1] << endl;
    cout << "Nilai e: " << e << endl;
}