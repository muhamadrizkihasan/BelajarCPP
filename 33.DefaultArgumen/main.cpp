#include <iostream>
using namespace std;

// Fungsi Prototipe
double volume_kubus(double p = 1,double l = 1,double t = 1);

int main(){
    cout << " Volume Kubus 1: " << volume_kubus(3,4,5) << endl;
    cout << " Volume Kubus 2: " << volume_kubus(3,4) << endl;
    cout << " Volume Kubus 3: " << volume_kubus(3) << endl;
    cout << " Volume Kubus 4: " << volume_kubus() << endl;
}
//Default Argument/Nilai Standarnya
double volume_kubus(double p,double l,double t){
    return p * l * t;
}