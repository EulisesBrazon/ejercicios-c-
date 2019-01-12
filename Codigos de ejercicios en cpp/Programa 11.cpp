#include<iostream>
#include<conio.h>
#include<locale.h>
using namespace std;
int mes_31(int a)
{   int x=0;
	if(a>=1 && a<=31)
	     x=1;
    return x;
}
int mes_30(int a)
{
	int x=0;
	if(a>=1 && a<=30)
	     x=1;
    return x;
}
int febrero(int anno,int dia)
{
	int x=0,d=0;
	if(anno%4==0)
	    d=1;
	if(dia>=1 && dia<=28+d)
	    x=1;
	return x;
}
int dias_mes(int anno,int mes,int dia)
{   int x;
	switch(mes)
	{
		case 1:
			x=mes_31(dia);
		break;
		case 2:
			x=febrero(anno,dia);
		break;
		case 3:
			x=mes_31(dia);
		break;
		case 4:
			x=mes_30(dia);
		break;
		case 5:
			x=mes_31(dia);
		break;
		case 6:
			x=mes_30(dia);
		break;
		case 7:
			x=mes_31(dia);
		break;
		case 8:
			x=mes_31(dia);
		break;
		case 9:
			x=mes_30(dia);
		break;
		case 10:
			x=mes_31(dia);
		break;
		case 11:
			x=mes_30(dia);
		break;
		case 12:
			x=mes_31(dia);
		break;
	}
	return x;
}
int main()
{	
    //funcion de la libreria locale.h para que reconosca caracteres especiales
    setlocale(LC_ALL, "spanish");
	int  mes,anno,dia,diaA,mesA,annoA,edad=0;
	do
	{
		cout<<"¿Que año es hoy?"<<endl;
	    cin>>annoA;
	}while(annoA<0);
	do
	{
		cout<<"¿Que mes es hoy?"<<endl;
	    cin>>mesA;
	}while(mesA<0 || mesA>12);
	do
	{
		cout<<"¿Que dia es hoy?"<<endl;
	    cin>>diaA;
	}while(dias_mes(annoA,mesA,diaA)==0);
	do
	{
		cout<<"¿Año de nacimiento?"<<endl;
	    cin>>anno;
	}while(anno>annoA);
	do
	{
		cout<<"¿Mes de nacimiento?"<<endl;
	    cin>>mes;
	}while(mesA<0 || mesA>12);
	do
	{
		cout<<"¿Dia de nacimiento?"<<endl;
	    cin>>dia;
	}while(dias_mes(anno,mes,dia)==0);
		
	edad=(annoA-anno);
	
	if(mesA<mes)
	{
		if(diaA<dia)
		edad=edad-1;
	}
	
	cout<<"La edad es de "<<edad<<"años"<<endl;
	getch();
	return 0;
}
