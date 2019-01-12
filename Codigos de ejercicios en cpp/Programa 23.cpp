#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
void mostrarPosi(int a[],int n,int num)
{
	int i;
	for (i=0;i<n;i++)
	{
		if(a[i]==num)
		    cout<<i+1<<endl;
	}
}
int main()
{
	int n,i,mayor,num[n],menor;
	srand(time(NULL));
	n=rand()%20+2;
	num[0]=rand()%100;
	mayor=num[0];
	menor=num[0];
	cout<<num[0]<<endl;
	for(i=1;i<n;i++)
	{
		num[i]=rand()%100;
		if(num[i]>mayor)
			mayor=num[i];
		else if(num[i]<menor)
		    menor=num[i];
		cout<<num[i]<<endl;
	}
	cout<<endl;
	cout<<"El mayor entre los "<<n<<" numeros anteriores es "<<mayor<<" y esta en la posicion"<<endl;
	mostrarPosi(num,n,mayor);
	cout<<"Y el menor es "<<menor<<" que esta el la posicion"<<endl;
	mostrarPosi(num,n,menor);
	
	
	getch();
	return 0;
}
