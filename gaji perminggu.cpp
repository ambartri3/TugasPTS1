#include <iostream>
using namespace std;

int main(){ 
	float jk, le, gtot, gp, gb,ul, jam,pa;
	cout<<"Lama Kerja Karyawan    : "; 
	cin>> jk;
	cout<<"Gaji Perjam Karyawan   : "; 
	cin>>gp;
	
if (jk>40){
	le=jk-40;
	jam=le*1.5;
	ul=gp*1.5;
	pa=ul*0.15;
	gtot=gp-pa;
	gb=gtot-(jk*40)+((gp-40)*jk*1.5);
	}
}
