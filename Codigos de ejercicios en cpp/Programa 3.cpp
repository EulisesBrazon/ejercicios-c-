#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double pulg;
	cout<<"ingrese las pulgadas"<<endl;
	cin>>pulg;
	cout<<"Es equivalente "<<endl;
	cout<<pulg*25.4<<"mm"<<endl;
	cout<<pulg*2.54<<"cm"<<endl;
	cout<<pulg*0.254<<"dm"<<endl;
	cout<<pulg*0.0254<<"m"<<endl;
	cout<<pulg*0.00254<<"DM"<<endl;
	cout<<pulg*0.000254<<"HM"<<endl;
	cout<<pulg*0.0000254<<"KM"<<endl;
	getch();
	return 0;
} 
