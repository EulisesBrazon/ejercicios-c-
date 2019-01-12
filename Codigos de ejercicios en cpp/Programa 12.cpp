#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	double L1,L2,L3,n=1,Mayor;
	cout<<"Ingrese el primer lado del triangulo"<<endl;
	cin>>L1;
	cout<<"Ingrese el segundo lado del triangulo"<<endl;
	cin>>L2;
	cout<<"Ingrese el tercer lado del triangulo"<<endl;
	cin>>L3;
	if((L1>L2)&&(L1>L3))
		Mayor=L1;
	else if(L2>L3)
		Mayor=L2;
	else
		Mayor=L3;
	if(Mayor==L1)
    {
		if((L2+L3)<=L1)
		{
			cout<<"el triangulo es invalido"<<endl;
			n=0;
		}		    
	}else if(Mayor==L2)
	{
		if((L1+L3)<=L2)
		{
			cout<<"el triangulo es invalido"<<endl;
			n=0;
		}	
	}else if(Mayor==L3)
	{
		if((L1+L2)<=L3)
		{
			cout<<"el triangulo es invalido"<<endl;
			n=0;
		}			
	}
	if (n==1)
	{
	    if ((L1==L2)&&(L2==L3))
	     	cout<<"Es un triangulo equilatero"<<endl;
	    else if(L1!=L2&&L1!=L3&&L3!=L2)
		    cout<<"Es un triangulo escaleno"<<endl;
	    else
	        cout<<"Es un triangulo isosceles"<<endl;
    }
	getch();
	return 0;
}
