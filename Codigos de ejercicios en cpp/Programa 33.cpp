#include<iostream>
#include<conio.h>
#include<locale.h>
using namespace std;
int comparar(int c[],int n)
{
	int cont=0,i,comp=c[0];
	for(i=1;i<n;i++)
	{
		if(comp==c[1])
		    cont++;
	}
	return cont;
}
int main()
{
	
    int n,i,j;
    setlocale(LC_ALL, "spanish");
	cout<<"tamaño se la matriz nxn a ingresar"<<endl;
	cin>>n;
	int arr[n][n],contador[(n*2)+2];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"Ingrese el valor de la columna "<<i+1<<" fila"<<j+1<<endl;
			cin>>arr[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		contador[i]=0;
		for(j=0;j<n;j++)
		{
			contador[i]=contador[i]+arr[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		contador[i+n]=0;
		for(j=0;j<n;j++)
		{
			contador[i+n]=contador[i+n]+arr[j][i];
		}
	}
	contador[n+n]=0;
	for(i=0;i<n;i++)
	{		
		for(j=0;j<n;j++)
		{
			if(i==j)
			    contador[n+n]=contador[n+n]+arr[i][j];
		}
	}
	contador[n+n+1]=0;
	for(i=0;i<n;i++)
	{		
		for(j=0;j<n;j++)
		{
			if(i+j==n-1)
			    contador[n+n+1]=contador[n+n+1]+arr[i][j];
		}
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
	if(comparar(contador,n*n+2)==n*n+1)
	    cout<<"Es un cuador mágico"<<endl;
	else 
	    cout<<"No es un cuador mágico"<<endl;
	
	
	
		
	getch();
	return 0;
}
