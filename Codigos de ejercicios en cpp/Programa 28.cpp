#include<iostream>
#include<conio.h>
using namespace std;
//programa para ver si una palabra es palíndroma
int main()
{
	int i=0,j;
	char palabra[30];
	string reves;
	cout<<"ingrese una palablra"<<endl;
	cin>>palabra;
	while(palabra[i]!= '\0')
	i++;
	for(j=i-1;j>=0;j--)
	{
		reves=reves+palabra[j];
	}
	if(reves==palabra)
	{
		cout<<"La palabra "<<palabra<<" es palindromo"<<endl;
	}else
	cout<<"La palabra "<<palabra<<" no es palindromo"<<endl;
	
	getch();
	return 0;
}
