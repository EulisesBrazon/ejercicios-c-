#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
void cargarArr(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%100;
		cout<<arr[i]<<endl;
	}
}
int suma(int arr[],int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
	    s=s+arr[i];
	return s;
}
int moda(int arr[],int cont[],int n)
{
	int i,j,mayor;
	for(i=0;i<n;i++)
	{
		cont[i]=0;
		for(j=i;j<n;j++)
		{
			if(arr[i]==arr[j+1])
			{
				cont[i]=cont[i]+1;
			}
		}
	}
	mayor=cont[0];
	for(i=1;i<n;i++)
	{
		if(mayor<cont[i])
		    mayor=cont[i];
	}
	return mayor;
}

int main()
{
	int n,mayor,i;
	srand(time(NULL));
	n=rand()%28+2;	
	int arreglo[n],contador[n];
	cargarArr(arreglo,n);
	cout<<endl;
	cout<<"El resultado de evaluar los "<<n<<" numeros anteriores es:"<<endl;
	cout<<"la suma es de "<<suma(arreglo,n)<<endl;
	cout<<"EL promedio es de "<<suma(arreglo,n)/n<<endl;
	mayor=moda(arreglo,contador,n);
	if(mayor==0)
	    cout<<"Nigun numero tiene moda o se repite"<<endl;
	else
	{
		for(i=0;i<n;i++)
	    {
		    if(mayor==contador[i])
		        cout<<"La moda o el numero que mas se repite es "<<arreglo[i]<<endl;
	    }
	}

	getch();
	return 0;
}
