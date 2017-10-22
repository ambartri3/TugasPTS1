#include <iostream>
using namespace std;

int main () {
	double ton=35273.92;
	double berat;
	cout << "masukan berat dalam ounce : ";
	cin >> berat;
	
	double ounce = 1/ton;
	double beratTon = berat*ounce;
	
	double jumlah = beratTon/9;
	cout << "jumlah dalam satuan Ton : "<<beratTon<<endl;
	cout << "jumlah dalam kotak sereal : "<<jumlah<<endl;
	
}
