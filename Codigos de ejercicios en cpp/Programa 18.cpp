#include<iostream>
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
	int num;
	cout<<"Ingrese un numero para el calculo factorial"<<endl;
	cin>>num;
	cout<<"El factorial de "<<num<<" es: "<<fact(num)<<endl;
	getch();
	return 0;
}
