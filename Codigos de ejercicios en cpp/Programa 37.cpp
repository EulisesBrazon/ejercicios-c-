#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;
void cargarArr(int arr[],int arr2[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%999;
		arr2[i]=arr[i];
	}

}
void mostrar(int arr[],int ini,int n)
{
	int i;
	for(i=ini;i<n;i++)
		cout<<arr[i]<<endl;
}
void burbujaAsc(int ini,int n,int arreglo[])
{
	int i,j,aux,cambio=1;
	for(i=ini;i<n && cambio==1;i++)
	{
		cambio=0;
		for(j=ini;j<n-1;j++)
		{
			if(arreglo[j]>arreglo[j+1])
			{
				
				aux=arreglo[j];
				arreglo[j]=arreglo[j+1];
				arreglo[j+1]=aux;
				cambio=1;
			}
		}
	}
}
void burbujaDes(int ini,int n,int arreglo[])
{
	int i,j,aux,cambio=1;
	for(i=ini;i<n && cambio==1;i++)
	{
		cambio=0;
		for(j=ini;j<n-1;j++)
		{
			if(arreglo[j]<arreglo[j+1])
			{
				
				aux=arreglo[j];
				arreglo[j]=arreglo[j+1];
				arreglo[j+1]=aux;
				cambio=1;
			}
		}
	}
}
int main()
{
	int n;
	srand(time(NULL));
	n=rand()%28+4;
	int a1[n],a2[n];
	cout<<"El arreglo inicial es"<<endl;
	cargarArr(a1,a2,n);
	mostrar(a1,0,n);
	cout<<endl;
	burbujaDes(0,n/2,a2);
	burbujaAsc(n/2,n,a2);	
	cout<<"Una vez reordenado queda"<<endl<<"la primera parte descendente"<<endl;
	mostrar(a2,0,n/2);
	cout<<endl;
	cout<<"la segunda parte descendente"<<endl;
	mostrar(a2,n/2,n);
	getch();
	return 0;
}
