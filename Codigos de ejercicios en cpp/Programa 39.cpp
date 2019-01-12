#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
double eqn(double a,double b,double y,int signo)
{
	double r;
	if(signo==0)
		r=((-b)+sqrt(y))/(2*a);
	else if(signo ==1)
	    r=((-b)-sqrt(y))/(2*a);
	return r;
}
int main()
{
	double a,b,c,y;
	int x=0;
	cout<<"Ingrese el valor de a"<<endl;
	cin>>a;
	cout<<"Ingrese el valor de b"<<endl;
	cin>>b;
	cout<<"Ingrese el valor de c"<<endl;
	cin>>c;
	y=pow(b,2)-(4*a*c);
	cout<<y<<endl;
	if(y<0)
	{
		y=y*-1;
		x=1;
	}
	cout<<"X1 = "<<eqn(a,b,y,0);
	if(x==1)
	    cout<<" imaginario"<<endl;
	else
	    cout<<endl;
	cout<<"X2 = "<<eqn(a,b,y,1);
	if(x==1)
	    cout<<" imaginario"<<endl;
	else
	    cout<<endl;	    
	
	getch();
	return 0;
}
