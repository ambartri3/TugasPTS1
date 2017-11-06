#include <iostream>
using namespace std;

int main() {
	int TG;
	int LB;
	int AL;
	int LU;
	char INS;
	int HS;
	
	cout <<" Ketik P untuk menghitung persegi \n";
		cout <<" Ketik S untuk menghitung Segitiga \n";
		cout<<"\n";
		cout<<"\n";
		cout <<"TENTUKAN PILIHANMU SEKARANG       :";
		cin >> INS;
		
		if (INS =='P'||INS=='p')
		{
			cout <<"Masukan TINGGI  :";
			cin >> TG;
			cout <<"masukan LEBAR	:";
			cin>>LB;
			HS=TG*LB;
			cout <<"LUAS PERSEGI PANJANG ADALAH :"<<HS;
		}
}

