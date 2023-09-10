#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	// int a = 6;
	// int b = 4;
	// int hasil;
	// // operatornya +, -, *, /, %
	// // penjumlahan
	// hasil = a + b;
	// cout << a << " + " << b << " = " << hasil << endl;

	// // pengurangan
	// hasil = a - b;
	// cout << a << " - " << b << " = " << hasil << endl;

	// // perkalian
	// hasil = a * b;
	// cout << a << " x " << b << " = " << hasil << endl;

	// // pembagian
	// hasil = a / b;
	// cout << a << " / " << b << " = " << hasil << endl;

	// // modulus
	// hasil = a % b;
	// cout << a << " % " << b << " = " << hasil << endl;

	// // urutan eksekusi;

	// hasil = a + b * a;
	// cout << hasil << endl;

	int angka, s, p, p2, r, r2;

	cout << "Masukan Angka = ";
	cin >> angka;

	s = angka % 10;
	p = angka % 100;
	p2 = round(p / 10);
	r = round(angka / 100);
	r2 = round(angka / 1000);

	//  ceil((marks1 + marks2 + marks3)/3)

	cout << "satuan " << s << endl;
	cout << "puluhan " << p2 << endl;
	cout << "ratusan " << r << endl;

	cin.get();
	return 0;
}