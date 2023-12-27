#include <iostream>
#define ID 1

#if ID == 1
    #define LANG "Indonesia"
#else 
    #define LANG "Inggris"
#endif

using namespace std;
int main(){
    cout << "Bahasa Dipilih: " << LANG << endl;
}