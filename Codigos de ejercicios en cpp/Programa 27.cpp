#include<iostream>
#include<conio.h>
using namespace std;
//determinar si un numero es capicua
unsigned long  reves(unsigned long  num)
{
	int i,reves=0;
	for(i=0;num%10>0;i++)
	{
		reves=(reves*10)+num%10;
		num=num/10;
	}
	return reves;
}

int main()
{
	unsigned long num;
	cout<<"Ingrese un numero "<<endl;
	cin>>num;
	
	if(reves(num)==num)
		cout<<"El numero "<<num<<" es capicua"<<endl;
    else if(reves(num)!=num)
	    cout<<"El numero "<<num<<" no es capicua"<<endl;
	else
	    cout<<"Error buelva a intentarlo"<<endl;
	
	getch();
	return 0;
}
