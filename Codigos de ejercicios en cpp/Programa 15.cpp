#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,div,i;
	unsigned long suma;
	do
	{
		cout<<"Ingrese un valor entero positio "<<endl;
		cin>>num;
	}while(num<=0);
	if(num>=2)
	{
		cout<<"1 = 1"<<endl;
	    cout<<"2 = 2"<<endl;
	    suma=3;
	}else
	{
		cout<<"1 = 1"<<endl;
		suma=1;
	}
	
	for(i=3;i<=num;i++)
	{
		div=2;
		while(i%div!=0)
       	{ 
	     	div++;
    	}
    	if(i%2==0)
    	{
    		suma=suma+(i*i);
    		cout<<i<<" = "<<i*i<<endl;
		}else if(div==i)
		{
			suma=suma+(i);
			cout<<i<<" = "<<i<<endl;
		}else if(i%2!=0)
		{
			suma=suma+(i*i*i);
			cout<<i<<" = "<<i*i*i<<endl; 
		}
	}
	cout<<"la suma es igual a "<<suma<<endl;
	getch();
	return 0;
}
