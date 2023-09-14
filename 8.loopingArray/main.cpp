#include <iostream>
#include <array>

using namespace std;

     /*looping untuk array di c++11 keatas
        for(declarasi variabel : array){
            statement
        }
    */

int main(){
   int arrayNilai[10] = {0,1,2,3,4,5,6,7,8,9};

   for(int nilai : arrayNilai){
    cout << "address " << &nilai << " nilainya: " << nilai << endl;
    nilai = 1; //tidak merubah array
   }

   cout << endl;
   //memanipulasi array dengan menggunakan referensi
   for(int nilaiRef : arrayNilai){
    nilaiRef *= 2;
    cout << "address " << &nilaiRef << " nilainya: " << nilaiRef << endl;
   }

//    cout << endl;
//    for(int nilaiRef : arrayNilai){
//     cout << "address " << &nilaiRef << " nilainya: " << nilaiRef << endl;
//    }

   cin.get();
   return 0;
}