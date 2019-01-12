#include<iostream>
#include<conio.h>
#define pi 3.1415926535
using namespace std;
int main()
{
	float radio;
	cout<<"Ingrese el radio del circulo"<<endl;
	cin>>radio;
	cout<<"el perimetro es de "<<2*pi*radio<<" y su area es de "<<radio*radio*pi<<endl;
	getch();
	return 0;
}
