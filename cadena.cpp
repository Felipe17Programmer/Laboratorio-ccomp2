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

bool esPalindromo(char cadena, int size){
    for(int i = 0; i < size/2; i++)
        if(cadena[i] != cadena[size-i-1]) 
            return false;
    return true;   
}

int main(){
	char cad[]="hello";
	
	cout<<strten(cad)<<endl;
	cout<<contarCaracter(cad,'l')<<endl;
	cout<<esPalindromo(cad,6)<<endl;
	
	
	return 0;
}
