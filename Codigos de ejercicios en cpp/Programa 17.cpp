#include<iostream>
#include<conio.h>
using namespace std;
long fact(int n)
{
	if(n==0)
	    return 1;
	return n*fact(n-1);
}
double exponente(int b, int e)
{
	int j,r=1;
	for(j=0;j<e;j++)
	{
		r=r*b;
	}
	return r;
}
int main()
{
	int n,j,i;
	float x;
	double sen=0,cos=0,r=0;
	do
	{
		cout<<"Ingrese el numero del calculo a realizar mediante la serie de Taylor"<<endl;
        cout<<"1- seno"<<endl;
	    cout<<"2- coseno"<<endl;
	    j=getch();
	}while(j<49 || j>50);
	
	if(j==49)
	{
		cout<<"Cuantas iteraciones desea realizar?"<<endl;
		cin>>i;
		cout<<"Ingrese el valor "<<endl;
		cin>>x;		
		for(n=0;n<i;n++)
			r=r+(((exponente(-1,n))*(exponente(x,(2*n)+1)))/fact((2*n)+1));
		cout<<"seno es igual a :"<<r<<endl;
	} 
	else if (j==50)
	{
		cout<<"Cuantas iteraciones desea realizar?"<<endl;
		cin>>i;
		cout<<"Ingrese el valor "<<endl;
		cin>>x;		
		for(n=0;n<i;n++)
			r=r+(((exponente(-1,n))*(exponente(x,2*n)))/fact(2*n));
        cout<<"coseno es igual a: "<<r<<endl;
			
	}
    cout<<"Se utilizo el valor "<<x<<" para la sumatoria y"<<endl;
    cout<<"El numero de terminos generados es de "<<n<<endl;
    
	
	getch();
	return 0;
}
