#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i,mayor,num,menor;
	cout<<"cuantos numeros desea evaluar?"<<endl;
	cin>>n;
	cout<<"ingrese el valor del numero 1"<<endl;
	cin>>num;
	mayor=num;
	menor=num;
	for(i=1;i<n;i++)
	{
		cout<<"ingrese el valor del numero "<<i+1<<endl;
		cin>>num;
		if(num>mayor)
			mayor=num;
		else if(num<menor)
		    menor=num;
	}
	cout<<endl;	
	cout<<"El mayor entre los "<<n<<" numeros es "<<mayor<<" y el menor es "<<menor<<endl;
	
	getch();
	return 0;
}
