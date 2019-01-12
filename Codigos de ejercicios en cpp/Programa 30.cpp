#include<iostream>
#include<stdio.h>
#include <string.h>
#include<conio.h>
#define tm 100
using namespace std;
int palabra(char oracion[tm])
{
	int p=0,i;
	for(i=0;i<tm;i++)
	{
		if(oracion[i]==' ' && oracion[i+1]!=' ')
		{
			p++;
		}
		
	}
	return p;
}

int main()
{
	char oracion[tm];	    
	cout<<"Ingrese una oracion"<<endl;
	gets(oracion);
	
	cout<<"La oracion tiene "<< palabra(oracion);
	
	if(palabra(oracion)==1)
	{
		cout<<" palabra"<<endl;
	}else
	{
		cout<<" palabras"<<endl;
	}
	
	getch();
	return 0;
}
