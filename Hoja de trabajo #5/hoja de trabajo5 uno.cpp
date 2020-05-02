#include <fstream>
#include <iostream>
#include <string>
#include <regex>
#include <iomanip>

void insertar(); //funcion propotipo
void reporte();
void eliminar();
void modificar(); 
void mp(); 
using namespace std; 

int main()
{	
	mp(); 
	 
}

void mp(){
	int resp;
	//string nombrearchivo;
	//cout<<"Indique nombre de archivo: ";
	//getline(cin,nombrearchivo);
	
	do {
		system("CLS");
		cout<<"--------------------------"<<"\n";
		cout<<" Menu Principal"<<"\n";
		cout<<"-------------------"<<"\n";
		cout<<" 1 - Ingresar Estudiantes "<<"\n";
		cout<<" 2 - Reporte "<<"\n";
		cout<<" 3 - Eliminar Registro"<<"\n";
		cout<<" 4 - Modificar Registro"<<"\n";
		cout<<" 5 - Salir"<<"\n";
		cout<<"--------------------------"<<"\n";
		cout<<" Seleccione su opcion: ";
		cin>>resp;
		if (resp==1){		
			system("CLS");
			insertar();			
		}
		else if (resp==2){		
			system("CLS");
			reporte();
		}
		else if (resp==3){		
			system("CLS");
			eliminar();	
		}			
		else if (resp==4){
			system("CLS");
			modificar();
		}
		else if (resp==5)
			break;
		else 
			break;
		
	} while(resp!=5);	
}

