#include <iostream>
#include "otong.h"

void fungsi(){
    std::cout << "Ini Adalah Fungsi biasa" << std::endl;
}
int main(){
    fungsi();
    std::cout << otong::b << std::endl;
    otong::fungsi();
    otong::cout(100);
}