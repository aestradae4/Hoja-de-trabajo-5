#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 
void vip();
void platea(); 
void popular(); 
void reporte(); 
void mp(); 
int main(){
	mp(); 
}

void mp(){
	int resp; 
do {
		system("CLS");
		cout<<"--------------------------"<<"\n";
		cout<<" Menu Principal"<<"\n";
		cout<<"-------------------"<<"\n";
		cout<<" 1 - zona vip "<<"\n";
		cout<<" 2 - zona platea "<<"\n";
		cout<<" 3 - zona popular"<<"\n";
		cout<<" 4 - reporte"<<"\n";
		cout<<" 5 - Salir"<<"\n";
		cout<<"--------------------------"<<"\n";
		cout<<" Seleccione su opcion: ";
		cin>>resp;
		if (resp==1){		
			system("CLS");
			vip();			
		}
		else if (resp==2){		
			system("CLS");
			platea();
		}
		else if (resp==3){		
			system("CLS");
			popular();	
		}			
		else if (resp==4){
			system("CLS");
			reporte();
		}
		else if (resp==5)
			break;
		else 
			break;
		
	} while(resp!=5);	
}

void reporte(){
	int cal, total, suma2, person, n2, precio, suma, n; 
	string zona, id; 
	
	ifstream db; //Leeer archivo
	cout<<"Datos del archivo:"<<endl;
	cout<<" zona|"<<"	 identificacion	 |"<<"precio|"<<"personas|"<<"total|"<<endl; 
	try {
	db.open("voleto.txt",ios::in); //abrir archivo en modo de agregar datos
	while(db>>zona>>id>>precio>>person>>total){
		cout<<setw(3)<<zona<<"|"<<setw(18)<<id<<"|"<<setw(7)<<precio<<"|"<<setw(7)<<person<<"|"<<setw(7)<<total<<endl; 
	n++; 
	suma+=total;
	n2++; 
	suma2+=precio;
	
	}
	db.close();
	cout<<"\nPromedio Global Vendido"<<suma/n<<endl; 
	cout<<"\nPromedio por zona vendido"<<suma2/n<<endl;
	system("Pause");
	}
	catch (exception& X){
		cout <<"Error en la manipulacion del archivo"<<endl; 
		cout<<"Error: "<<X.what()<<endl; 
		system("Pause"); 
		
		}
}
void vip(){
	int cal, total, total2, person, des1, des2, precio;
	char respuesta; 
	string zona, id; 
	ofstream db; 
	zona ="VIP"; 
	id = "V"; 
	precio = 350;
	cout<<"------------ZONA VIP--------------"<<"\n"; 
	cout<<"Ingrese el numero de voletos a comprar"<<endl; 
	cin>>person; 
	cal = precio * person; 
	if(person>=3 && person<=6){
		des1 = cal * 0.05;
	}else if(person>=7 && person<=9){
		des1 = cal * 0.075;
	}else if(person>=9){
		des1 = cal * 0.10; 
	}
		
	do
	{
		cout<<"Es socio?:"<<endl;
		cout<<"\n\nConfirme con Si |S| o No con |N|? S/N";
		cin>>respuesta;
		cout<<"\n"<<endl;
		respuesta = toupper(respuesta); 
		
	}while  (respuesta!='S'); 
	
		if(respuesta='S'){
			des2 = cal * 0.08; 
		
		}total = cal - des1 - des2;
	
	
	cout<<"---------Datos de compra---------"<<"\n"; 
	cout<<"Zona de la compra"<<"\t|"<<zona<<endl; 
	cout<<"Identificacion   "<<"\t|"<<id<<endl;
	cout<<"Precio de voleto "<<"\t|"<<precio<<endl; 
	cout<<"Personas totales "<<"\t|"<<person<<endl; 
	cout<<"Total a pagar    "<<"\t|"<<total<<endl;
	cout<<"----------------------------------"<<"\n"; 
		system ("Pause"); 
	
	try {
	db.open("voleto.txt",ios::app); //abrir archivo en modo de agregar datos
	db<<zona<<"\t"<<id<<"\t"<<precio<<"\t"<<person<<"\t"<<total<<endl;
	db.close();
	
	}
	catch (exception& X){
		cout <<"Error en la manipulacion del archivo"<<endl; 
		cout<<"Error: "<<X.what()<<endl; 
		system("Pause"); 
		
	}
	
}

void platea(){
	int cal, total, total2, person, des1, des2, precio;
	char respuesta; 
	string zona, id; 
	ofstream db;
	precio = 130;
	zona ="PLATEA"; 
	id = "P"; 
	cout<<"------------ZONA PLATEA--------------"<<"\n"; 
	cout<<"Ingrese el numero de voletos a comprar"<<endl; 
	cin>>person; 
	cal = precio * person; 
	if(person>=3 && person<=6){
		des1 = cal * 0.05;
	}else if(person>=7 && person<=9){
		des1 = cal * 0.075;
	}else if(person>=9){
		des1 = cal * 0.10; 
	}
		
	do
	{
		cout<<"Es socio?:"<<endl;
		cout<<"\n\nConfirme con Si |S| o No con |N|? S/N";
		cin>>respuesta;
		cout<<"\n"<<endl;
		respuesta = toupper(respuesta); 
		
	}while  (respuesta!='S'); 
	
		if(respuesta='S'){
			des2 = cal * 0.08; 
		
		}total = cal - des1 - des2;
	
	cout<<"---------Datos de compra---------"<<"\n"; 
	cout<<"Zona de la compra"<<"\t|"<<zona<<endl; 
	cout<<"Identificacion   "<<"\t|"<<id<<endl;
	cout<<"Precio de voleto "<<"\t|"<<precio<<endl; 
	cout<<"Personas totales "<<"\t|"<<person<<endl; 
	cout<<"Total a pagar    "<<"\t|"<<total<<endl;
	cout<<"----------------------------------"<<"\n"; 
		system ("Pause"); 
	try {
	db.open("voleto.txt",ios::app); //abrir archivo en modo de agregar datos
	db<<zona<<"\t"<<id<<"\t"<<precio<<person<<"\t"<<total<<endl;
	db.close();
	
	}
	catch (exception& X){
		cout <<"Error en la manipulacion del archivo"<<endl; 
		cout<<"Error: "<<X.what()<<endl; 
		system("Pause"); 
		
	}
	
}

void popular(){
	int cal, precio, total, total2, person, des1, des2;
	char respuesta; 
	string zona, id; 
	precio = 50;
	ofstream db;
	zona ="POPULAR"; 
	id = "E"; 
	cout<<"------------ZONA POPULAR--------------"<<"\n"; 
	cout<<"Ingrese el numero de voletos a comprar"<<endl; 
	cin>>person; 
	cal = precio * person; 
	if(person>=3 && person<=6){
		des1 = cal * 0.05;
	}else if(person>=7 && person<=9){
		des1 = cal * 0.075;
	}else if(person>=9){
		des1 = cal * 0.10; 
	}
		
	do
	{
		cout<<"Es socio?:"<<endl;
		cout<<"\n\nConfirme con Si |S| o No con |N|? S/N";
		cin>>respuesta;
		cout<<"\n"<<endl;
		respuesta = toupper(respuesta); 
		
	}while  (respuesta!='S'); 
	
		if(respuesta='S'){
			des2 = cal * 0.08; 
		
		}total = cal - des1 - des2;
	
	cout<<"---------Datos de compra---------"<<"\n"; 
	cout<<"Zona de la compra"<<"\t|"<<zona<<endl; 
	cout<<"Identificacion   "<<"\t|"<<id<<endl;
	cout<<"Precio de voleto "<<"\t|"<<precio<<endl; 
	cout<<"Personas totales "<<"\t|"<<person<<endl; 
	cout<<"Total a pagar    "<<"\t|"<<total<<endl;
	cout<<"----------------------------------"<<"\n"; 
	system ("Pause"); 
	
	try {
	db.open("voleto.txt",ios::app); //abrir archivo en modo de agregar datos
	db<<zona<<"\t"<<id<<"\t"<<precio<<person<<"\t"<<total<<endl;
	db.close();
	
	}
	catch (exception& X){
		cout <<"Error en la manipulacion del archivo"<<endl; 
		cout<<"Error: "<<X.what()<<endl; 
		system("Pause"); 
		
	}
}
