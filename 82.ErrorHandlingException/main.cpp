#include <iostream>
#include <exception>
using namespace std;

// Macam-Macam Error:
// 1. Syntax Error
// 2. Linking Error
// 3. Non-Error
// 4. Runtime Error

int pembagian(int &num, int &denum){
    if(denum == 0){
    //throw overflow_error("Error: Pembagi Nol")
    throw "Error: Pembagi Nol";       
    }
    return num/denum;
}
int main(){
    int a,b,c;

    while(true){
        cout << "Num: ";
        cin >> a;        
        cout << "Denum: ";
        cin >> b;

        try{
            c = pembagian(a,b);
            cout << c << endl;
            // catch(exception &e)
        }catch(const char* e){
            // cout << e.what() << endl;
            cout << e << endl;
        }
    }
    cout << "Akhir Dari Program";
    return 0;
}
