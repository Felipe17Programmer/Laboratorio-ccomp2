#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<cstdlib> //para usar system(cls)
#include<windows.h>

#define TECLA_ARRIBA 'i'  //declaraciones constantes para usar las teclas con codigo ascii
#define TECLA_ABAJO 'k'
#define ENTER 13

using namespace std;


void escribir(string texto);
void lectura();
void menu_principal();
void menu_ingresar();
void menu_buscar();
/*
void menu_modificar();
void menu_eliminar();
*/

void gotoxy(int x,int y);
int menu(const char* titulo, const char *opciones[], int n);

class Archivo{
	public:
		Archivo(string texto){
			this->texto=texto;
		}
		void escribir(string texto){
			ofstream archivo;
			archivo.open("Fichero.txt" ,ios::app); //abrimos el archivo en modo añadir texto
			
			if(archivo.fail()){
				cout<<"No se pudo abrir el archivo";
				exit(1);
			}
			archivo<<texto<<endl;
			//archivo<<"Hola que tal?";
			archivo.close(); //cerrramos el archivo
		}
	private:
		string texto;
};

char getch2(){  //permite poder usar menu con el teclado
	char c=0;
	DWORD modo, contador;
	HANDLE ih = GetStdHandle(STD_INPUT_HANDLE);
	
	//DESACTIVAMOS ESCRITURA EN TERMINAL
	SetConsoleMode(ih, modo & ~(ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT));
	
	ReadConsoleA(ih, &c,1,&contador,NULL);
	
	if(c==0){
		ReadConsoleA(ih,&c,1,&contador,NULL);
	}
	
	SetConsoleMode(ih,modo); //Devolvemos control normal
	
	return c;
}



int main(){
	ofstream archivo;
	//tipo de dato - nombre archivo	
	
	//archivo.open(nombreArchivo.c_str(),ios::out); //abriendo el archivo , ios::out si existe lo crea o reemplaza
	archivo.open("Fichero.txt",ios::app); //abriendo el archivo , ios::out si existe lo crea o reemplaza

	if(archivo.fail()){
		archivo.open("Fichero.txt",ios::out);
		exit(1); //strdlib.h para salir del programa rapido
	}

	archivo.close(); //para cerrar el archivo.
	
	menu_principal();	

	return 0;
}

void menu_principal(){
	
	bool repite=true;
	int opcion;

	
	//Titulo y opciones del menu
	const char *titulo="MENU PRINCIPAL";
	const char *opciones[]={"Ingresar","Buscar","Modificar","Eliminar","Salir"};
	int n = 5; //numero de opciones
	
	do{
		opcion = menu(titulo,opciones,n); //funcion debe retornar un entero

		//Alternativas
		switch(opcion){
			case 1:
				menu_ingresar();
				break;
			case 2:
				lectura();
				break;
			case 3:
				cout<<"MODIFICAR";
				//menu_modificar();
				break;
			case 4:
				cout<<"ELIMINAR";
				//menu_eliminar();
				break;
			case 5:
				repite=false;
				break;
		}
	}while(repite);
}

void menu_ingresar(){
	
	bool repite=true;
	int opcion;
	string nombre;
	string  dni,edad;
	string sueldo;
	
	const char *titulo = "DATOS";
	const char *opciones[] = {"Nombres y Apellidos","Edad","DNI","Sueldo","Regresar"};
	int n = 5;
	
	do{
		system("cls");
		opcion = menu(titulo, opciones, n);

		//Alternativas
		
		
		system("cls");
		switch(opcion){
			case 1:
				system("cls");
				cout<<"NOMBRES Y APELLIDOS: ";
				getline(cin,nombre);
				escribir(nombre);
				system("pause>nul"); //nul para no mostrar presione una tecla para continuar
				break;
			case 2:
				system("cls");
				cout<<"EDAD: ";
				getline(cin,edad);
				escribir(edad);
				system("pause>nul");
				break;
			case 3:
				system("cls");
				cout<<"DNI: ";
				getline(cin,dni);
				escribir(dni);
				system("pause>nul");
				break;
			case 4:
				system("cls");
				cout<<"SUELDO: ";
				getline(cin,sueldo);
				escribir(sueldo);
				system("pause>nul");
				break;
			case 5:
				repite=false;
				break;
		}
	}while(repite);	
}

void menu_buscar(){
	system("cls");
	string busca;
	char cadena[80];
	//cout<<"Buscar: "; cin>>busca;
	ifstream archivo;
	
	string texto;
	archivo.open("Fichero.txt",ios::in);
	
	if(!archivo.fail()){
		archivo.getline(cadena,80,'\n');
	}

	while(!archivo.eof()){
		
		cout<<cadena<<endl;
		archivo.getline(cadena,80,'\n');
		/*bool encontrado = false;
		getline(archivo,texto);
		if(busca==texto){
			encontrado=true;
			cout<<"Nombre..."<<texto<<endl;
			
		}*/
	}
	archivo.close();
	
}

int menu(const char* titulo, const char *opciones[], int n){
	int opcionSeleccionada = 1;
	int tecla;
	bool repite=true;
	do{
		system("cls");
		
		gotoxy(5,3+opcionSeleccionada);  cout<<"==>";  //gotoxy pertenece a conio.h e imprime en coordenadas
		//imprimir titulo
		gotoxy(15,2); cout<<titulo;
		//imprimir opciones
		for(int i=0;i<n;i++){
			gotoxy(10,4+i); cout<<i+1<<")"<<opciones[i];
		}
		
		do{
			tecla=getch2(); //getch captura la tecla presionada por el ususario
		}while(tecla != TECLA_ARRIBA && tecla != TECLA_ABAJO && tecla != ENTER);
		
		switch(tecla){
			case TECLA_ARRIBA:
				opcionSeleccionada--;
				
				//opcion empieza en 1 si retrocede un espacio ocurre lo siguiente
				if(opcionSeleccionada < 1){
					opcionSeleccionada = n;
				}
				break;
				//opcion que llega a 5 si sube un espacio ocurre lo siguiente
			case TECLA_ABAJO:
				opcionSeleccionada++;
				if(opcionSeleccionada > n){
					opcionSeleccionada = 1;
				}
				break;
			case ENTER:
				repite = false;
				break;
		}
		
	}while(repite);
	
	return opcionSeleccionada;
}

 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}


void escribir(string texto){
	ofstream archivo;
	archivo.open("Fichero.txt" ,ios::app); //abrimos el archivo en modo añadir texto
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	archivo<<texto<<endl;
	//archivo<<"Hola que tal?";
	archivo.close(); //cerrramos el archivo
}

void lectura(){
	bool repite=true;
	ifstream archivo;  //if es de input o de lectura	
	string texto;
	
	archivo.open("Fichero.txt",ios::in); //abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
		system("cls");
		while(!archivo.eof()){ //mientras no sea el final del arcivo
		getline(archivo,texto); //copiar todo del archivo en variable string
		cout<<texto<<endl;
		}
		
	
		
	
	
	archivo.close(); //cerramos el programa
	
}
