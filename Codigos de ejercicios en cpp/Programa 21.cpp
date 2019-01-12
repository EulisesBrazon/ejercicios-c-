#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	int xo,xf;
	char u[10];
	cout<<"Ingrese la posicion final"<<endl;
	cin>>xf;
	cout<<"Ingrese la posicion inicial"<<endl;
	cin>>xo,
	cout<<"Ingrese la unidad utilizada"<<endl;
	cin>>u;
	cout<<"la distancia recorrida es de "<<xf-xo<<" "<<u<<endl;
	getch();
	return 0;
}
