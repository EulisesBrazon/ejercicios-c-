#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
	double n,a;
	cout<<"Programa para resolver la derivada de la forma a(x)^n "<<endl;
	cout<<"ingrese el valor de la constante a"<<endl;
	cin>>a;
	cout<<"ingrese el del exponente n"<<endl;
	cin>>n;
	cout<<"La derivada de "<<a<<"(x)^"<<n<<" es :"<<endl;
	cout<<n*a<<"(x)^"<<n-1<<endl;	
	
	getch();
	return 0;
}
