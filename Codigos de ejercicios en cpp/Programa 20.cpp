#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	int i,n;
	long unsigned a=0,b=1,c;
	srand(time(NULL));
	n=rand()%30;
	cout<<"los primeros "<<n<<" numeros de la seria de fibonacci"<<endl;
	if(n>0)
	    cout<<a<<endl;
	if(n>1)
	    cout<<b<<endl;
	for(i=2;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<c<<endl;
	}
	
	getch();
	return 0;
}
