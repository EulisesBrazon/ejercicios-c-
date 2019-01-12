#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,aux,i,r=0;
	do
	{
		cout<<"ingresar un numero entero de tres digitos positivo"<<endl;
	    cin>>num;
	}
	while(num<100||num>999);
	aux=num;
	for(i=0;i<3;i++)
	{
		r=(r*10)+aux%10;
		aux=aux/10;
	}
	cout<<"El reves del numero "<<num<<" es: "<<r<<endl;
	getch();
	return 0;
}
