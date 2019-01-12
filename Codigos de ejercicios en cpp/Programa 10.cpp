#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char caracter[1];
	cout<<"ingrese un caracter"<<endl;
	cin>>caracter;
	if(caracter[0]>='0' && caracter[0]<='9')
	{
		cout<<caracter[0]<<" es un numero"<<endl;
	} 
	else if (caracter[0]>='A' && caracter[0]<='z')
	{
		if(caracter[0]>='a' && caracter[0]<='z')
		{
			cout<<caracter[0]<<" es una letra minuscula"<<endl;
		}else
		cout<<caracter[0]<<" es una letra mayuscula"<<endl;		
	}else
	cout<<caracter[0]<<" no es ni un numero ni una letra"<<endl;
	getch();
	return 0;
}
