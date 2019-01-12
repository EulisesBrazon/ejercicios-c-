#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	double ca,co;
	cout<<"Introdusca la longitud del primer cateto"<<endl;
	cin>>ca;
	cout<<"Introdusca la longitud del segundo cateto"<<endl;
	cin>>co;
	cout<<"la longitud de la hipotenusa es de "<<sqrt((co*co)+(ca*ca))<<" unidades"<<endl;
	getch();
	return 0;
}
