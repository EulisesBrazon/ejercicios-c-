#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	int pasc[300];
	int n,k=0,i,j;
	cout<<"Cuantos niveles desea cargar?"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=k;j>=0;j--)
		{
			if(j==k||j==0)
			{
				pasc[j]=1;
			}
			else
			{
				pasc[j]=pasc[j]+pasc[j-1];
			}
		}
		k++;
		cout<<endl;
		for(j=1;j<=n-i;j++)
		{
			cout<<"  ";			
		}
		for(j=0;j<k;j++)
		{
			printf("%4d",pasc[j]);
		}
	}
	
	getch();
	return 0;
}
