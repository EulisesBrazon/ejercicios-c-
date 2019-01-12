#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
using namespace std;
int dias_mes(int anno,int mes)
{   int x;
    cout<<anno<<endl;
	switch(mes)
	{
		case 1:
			x=31;
		break;
		case 2:
			if(anno%4==0)
				x=29;
			else
			    x=28;                          
		break;
		case 3:
			x=31;
		break;
		case 4:
			x=30;
		break;
		case 5:
			x=31;
		break;
		case 6:
			x=30;
		break;
		case 7:
			x=31;
		break;
		case 8:
			x=31;
		break;
		case 9:
			x=30;
		break;
		case 10:
			x=31;
		break;
		case 11:
			x=30;
		break;
		case 12:
			x=31;
		break;
	}
	return x;
}

void mostrarVentas(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(i<9)
		    cout<<"Las ventrar realizadas el dia "<<i+1<<"  es: "<<rand()%10<<endl;
		else 
		    cout<<"Las ventrar realizadas el dia "<<i+1<<" es: "<<rand()%10<<endl;
	}
}

int main()
{
	int anno,mes;
	setlocale(LC_ALL, "spanish");
	srand(time(NULL));
	cout<<"¿que año es?"<<endl;
	cin>>anno;
	
	do
	{
		cout<<"¿Que mes es?"<<endl;
	    cin>>mes;
	}while(mes<0 && mes>12);
	
	mostrarVentas(dias_mes(anno,mes));	
	
	getch();
	return 0;
}
