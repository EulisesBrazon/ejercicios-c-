#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double ht,th,imp;
	cout<<"Ingrese la tarifa horaria del trabajdor"<<endl;
	cin>>th;
	cout<<"Ingrese el numero de horas trabajada"<<endl;
	cin>>ht;	
	cout<<"Ingrese el numero del porcentaje del impuesto"<<endl;
	cin>>imp;
	imp=imp/100;
	cout<<"la paga neta del trabajador es de "<<(ht*th)-(ht*th*imp)<<endl;
	
	getch();
	return 0;
}
