#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
void mostrarOpc()
{
	cout<<"precione enter para tirar"<<endl;
	//cout<<"precione escape para salir"<<endl;
}
int main()
{
	int dado1,dado2,x=23,suma,t=1,tirada;
	char opc=0;
	srand(time(NULL));
	do
	{
		mostrarOpc();
		if(opc==13)
		{
			dado1=rand()%6+1;
			dado2=rand()%6+1;
			suma=dado1+dado2;
			cout<<"La suma es "<<suma<<endl;
			if(t==1)
			{
				if(suma==7 || suma==11)
			    {
			    	cout<<"FELICIDADES GANASTES "<<endl;
			    	x=24;
		    	}
				else if(suma==2 || suma==3 || suma==12)
				{
					cout<<"CRAPS...  Perdistes"<<endl;
			        x=24;
				}
				else if
				(suma==4||suma==5||suma==6||suma==8||suma==9||suma==10)
				{
					tirada=suma;
				    cout<<"tirada = "<<tirada<<endl;
				    x=0;
				}
				t=0;				
			}
			else if(suma==7)
			{
				cout<<"PERDISTES"<<endl;
				x=24;
			}
			else if(tirada==suma)
			{
				cout<<"FELICIDADES GANASTES "<<endl;
				x=24;
			}
			else
			{
				cout<<"tirada = "<<tirada<<endl;
			}
			
		}
		/*else if(opc==27)
		{
			x=24;
		}*/		
		opc=getch();
		system("CLS");
		
	}while(x!=24);
	
	getch();
	return 0;
}
