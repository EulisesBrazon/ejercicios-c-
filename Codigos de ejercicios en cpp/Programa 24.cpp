#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
void burbuja(int n,int arreglo[])
{
	int i,j,aux,cambio=1;
	for(i=0;i<n && cambio==1;i++)
	{
		cambio=0;
		for(j=0;j<n-1;j++)
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
void mostrarArr(int n,int a[])
{
	int i;
	for(i=0;i<n;i++)
	    cout<<a[i]<<endl;
}
void cargarArr(int n,int a[])
{
	int i;
	for(i=0;i<n;i++)	
	{
		a[i]=rand()%899+100;
	}
}
int main()
{	
	int n;
	srand(time(NULL));
	n=rand()%28+2;
	int arreglo[n];
	cargarArr(n,arreglo);
	cout<<"EL arreglo inicial con "<<n<<" numeros es"<<endl;
	cout<<endl;
	mostrarArr(n,arreglo);
	burbuja(n,arreglo);
	cout<<endl;
	cout<<"El arreglo ordenado es"<<endl;
	cout<<endl;
	mostrarArr(n,arreglo);
	
	getch();
	return 0;
}
