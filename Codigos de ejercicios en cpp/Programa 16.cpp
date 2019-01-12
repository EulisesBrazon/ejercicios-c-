#include<iostream>
#include<conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int num,div,i,primo=1,impar=1,par=0;
	/*do
	{
		cout<<"Ingrese un valor entero positio "<<endl;
		cin>>num;
	}while(num<=0);*/
	srand(time(NULL));
	num=rand()%100+3;
	for(i=3;i<=num;i++)
	{
		div=2;
		while(i%div!=0)
       	{ 
	     	div++;
    	}
    	if(i%2==0)
    	{
    		par=par+1;
		}
		if(div==i)
		{
			primo=primo+1;
		}
		if(i%2!=0)
		{
			impar=impar+1;
		}
	}
	printf("Numeros         Histograma\n");
	printf("primos   ");
	for(i=0;i<=primo;i++)
	{
		cout<<"|";
	}
	printf("\n");
	printf("pares    ");
	for(i=0;i<=par;i++)
	{
		printf("|");
	}
	printf("\n");
	printf("impares  ");
	for(i=0;i<=impar;i++)
	{
		printf("|");
	}
	printf("\n");
	cout<<"se evalueron los numeros del 1 al "<<num<<endl;
	getch();
	return 0;
}
