#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double tamanno,peso,IMC;
	cout<<"Ingrese el tamaño del individuo en centimetros"<<endl;
	cin>>tamanno;
    cout<<"Ingrese el peso del individuo en kilogramos"<<endl;
	cin>>peso;
	tamanno=tamanno/100;
	IMC=((peso)/(tamanno*tamanno));
	cout<<"su indice de masa corporal es "<<IMC<<" considerado como:"<<endl;
	if(IMC<16.00)
	{
		cout<<"Infrapeso: Delgadez Severa"<<endl;
	}else if((IMC>=16.00)&&(IMC<=16.99))
	{
		cout<<"Infrapeso: Delgadez moderada"<<endl;
	}else if((IMC>=17.00)&&(IMC<=18.49))
	{
		cout<<"Infrapeso: Delgadez aceptable"<<endl;
	}else if((IMC>=18.50)&&(IMC<=24.99))
	{
		cout<<"Peso Normal"<<endl;
	}else if((IMC>=25.00)&&(IMC<=29.99))
	{
		cout<<"Sobrepeso"<<endl;
	}else if((IMC>=30.00)&&(IMC<=34.99))
	{
		cout<<"Obeso: Tipo I"<<endl;
	}else if((IMC>=35.00)&&(IMC<=40))
	{
		cout<<"Obeso: Tipo II"<<endl;
	}else if(IMC>40)
	{
		cout<<"Obeso: Tipo III"<<endl;
	}
	getch();
	return 0;
}
