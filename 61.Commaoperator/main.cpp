#include <iostream>
#include <string>
using namespace std;

void printData(int val){
    cout << val << endl;
}
int main(){
    //Comma biasa
    int a,b,c,d;

    //Comma operator
    a = ( b=4 , printData(b) , c=6 ,printData(c) , (b+c) );
    cout << a << endl;
}