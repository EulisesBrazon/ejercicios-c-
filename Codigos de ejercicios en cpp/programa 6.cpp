#include<iostream>
#include<conio.h>
using namespace std;
int hora(int a)
{
	while(a>=24)
		a=a-24;
	return a;
}
int minseg(int a)
{
	while(a>=60)
	    a=a-60;
	return a;
}
int main()
{
	int hh,mm,ss,sumar;
	do{
		cout<<"que hora es?"<<endl;
	    cin>>hh;
	}while(hh>=24||hh<0);
	
	do{
		cout<<"con cuantos minutos?"<<endl;
	    cin>>mm;
	}while(mm<0||mm>=60);
	
	do{
		cout<<"con cuantos segundo?"<<endl;
	    cin>>ss;
	}while(ss<0||ss>=60);
	
	do{
		cout<<"Introdusca en numero del valor a introducir"<<endl;
		cout<<"1- horas"<<endl;
		cout<<"2- mimutos"<<endl;
		cout<<"3- segundos"<<endl;
		sumar=getch();
	}while(sumar<49||sumar>51);
	
    if (sumar==49)
    {
    	cout<<"Cuantas horas desea sumar a la hora actual?"<<endl;
    	cin>>sumar;
    	hh=hh+sumar;
    	hh=hora(hh);
	} 
	else if (sumar==50)
	{
		cout<<"Cuantos minutos desea sumar a la hora actual?"<<endl;
    	cin>>sumar;
    	mm=mm+sumar;
    	hh=hh+(mm/60);
    	mm=minseg(mm);
    	hh=hora(hh);
	} 
	else if(sumar==51)
	{
		cout<<"Cuantos segundos desea sumar a la hora actual?"<<endl;
    	cin>>sumar;
    	ss=ss+sumar;
    	mm=mm+(ss/60);
    	ss=minseg(ss);
    	hh=hh+(mm/60);
    	mm=minseg(mm);
    	hh=hora(hh);
	}
		
	cout<<"La hora actualizaa es "<<hh<<"horas, "<<mm<<"minutos, "<<ss<<"segundos "<<endl;
	
	getch();
	return 0;
}
