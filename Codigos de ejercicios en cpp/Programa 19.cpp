#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
long fact(int n)
{
	if(n==0)
	    return 1;
	return n*fact(n-1);
}
int main()
{
	double m,n;
	cout<<"Ingrese cuantos elementos seran evaluados"<<endl;
	cin>>m;
	do
	{
		cout<<"Ingrese el numero de los grupos"<<endl;
        cin>>n;
	}while(n>m);
    cout<<"EL numero posible de combinaciones es de "<<fact(m)/(fact(n)*fact(m-n))<<endl;

	getch();
	return 0;
}
