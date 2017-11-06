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
		else if (INS=='S'||INS=='s')
		{
			cout << "Masukan ALAS	:";
			cin>>AL;
			cout <<"Masukan TINGGI	:";
			HS= 0.5*AL*TG;
			cout <<"LUAS SEGI TIGA ADALAH :"<<HS;
		}
			else 
		cout <<"PILIHANYA HANYA Ss dan Pp YANG KMAU KETIK   :" <<INS; cout<<"\n";
		cout <<"TIDAK ADA DIPILIHAN KAMPRET";
}

