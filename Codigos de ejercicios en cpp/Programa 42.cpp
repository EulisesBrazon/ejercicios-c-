#include<iostream>
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
using namespace std;
int n=6;
void letraB(int arreglo[][70],int p,int f)
{
	int j,i,r;

	if(n<=5)
	    r=1;
	else
	    r=n/6;
	j=p+n-r-1;
	for(i=0;i<n;i++)
	{
		if(i<n/2)
		{
			if(i<r)
			{
				arreglo[i][j]=1;
				arreglo[i+(n/2)][j]=1;
				j++;
			}else if(i<r*2)
			{
				arreglo[i][j]=1;
				arreglo[i+(n/2)][j]=1;
			}
			else
			{
				arreglo[i][j]=1;
				arreglo[i+(n/2)][j]=1;
				j--;
			}
			
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<f-r;j++)
		{
			if(i==n/2 || i==0 || i==n-1 || j==0)
			{
			   arreglo[i][j]=1;	
			   if(i==n/2 && n%2==0)
			   {
			   	    arreglo[i-1][j]=1;			   	
			   }		        
			}
			
		}
	}

}

void letraI(int arreglo[][70],int p,int f)
{
	int j,i;

	for(i=0;i<n;i++)
	{
		for(j=p;j<f;j++)
		{
			if(j==p+(n/2) || i==0 || i==n-1)
			{
			   arreglo[i][j]=1;
			   if(j==p+(n/2) && n%2==0)
			   {
			   	    arreglo[i][j-1]=1;			   	
			   }
			        
			}
			
		}
	}
}
void letraE(int arreglo[][70],int p,int f)
{
	int j,i;

	for(i=0;i<n;i++)
	{
		for(j=p;j<f;j++)
		{
			if(i==n/2 || i==0 || i==n-1 || j==p)
			{
			   arreglo[i][j]=1;	
			   if(i==n/2 && n%2==0)
			   {
			   	    arreglo[i-1][j]=1;			   	
			   }		        
			}
			
		}
	}
}
int letraN(int arreglo[][70],int p,int f)
{
	int j,i;

	for(i=0;i<n;i++)
	{
		for(j=p;j<f;j++)
		{
			if(j==p || j==f-1 || i+p==j)
			{
			   arreglo[i][j]=1;		        
			}			
		}
	}
}
int letraV(int arreglo[][70],int p,int f)
{
	int j,i,m=n;

	for(i=0;i<n;i=i+2)
	{
		for(j=p;j<f+(n/2);j++)
		{
			if(j==p+(i/2))
			{
			   arreglo[i][j]=1;	
			   arreglo[i+1][j]=1;
			   arreglo[i][p+m-1]=1;
			   arreglo[i+1][p+m-1]=1;
			   m--;		   	        
			}			
		}
	}
}
int letraD(int arreglo[][70],int p,int f)
{
	int j,i,r;

    r=n/3;
    j=f-r-1;
	for(i=0;i<n;i++)
	{
		if(i<n)
		{
			if(i<r)
			{
				arreglo[i][j]=1;
				j++;
			}else if(i<r*2)
			{
				arreglo[i][j]=1;
			}
			else
			{
				arreglo[i][j]=1;
				j--;
			}
			
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=p;j<f-r;j++)
		{
			if( i==0 || j==p || i==n-1 )
			{
			   arreglo[i][j]=1;			        
			}
			
		}
	}
}
int letraO(int arreglo[][70],int p,int f)
{
	int j,i,r,k;

    r=n/3;
    j=f-r-1;
    k=j-r+1;
	for(i=0;i<n;i++)
	{
		if(i<n)
		{
			if(i<r)
			{
				arreglo[i][j]=1;
				arreglo[i][k]=1;
				k--;
				j++;
			}else if(i<r*2)
			{
				arreglo[i][j]=1;
				arreglo[i][k]=1;
			}
			else
			{
				arreglo[i][j]=1;
				arreglo[i][k]=1;
				k++;
				j--;
			}
			
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=p;j<f-r;j++)
		{
			if( (i==0 || i==n-1) && j>=p+r-1 )
			{
			   arreglo[i][j]=1;			        
			}
			
		}
	}
}
void limpiarArreglo(char arreglo[][25])
{
	int i,j;
		for(i=0;i<15;i++)
	{
	    for(j=0;j<25;j++)
		    arreglo[i][j]=0;	
    }
}
void limpiarArreglo2(int arreglo[][70])
{
	int i,j;
	for(i=0;i<n;i++)
	{
	    for(j=0;j<70;j++)
		    arreglo[i][j]=0;	
    }
}
void mostrarArreglo(int arreglo[][25])
{
	int i,j;
	for(i=0;i<15;i++)
	{
		for(j=0;j<25;j++)
		{
			if(arreglo[i][j]==0)
			    cout<<"%";
			else if(arreglo[i][j]==1)
		    	cout<<" ";
		    else if(arreglo[i][j]==2)
		     	printf("%c", arreglo[i][j]);
			else 
				cout<<" ";
		}
		cout<<endl;
	}
}
void mostrarArreglo2(int arreglo[][70])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<70;j++)
		{			
		     	printf("%c", arreglo[i][j]);
		}
		cout<<endl;
	}
}

void instrucciones()
{
	cout<<endl<<endl;
	cout<<"El objetivo del juego es salir del laberinto"<<endl<<endl;
	cout<<"Las configuraciones con las siguientes"<<endl;
	cout<<"w para mover hacia arriba precione"<<endl;
	cout<<"a para mover hacia la izquierda"<<endl;
	cout<<"d para mover hacia la derecha"<<endl;
	cout<<"s para mover hacia arriba abajo"<<endl;
	cout<<"x para salir del juego"<<endl;
}

int main()
{	
    int bienvenido[n][70];
    int i=8,j=10,k,win=0;
    char opc;
	int arreglo[15][25]= {0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	                      0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,0,
	                      0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,
	                      0,1,1,1,1,1,1,1,0,1,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,
	                      0,0,0,0,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,
	                      0,1,1,1,1,0,1,1,0,0,0,1,0,1,0,1,0,1,0,1,1,1,0,1,0,
	                      0,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,1,0,0,0,0,0,1,0,
	                      0,1,1,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,1,1,0,1,0,
	                      0,0,0,0,1,0,0,1,1,1,2,1,1,1,1,1,1,1,0,1,0,0,0,1,0,
	                      0,1,1,0,1,1,1,1,0,1,1,1,0,0,0,0,0,1,0,1,0,1,1,1,0,
                          0,1,0,0,0,0,0,0,0,0,0,1,0,1,1,1,0,1,0,1,0,1,0,0,0,
	                      0,1,0,1,1,1,0,1,1,1,0,1,0,1,0,1,0,1,1,1,0,1,1,1,0,
	                      0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,0,0,0,0,1,0,
	                      0,1,1,1,0,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,
	                      0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	limpiarArreglo2(bienvenido);
	letraB(bienvenido,0,6);
	letraI(bienvenido,7,13);
	letraE(bienvenido,14,20);
	letraN(bienvenido,21,27);
	letraV(bienvenido,28,34);
	letraE(bienvenido,35,41);
	letraN(bienvenido,42,48);
	letraI(bienvenido,49,55);
	letraD(bienvenido,56,62);
	letraO(bienvenido,64,69);
	mostrarArreglo2(bienvenido);
    cout<<endl;
	 		
	do
	{
		mostrarArreglo(arreglo);
		instrucciones();
		opc=getch();
		if((opc=='W'||opc=='w')&& arreglo[i-1][j]!=0 && arreglo[i-1][j]!=3)
		{
			arreglo[i][j]=1;
			arreglo[i-1][j]=2;
			i--;
		}else if((opc=='S'||opc=='s')&& arreglo[i+1][j]!=0)
		{
			arreglo[i][j]=1;
			arreglo[i+1][j]=2;				
			i++;	
		}else if((opc=='A'||opc=='a')&& arreglo[i][j-1]!=0)
		{
			arreglo[i][j]=1;
			arreglo[i][j-1]=2;
			j--;
		}else if((opc=='D'||opc=='d')&& arreglo[i][j+1]!=0)
		{
			arreglo[i][j]=1;
			arreglo[i][j+1]=2;
			j++;
		}else if((opc=='W'||opc=='w')&& arreglo[i-1][j]==3)
		{
			arreglo[i][j]=1;
			arreglo[i-1][j]=2;
			i--;			
			win=1;
		}
		system("CLS"); //es el equivalente a clrscr en consola
		
	}while(opc!='x' &&  opc!='X' && win==0);
	
	system("CLS");
	mostrarArreglo(arreglo);
	if(opc=='x' ||  opc=='X')
	{
		cout<<endl;
	    cout<<"Buena suerte para la proxima"<<endl;
	}else
	{		
	    cout<<endl;
	    cout<<"   FELICIDADES GANATES"<<endl;
	}
	

	
	getch();
	return 0;
}
