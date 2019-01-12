#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double v1,v2,v3;
	int nota_minima_para_aprobar=6;
	cout<<"Ingrese la primera nota (valor 20%)"<<endl;
	cin>>v1;
	cout<<"Ingrese la segunda nota (valor 30%)"<<endl;
	cin>>v2;
	if((v1*0.20)+(v2*0.30)>=1)
	{
		v3=(-(v1*0.20)-(v2*0.30)+nota_minima_para_aprobar)/0.50;
		cout<<"Necesita un a nota minima de "<<v3<<" para aprobar con "<<nota_minima_para_aprobar<<endl;
	}else
	{
		cout<<"nota insuficienre (reprobado)"<<endl;
	}
	getch();
	return 0;
}
