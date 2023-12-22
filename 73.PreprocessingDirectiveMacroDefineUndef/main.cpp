// Preprocessing Directive
#include <iostream>

// Macro Merubah Nilai Dengan Nama
#define PI 3.141572
#define BAHASA "Indonesial"

// Macro Untuk Fungsi
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A>B) ? A:B)

//Akhir Dari Preprocessing Directive
using namespace std;
int main(){
    cout << "Nilai PI: " << PI << endl;
    cout << "Bahasa: " << BAHASA << endl;
    cout << "Kuadrat: " << KUADRAT(15) << endl;
    cout << "Max: " << MAX(15,10) << endl;

    #undef BAHASA
    #define BAHASA "Inggris"
    cout << BAHASA << endl;

}