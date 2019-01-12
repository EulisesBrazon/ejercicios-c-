 #include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define an 51
#define al 10
void limpiarArreglo2(char a[(an/2)][an-1])
{
	int i,j;
	for(i=0;i<((an/2));i++)
	{
		for(j=0;j<an;j++)
        {
	    	a[i][j]=' ';
	    }
	}
}

void limpiarLinea(char a[al][an],int lin)
{
	int  j;

	for(j=0;j<an;j++)
    	a[lin][j]=' ';

}

void limpiarArreglo1(char arreglo[][an])
{
	int i,j;
   	for(i=0;i<al;i++)
	{
		for(j=0;j<an;j++)
	    {
		    arreglo[i][j]=' ';
	    }	
	}	
}

void contarEspacios(char oracion[][an],int n[al])
{
	int i,j,e;
	for(i=0;i<al;i++)
	{
		e=0;
		for(j=0;j<an-2;j++)
		{
			if(oracion[i][j]==' ')
			    e++;
		}
		n[i]=e;
	}
}

void contarPalabra(char oracion[][an],int n[al])
{
	int i,j,p;
	for(i=0;i<al;i++)
	{
		p=0;
		for(j=0;j<an-1;j++)
	    {
	    	if(oracion[i][j]!=' ' && oracion[i][j+1]==' ')
	    		p++;					
    	}
		n[i]=p;			
	}
}

void mostrarOpciones1()
{
	printf("\nPreciones escape para salir \n");
	printf("Preciones tab para borrar \n");
}

void mostrarOpciones2()
{
	printf("\nIngrese el numero de la opcion que desea realizar \n\n");
	printf("1-Corregir las letras mayusculas y minusculas \n");
	printf("2-Alinear a la izquierda \n");
	printf("3-Centrar el texto \n");
	printf("4-Alinear a la dereza \n");
	printf("  Preciones escape para salir \n");
}

void separar(char frase[][an],char p[][an-1],int linea)
{
	int j,k=0,x=0;
	limpiarArreglo2(p);
	for(j=0;j<an-1;j++)
	{
		if(frase[linea][j]!=' ')
		{
			p[k][x]=frase[linea][j];
			x++;
		}
		else if(frase[linea][j]==' '&& frase[linea][j+1]!=' ' )
		{
			k++;
			x=0;
		}
	}
}

void ordenarMN(char arreglo[][an])
{
	int i,j,c=0;
	int n='A'-'a';
    for(i=0;i<al;i++)
    {
    	for(j=0;j<an-2;j++)
        {
        	if(c==0 && arreglo[i][j]<='z' && arreglo[i][j]>='a')
        	{
        		arreglo[i][j]=arreglo[i][j]+n;
        		c=1;
			}
        	else if(arreglo[i][j]<='Z' && arreglo[i][j]>='A')
        	{
        		if(c==0)
        		    c=1;
        		else
        			arreglo[i][j]=arreglo[i][j]-n;       		    
			}
			else if(arreglo[i][j]=='.')
			{
				c=0;
			}
     	}
	}
}

int  copiar(char p[(an/2)][an-1],char arr[al][an],int po,int linea)
{
	int i,j,k;
	k=po;
	for(i=0;i<(an/2);i++)
	{
		for(j=0;p[i][j]!=' ';j++)
	    {    	
	    		arr[linea][k]=p[i][j];
	    		k++;	    		     
	    }
	    if(k!=po)
	        k++;
	}
	    
	
}

void mostrarArreglo1(char arreglo[][an],int a)
{
	int i,j;
	printf("_______________________________________________________________________________\n");
	printf("                               EDITOR DE TEXTO\n");
	printf("_______________________________________________________________________________\n\n");
	for(i=0;i<al;i++)
	{
		if(a==3)
		    printf("\t\t");
		else if(a==4)
		    printf("\t\t             ");
		for(j=0;j<an-1;j++)
	    {
	    	printf("%c",arreglo[i][j]);
	    }	
	    printf("\n");
	}
	printf("_______________________________________________________________________________\n\n");
}
using namespace std;
int main()
{
	int i,j,l=0,k,po;
	char text[al][an];
	char opc;
	int p[al];
	int n[al];
	char sep[(an/2)][an-1];
	int li[al];
	for (i=0;i<al;i++)
	     li[i]=an+3;
    limpiarArreglo1(text);
    text[0][0]='_';
    i=0;
    j=0;
    l=0;
    do
    {
    	system("CLS");
    	mostrarArreglo1(text,3);
    	mostrarOpciones1();
    	opc=getch();
    	
		if(i<al && j<an-1 && opc!=27)
	   	{   	
        	if(opc==13 || opc=='.')
	    	{
	    		if(opc=='.')
	    		    text[i][j]='.';
	    		else
	    		    text[i][j]=' ';
	    		li[l]=j;
		    	j=an-1;
	    	}
			else if(opc==9)
			{
			    text[i][j]=' ';			    
			    if(j!=0)
			    {			    	
			    	text[i][j-1]='_';
			    	j--;
				}			    
			    else if(j==0 && i!=0)
			    {	
			    	l--;
			    	i=l;
			    	if(li[l]!=an+3)
			    	    j=li[l];
			    	else
			    	    j=an-2;
			    	li[l]=an+3;
	    		    text[i][j]='_';	
				}else
				{
					text[i][j]='_';	
				}
			}
			else if(opc==-32)
				text[i][j]='_';			
	        else
	    	{
		    	text[i][j]=opc;
		    	if(j!=an-2)
		    		text[i][j+1]='_';
				j++;	    	    
		    }
		    if(j==an-1 && i!=al)
		    {
			    l++;			    
			    i=l;			    
			    j=0;
	    		text[i][j]='_';	
	    	}
	    }
	    else
	    {
	    	text[i][j]=' ';
	    	system("CLS");
	    	mostrarArreglo1(text,3);
	    	opc=27;
		}
	}while(opc!=27);
    contarPalabra(text,p);
    contarEspacios(text,n);
    l=3;
	do
    {
    	system("CLS");
    	mostrarArreglo1(text,l);
    	mostrarOpciones2();
    	opc=getch();
    	
		if(opc=='1')
	   	{ 
	        ordenarMN(text);
		}
		else if(opc=='2')
		{
			l=1;
			for(i=0;i<al;i++)
			{	
			    k=0;			
				if(i==0)
				    k=1;
				else
				{
					for(j=0;j<an-1;j++)
			    	{
		     		   	if(text[i-1][j]=='.')
			    	   		k=1;
			        }				
				
				}
				if((n[i]-p[i])>5 && k==1)
				    po=5;
				else if(k==0)
				    po=0;
				else if(n[i]>0 && n[i]-p[i]>0)
				    po=(n[i]-p[i]);
				else
				    po=0;
			    separar(text,sep, i);
			    limpiarLinea(text,i);
			    copiar(sep,text,po,i);
			}
		}
		else if(opc=='3')
		{
			l=3;
			for(i=0;i<al;i++)
			{
				if(n[i]>0)
				{
					k=n[i]-p[i];
				    po=(k/2);
				}
				else
				    po=0;
			    separar(text,sep, i);
			    limpiarLinea(text,i);
			    copiar(sep,text,po,i);
		    }
		}
		else if(opc=='4')
		{
			l=4;
			for(i=0;i<al;i++)
			{
			    if(n[i]>0 && n[i]-p[i]>0)
				    po=(n[i]-p[i])+2;
				else
				    po=0;
			    separar(text,sep,i);
			    limpiarLinea(text,i);
			    copiar(sep,text,po,i);
			}
		}	
	}while(opc!=27);
    	
	getch();
	return 0;
}
