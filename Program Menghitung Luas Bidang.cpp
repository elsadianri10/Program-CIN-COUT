#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int panjang, lebar;
	float luas;
	cout<<"Input Panjang	= ";
	cin>>panjang;
	cout<<"Input Lebar		= ";
	cin>>lebar;
	
	luas = panjang*lebar;
	
	cout<<"\nPanjang Persegi Panjang	= "<<panjang;
	cout<<"\nLebar Persegi Panjang		= "<<lebar;
	cout<<"\nLuas Persegi Panjang		= "<<luas;
	getch();
}
