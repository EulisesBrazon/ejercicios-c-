#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n1[4],n2[4],n3[4],n4[4],n5[4],nT[5],i,j,aux,orden[5];
	int posicion[] = {1,2,3,4,5};
	for(i=0;i<4;i++)
	{
		cout<<"Ingrese la nota "<< i+1<<" del estidiante "<<1<<endl;
		cin>>n1[i];
	}
	for(i=0;i<4;i++)
	{
		cout<<"Ingrese la nota "<< i+1<<" del estidiante "<<2<<endl;
		cin>>n2[i];
	}
	for(i=0;i<4;i++)
	{
		cout<<"Ingrese la nota "<< i+1<<" del estidiante "<<3<<endl;
		cin>>n3[i];
	}
	for(i=0;i<4;i++)
	{
		cout<<"Ingrese la nota "<< i+1<<" del estidiante "<<4<<endl;
		cin>>n4[i];
	}
	for(i=0;i<4;i++)
	{
		cout<<"Ingrese la nota "<< i+1<<" del estidiante "<<5<<endl;
		cin>>n5[i];
	}
	nT[0]=(n1[0]+n1[1]+n1[2]+n1[3])/4;
	nT[1]=(n2[0]+n2[1]+n2[2]+n2[3])/4;
	nT[2]=(n3[0]+n3[1]+n3[2]+n3[3])/4;
	nT[3]=(n4[0]+n4[1]+n4[2]+n4[3])/4;
	nT[4]=(n5[0]+n5[1]+n5[2]+n5[3])/4;
	
	for(i=0;i<5;i++)
	{
		orden[i]=nT[i];
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(orden[j]>orden[j+1])
			{
				
				aux = orden[j];
				orden[j] = orden[j+1];
				orden[j+1] = aux;
				aux=posicion[j];
				posicion[j]=posicion[j+1];
				posicion[j+1]=aux;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		cout<<"La nota total del alumno "<<posicion[i]<<" es "<<orden[i]<<endl;
	}
	getch();
	return 0;
}
