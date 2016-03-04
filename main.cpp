#include<iostream>
#include<vector>
#include"usuario.h"
#include"game.h"
#include"string"
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
int main(int argc,char*argv[]){
	vector<game> juegos;
	vector<usuario> usuarios;
	int seguir=0;
	cout<<"que desea hacer"<<endl<<"1 Agregar usuario"<<endl<<"2 Modificar un usuario"<<endl<<"3 Agregar un juego"<<endl<<"4 Eliminar un juego"<<endl<<"5 listar usuarios"<<endl<<"6 lustar juegos"<<endl<<" 7 salir"<<endl;
		cin>>seguir;
	while(seguir != 7){
			
			
	
		if(seguir==1){
			
			bool existe=false;
			string nombre;
			string contra;
			cout<<"Ingrese el nombre";
			cin>>nombre;
			cout<<"Ingrese el nombre";
			cin>>contra;
			for(int x=0;x<usuarios.size();x++){
					if(usuarios[x].getUsername().compare(nombre)==0){
						existe=true;			
					}		
			}
			if(existe==true){
				cout<<"lo lamento ya existe"<<endl;		
			}else{
				usuario pi(nombre,contra);
				usuarios.push_back(pi);
			}	
				
		
		}
		
		if(seguir==2){
			int op;
			cout<<"ingrese 1 para agregar juego 2 para eliminar un juego y 3 para cambiar ocntraseña"<<endl;
			cin>>op;
			if(op==3){
				string nombre;
				string contra;
				string contranueva;
				bool existe=false;
				int pos=0;
				cout<<"Ingrese su nombre"<<endl;
				cin>>nombre;
				cout<<"Ingrese la contraseña "<<endl;
				cin>>contra;
				
				for(int x=0;x<usuarios.size();x++){
					if(usuarios[x].getUsername().compare(nombre)==0){
						existe=true;
						pos=x;			
					}		
				}
				bool esta=false;
				bool este=false;
				if(existe==true){
					esta=usuarios[pos].isValidPassword("a",contra);		
				}else{
					cout<<"usuario no existe"<<endl;
				}
				if(esta==true){
					cout<<"Ingrese la contraseña nueva ";
					cin>>contranueva;
					este=usuarios[pos].changePassword(contra, contranueva);			
				}else{
					cout<<"contraseña incorrecta"<<endl;			
				}					
			}
			if(op==1){
				string nombre;
				string contra;
				string contranueva;
				bool existe=false;
				int pos=0;
				int pos1=0;
				cout<<"Ingrese su nombre"<<endl;
				cin>>nombre;
				cout<<"Ingrese la contraseña "<<endl;
				cin>>contra;
				
				for(int x=0;x<usuarios.size();x++){
					if(usuarios[x].getUsername().compare(nombre)==0){
						existe=true;
						pos=x;			
					}		
				}
				bool esta=false;
				bool este=false;
				if(existe==true){
					esta=usuarios[pos].isValidPassword("a",contra);		
				}else{
					cout<<"usuario no existe"<<endl;
				}
				if(esta==true){
					int pos=0;
					for(int x=0;x<juegos.size();x++){
						cout<<juegos[x].getId()<<endl;
								
					}
					cout<<"Ingrese el id que desea"<<endl;
					cin>>pos1;	
					usuarios[pos].addGame(pos1);
				}else{
					cout<<"contraseña incorrecta"<<endl;				
				}	
			}
			if(op==2){
				string nombre;
				string contra;
				string contranueva;
				bool existe=false;
				int pos=0;
				int pos1=0;
				cout<<"Ingrese su nombre"<<endl;
				cin>>nombre;
				cout<<"Ingrese la contraseña "<<endl;
				cin>>contra;
				
				for(int x=0;x<usuarios.size();x++){
					if(usuarios[x].getUsername().compare(nombre)==0){
						existe=true;
						pos=x;			
					}		
				}
				bool esta=false;
				bool este=false;
				if(existe==true){
					esta=usuarios[pos].isValidPassword("a",contra);		
				}else{
					cout<<"usuario no existe"<<endl;
				}
				string p=" ";	
				if(esta==true){
					p=usuarios[pos].toString();
					cout<<p;
					cout<<"Ingrese el id que desea"<<endl;
					cin>>pos1;	
					usuarios[pos].deleteGame(pos1);			
				}else{
					cout<<"contraseña incorrecta"<<endl;			
				}								
			}					
		}
		if(seguir==3){
			bool existe=false;
			int id;
			int ano;
			string desarolladores;
			string genero;
			string nombre;
			cout<<"Ingrese el id  ";
			cin>>id;
			cout<<"Ingrese el año  ";
			cin>>ano;
			cout<<"Ingrese los desarolladores  ";
			cin>>desarolladores;
			cout<<"Ingrese el genero  ";
			cin>>genero;
			cout<<"Ingrese el nombre  ";
			cin>>nombre;
			
			for(int x=0;x<juegos.size();x++){
				if(juegos[x].getId()==id){
					existe=true;			
				}		
			}
			if(existe==true){
				cout<<"lo lamento ya existe"<<endl;		
			}else{
				game pi(id,nombre,ano,desarolladores,genero);
				juegos.push_back(pi);
			}		
		
					
		}
		if(seguir==5){
			string p=" ";
			for(int x=0;x<usuarios.size();x++){
				p=usuarios[x].toString();
				cout<<p<<endl;			
			}					
		}
		if(seguir==6){
			string p=" ";
			for(int x=0;x<juegos.size();x++){
				p=juegos[x].toString();
				cout<<p<<endl;			
			}			
		}	
		cout<<"que desea hacer"<<endl<<"1 Agregar usuario"<<endl<<"2 Modificar un usuario"<<endl<<"3 Agregar un juego"<<endl<<"4 Eliminar un juego"<<endl<<"5 listar usuarios"<<endl<<"6 lustar juegos"<<endl<<" 7 salir"<<endl;
		cin>>seguir;
	}
	return 0;
	
}

