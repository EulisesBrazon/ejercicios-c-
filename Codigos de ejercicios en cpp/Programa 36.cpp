#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double gc;
	cout<<"Ingrece la temperatura en grados centigrados"<<endl;
	cin>>gc;
	cout<<"Su elquivalente en grados KELVIN es:"<<gc+273.15<<endl;
	cout<<"Su elquivalente en grados Fahrenheit es:"<<((gc*9)/5)+32<<endl;
		
	getch();
	return 0;
}
