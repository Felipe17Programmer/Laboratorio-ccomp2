#include<iostream>
#include<conio.h>

using namespace std;

int strten(char cadena[]){
	char current= cadena[0];
	int cont=0;
	for(int i=0;current != '\0';current=cadena[i++]){
		cont +=1;
	}
	return cont;
}

int contarCaracter(char cadena[],char a){
	int i=0;
	int b=0;
	while(cadena[i] != '\0'){
		if(cadena[i]==a){
			b++;
			i++;
		}
		else{
			i++;
		}
	}
	return b;
}

bool palindr(char cadena[]){
	string alreves;
	int tamano=strten(cadena)-1;
	for(int i=tamano-1;i>=0;i--){
		alreves=alreves+cadena[i];
	}
	if(alreves == cadena){
		return true;
	}
	else{
		return false;
	}

}


int main(){
	char cad[]="ana";
	
	cout<<strten(cad)<<endl;
	cout<<contarCaracter(cad,'l')<<endl;
	cout<<palindr(cad)<<endl;
	
	getch();
	return 0;
}
