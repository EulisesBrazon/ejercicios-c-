#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int numi,i=0,j,d=1;
	double numf;
	cout<<"introdusca el numero con decimales"<<endl;
	cin>>numf;
	numi=numf;
	cout<<"los decimales son: "<<numf-numi<<endl;
	while(numi!=numf)
	{
		numf=numf*10;
		numi=numf;
		i++;
	}
	for(j=0;j<i;j++)
	{
		d=d*10;
	}
	numi=numi/d;
	numf=numf-(numi*d);
		
	cout<<"pasados a enteros: "<<numf<<endl;
	getch();
	return 0;
}
