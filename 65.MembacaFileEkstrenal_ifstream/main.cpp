#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream myFile;
    string output,buffer;
    bool isData = false;
    int no;
    string nama;

    // ios::in
    // ios::ate = Mulai Dari Akhir File
    // ios::binary

    myFile.open("data.txt", ios::in);
    while(!isData){
        getline(myFile,buffer);
        output.append("\n" + buffer);
        if(buffer == "Data"){
            isData = true;
        }    
    }cout << output << endl;

    getline(myFile,buffer);
    cout << buffer << endl;
    int jumlah_data = 0;
    while(!myFile.eof()){
        myFile >> no;
        myFile >> nama;
        cout << no << "   " << nama << endl;
        jumlah_data++;
    }cout << "Jumlah Data: " << jumlah_data << endl;  
}