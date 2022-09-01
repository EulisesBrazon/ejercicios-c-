#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define max 30
#define nu 12
#define te 10
using namespace std;
//creado en 12/11/2018
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

class fecha
{
	private:
	    int dia,mes,anno;
	public:
		void I_datosF()
		{
			do
	        {
	    	    cout<<"Año de nacimiento?"<<endl;
        	    cin>>anno;
        	}while(anno>anno);
        	do
    		{
    			cout<<"Mes de nacimiento?"<<endl;
    		    cin>>mes;
    		}while(mes<0 || mes>12);
    		do
    		{
    			cout<<"Dia de nacimiento?"<<endl;
    		    cin>>dia;
    		}while(dias_mes(anno,mes,dia)==0);			
		}
		void M_datosF()
		{
			cout<<"La fecha de nacimiento es "<<dia<<"/"<<mes<<"/"<<anno;
		}
};

class persona
{
	private:
	    char nombre[te],apellido[te];
	    fecha a[max];
	public:
		void I_datosP(int n)
		{
			cout<<"Ingrese el apellido"<<endl;
			cin>>apellido;
			cout<<"Ingrese el nombre"<<endl;
			cin>>nombre;			
			a[n].I_datosF();			
		}
		void mostrar_P(int n)
		{
			cout<<"nombre: "<<nombre<<" "<<apellido<<endl<<endl;
			a[n].M_datosF();
			cout<<endl;			
		}
		int comparar_apellido(persona b)
        {
           	int i,j,v=3;
           	if(compararPalabras(b)==1)
           	    v=0;
			else if(v!=0)
			{
				v=0;
              	for(j=0;v==0 && apellido[j]!='\0' && b.apellido[j]!='\0';j++)
              	{
           	   		if(apellido[j]>b.apellido[j]) v=1;
           	   		else if(apellido[j]<b.apellido[j]) v=2;
           	   		if(v==0)
           	   		{         			
                        if(apellido[j]!='\0')v=1;
				   		else if(b.apellido[j]!='\0')v=2;
		       		}
		   		}
	    	}
			return v;					
		}
		
		int comparar_nombre(persona b)
        {
           	int j,v=0;
            for(j=0;v==0 && nombre[j]!='\0' && b.nombre[j]!='\0';j++)
            {
           	   	if(nombre[j]>b.nombre[j]) v=1;
           	   	else if(nombre[j]<b.nombre[j]) v=2;
           	   	if(v==0)
           	   	{
               	     if(nombre[j]!='\0')v=1;
			   		else if(b.nombre[j]!='\0')v=2;
		       	}
		   	}
			return v;					
		}
		void M_contactos()
		{
			cout<<apellido<<" "<<nombre<<endl;
		}
		int contar_Apellido(persona a)
		{
			int i,j=0,k=0;
			for(i=0;a.apellido[i]!='\0';i++)
			    j++;
			for(i=0;apellido[i]!='\0';i++)
			    k++;
			if(j==k)
			    i=1;
			else
			    i=0;
			return j;
		}
		int compararPalabras(persona b)
		{
			int i=0,j=1,v=0;
			if(contar_Apellido(b)==1)
           	{
           		for(j=0;apellido[j]!='\0';j++)
           		{
           			if(apellido[j]==b.apellido[j])
           			{
           				i++;
					}
           			
				}
				if(i==j) 
				    v=1;
			}
			return v;
		}
		int buscar_Apellido_P(char a[],int n)
		{
			int i,j=0,k=0;
			persona aux;
			for(i=0;i<n && a[i]!='\0';i++)
			{
				if(apellido[i]==a[i])
					k++;
		    }
		    if(k==i)
		        return 1;
		    else
		        return 0;
		}
};

class datos
{
	private:
	    char numero[nu],direccion[max],descripcion[max];
	public:
		void I_datosD()
		{
			cout<<"Ingrese el numero de telefono"<<endl;
			cin>>numero;
			cout<<"Ingrese la descripcion "<<endl;
			cin>>descripcion;
			cout<<"Ingrese la direccion "<<endl;
			cin>>direccion;
		}
		void mostrar_D()
		{
			cout<<"Numero: "<<numero<<endl<<endl;
			cout<<"Descripcion: "<<descripcion<<endl;
			cout<<"Ingrese la direccion "<<direccion<<endl<<endl;
		}
		
};

class agenda
{
	private:
		datos Dato[max];
		persona Persona[max];
	public:
		void I_datosA(int n)
		{		
			Persona[n].I_datosP(n);
			Dato[n].I_datosD();			
		}
		void ordenar_A(int n)
        {
        	int i,j,cambio=1;
        	persona aux;
        	datos auxD;
        	for(i=0;i<n && cambio==1;i++)
        	{
	        	cambio=0;
	        	for(j=0;j<n-1;j++)
	        	{
		        	if((Persona[j].comparar_apellido(Persona[j+1]))==1)
		        	{
		        		aux=Persona[j];
		        		Persona[j]=Persona[j+1];
			        	Persona[j+1]=aux;
			        	auxD=Dato[j];
		        		Dato[j]=Dato[j+1];
			        	Dato[j+1]=auxD;
			        	cambio=1;
		        	}else if((Persona[j].comparar_nombre(Persona[j+1]))==1 && (Persona[j].comparar_apellido(Persona[j+1]))==0)
		        	{
		        		aux=Persona[j];
		        		Persona[j]=Persona[j+1];
			        	Persona[j+1]=aux;
			        	auxD=Dato[j];
		        		Dato[j]=Dato[j+1];
			        	Dato[j+1]=auxD;
			        	cambio=1;
		        	}
	        	}
        	}
        }
		void mostrar_A(int n)
		{
				Persona[n].mostrar_P(n);
				Dato[n].mostrar_D();			
		}
		void lista(int n)
		{
			int i;
			for(i=0;i<n;i++)
			{
				cout<<i+1<<"- ";
				Persona[i].M_contactos();
			}
		}
		void buscar_Apellido_A(char a[],int n)
		{
			int i,j=1,k=0;
			char b;
			for(i=0;i<n && j!=0 ;i++)
			{
				if(Persona[i].buscar_Apellido_P(a,n)==1)
				{
					k++;
					system("CLS");
					cout<<"Precione 0 para salir o cualquier letra para seguir buscando "<<endl<<endl;
					mostrar_A(i);
					b=getch();
					if(b=='0')
					    j=0;
				}				
			}
			if(k==0 && j!=0)
			{
				cout<<"No se encontro ningun resultado "<<endl<<endl;
			}	
		}
		void eliminar(int j,int n)
		{
			int i;

			for(i=j;i<n-1;i++)
			{
		        Persona[j]=Persona[j+1];
		        Dato[i]=Dato[i+1];
			}
		}
};

void mostrarOpciones()
{
	cout<<"ingrese el numero de la opcion a realizar"<<endl;
	cout<<"1- Crear un nuevo contacto"<<endl;
	cout<<"2- Mostrar lista de contactos ordenada"<<endl;
	cout<<"3- Buscar contacto por apellido"<<endl;
	cout<<"4- Eliminar contacto"<<endl;
	cout<<"Preciona escape para salir"<<endl<<endl;
}



int main()
{
	int n=0,i;
	char opc,aux[te];
	agenda a;
	mostrarOpciones();
	do
	{		
		opc=getch();
		system("CLS");
		mostrarOpciones();
		if(opc=='1')
		{
			a.I_datosA(n);
			n++;
		}
		else if(opc=='2')
		{
			a.ordenar_A(n);
			i=0;
			do
			{
				if(i!=0)
				    getch();
				system("CLS");
				cout<<"ingrese el numero del contacto a elegir"<<endl;
			    cout<<"ingresa 0 para volver al menu anterior"<<endl<<endl;
			    a.lista(n);
		     	cin>>i;
		     	system("CLS");
		     	if(i>0)
		     		a.mostrar_A(i-1);				
			}while(i!=0);
		}
		else if(opc=='3')
		{
			cout<<"Ingrese el apellido a buscar"<<endl;
			cin>>aux;
			a.buscar_Apellido_A(aux,n);			
		}
		else if(opc=='4')
		{
			system("CLS");
			a.ordenar_A(n);
			cout<<"Ingrese el numero del contacto a eliminar"<<endl<<endl;
			a.lista(n);
			cin>>i;
			if(i>0)
			{
				a.eliminar(i-1,n);
				n--;
			}			    
		}
		
	}while(opc!=27);
	
	getch();
	return 0;
}
