#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	int c1=0,c2=0;
	char palabra1[30],palabra2[30];
	cout<<"Ingrese la primera palabra"<<endl;
	cin>>palabra1;
	cout<<"Ingrese la segunda palabra"<<endl;
	cin>>palabra2;
	while(palabra1[c1]!='\0')
	{
		c1++;
	}
	while(palabra2[c2]!='\0')
	{
		c2++;
	}
	if(c1>c2)
		cout<<"la palabra "<<palabra1<<" es mas larga por "<<c1-c2<<" letra(s) "<<endl;
	else if(c1<c2)
		cout<<"la palabra "<<palabra2<<" es mas larga por "<<c2-c1<<" letra(s) "<<endl;
	else
		cout<<"Ambas palabras tienen el mismo numero de letras "<<endl;
	getch();
	return 0;
}
