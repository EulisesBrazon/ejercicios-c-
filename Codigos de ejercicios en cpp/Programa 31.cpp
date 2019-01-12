#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<conio.h>
//producto initerno entre A(a1,a2) y B(b1,b2) es igual a (AB)=(a1*b1)+(b2*b2)
void cargarArr(int arr[],int arr2[],int n)
{
	int i;
	printf("Arreglo 1    Arreglo 2 \n");
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%100;
		arr2[i]=rand()%98+1;
		if(arr[i]<9)
		    printf("%i             %i\n",arr[i],arr2[i]);
		else
		    printf("%i            %i\n",arr[i],arr2[i]);
	}
}
long double productoInterno(int a1[],int a2[],int n)
{
	int r=0,i;
	for(i=0;i<n;i++)
	{
		r=r+(a1[i]*a2[i]);
	}
	return r;
}

using namespace std;
int main()
{
	int n;
	srand(time(NULL));
	n=rand()%28+2;
	int a1[n],a2[n];
	cargarArr(a1,a2,n);		
	cout<<"La producto interno de los arreglos anteriores es "<<productoInterno(a1,a2,n)<<endl;
	getch();
	return 0;
}
