#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double num;
	int i,n;
	do{
		cout<<"Introdusca en numero de la tabla a generar"<<endl;
		cout<<"1- tabla de suma"<<endl;
		cout<<"2- tabla de resta"<<endl;
		cout<<"3- tabla de multiplicar"<<endl;
		cout<<"4- tabla de dividir"<<endl;
		cin>>n;
	}while(n<1||n>4);
	cout<<"Ingrese un numero"<<endl;
	cin>>num;
	if (n==1)
	{
		for(i=0;i<12;i++)
			cout<<num<<" + "<<i<<" = "<<num+i<<endl;
	}else if(n==2)
	{
		for(i=0;i<12;i++)
			cout<<num<<" - "<<i<<" = "<<num-i<<endl;
	}else if(n==3)
	{
		for(i=0;i<12;i++)
			cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	} else
	{
		
		for(i=0;i<12;i++)
			cout<<num<<" / "<<i<<" = "<<num/i<<endl;		
	}
	
	getch();
	return 0;
}
