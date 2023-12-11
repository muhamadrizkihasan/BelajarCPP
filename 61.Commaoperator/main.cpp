#include <iostream>
#include <string>
using namespace std;

void printData(int val){
    cout << val << endl;
}
int main(){
    //Comma Biasa
    int a,b,c;

    //Comma Operator
    a = ( b=4 , printData(b) , c=6 ,printData(c) , (b+c) );
    cout << a << endl;
}