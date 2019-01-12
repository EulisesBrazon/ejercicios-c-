#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#define n 3
#define m 5
using namespace std;
void cargarArreglo(int a[][n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			a[i][j]=rand()%89+10;
	}
}
void mostrar(int a[][n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
void rotar180(int a[][n])
{
	int i,j,aux;
	for(i=0;i<m/2;i++)
	{
		for(j=0;j<n;j++)
		{
			aux=a[i][j];
			a[i][j]=a[m-i-1][n-j-1];
			a[m-i-1][n-j-1]=aux;
		}
	}
	if(m%2!=0)
	{
		i=m/2;
		for(j=0;j<n/2;j++)
		{
			aux=a[i][j];
			a[i][j]=a[i][n-j-1];
			a[i][n-j-1]=aux;
		}
	}
}
void mostrar90D(int a[][n])
{
	int i,j;
	for(j=0;j<n;j++)
	{
		for(i=m-1;i>=0;i--)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
void mostrar90I(int a[][n])
{
	int i,j;
	for(j=n-1;j>=0;j--)
	{
		for(i=0;i<m;i++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	srand(time(NULL));
	int arr[m][n];
	cargarArreglo(arr);
	mostrar(arr);
	cout<<endl;
	cout<<"Rotado 90 grados hacia la derecha"<<endl;
	mostrar90D(arr);
	cout<<endl;
	cout<<"Rotado 90 grados hacia la iquiereda"<<endl;
	mostrar90I(arr);
	cout<<endl;	
	cout<<"Rotado 180 grados"<<endl;
	rotar180(arr);
	mostrar(arr);
	
	getch();
	return 0;
}
