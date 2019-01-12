#include<iostream>
#include<conio.h>
using namespace std;
double mayor(double p1,double p2,double p3)
{
	double x;
	if(p1>p2 && p1>p3)
	    x=p1;
	else if(p2>p1 && p2>p3)
	    x=p2;
	else
	    x=p3;
	return x;
}
int main()
{
	double p1,p2,p3;
	cout<<"Ingrese el valor de la primera pelicula"<<endl;
	cin>>p1;
	cout<<endl;
	cout<<"Ingrese el valor de la segunda pelicula"<<endl;
	cin>>p2;
	cout<<endl;
	cout<<"Ingrese el valor de la tercera pelicula"<<endl;
	cin>>p3;
	cout<<endl;
	cout<<"El valor a pagar es de "<<(p1+p2+p3)-mayor(p1,p2,p3)<<endl;
	
	getch();
	return 0;
}
