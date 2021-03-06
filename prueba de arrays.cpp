//Arrays problems: suma, mayor, contar primos, ordenar ascendente y descendente, invertir
#include<iostream>
#include<conio.h>
using namespace std;

int print(int array[], int lenght){
    for(int i =0; i < lenght; i++){
            cout<<array[i]<<" ";      
    } 
}

int suma(const int array[], const int lenght){
    int sum=0;
    for(int i =0; i < lenght; sum+= array[i++]);
    return sum;     
}

int mayor(const int array[], const int lenght){
    int may= array[0];
    for(int i =0; i < lenght; array[i++]){
            if(may < array[i]){
                   may = array[i];       
            }
    }
    return may; 
}

int ordenados(int array[], int lenght){
    int aux,i,j,min,aux2;
    //Algoritmo de ordenamiento por seleccion
    for(i=0;i<lenght;i++){
    	min=i;
    	for(j=i+1;j<lenght;j++){
    		if(array[j]<array[min]){
    			min=j;
    		}
    	}
    	aux= array[i];
    	array[i]=array[min];
    	array[min]=aux;	
    }
    
    cout<<"Orden Ascendente: ";
    for(i=0;i<lenght;i++){
    	cout<<array[i]<<" ";
    }
    
    cout<<"\nOrden Descendente: ";
    for(i=lenght-1;i>=0;i--){
    	cout<<array[i]<<" ";
    }
    return 0;
}

int inversion(int array[],int lenght){
	int aux2;
	for(int i=0;i<lenght/2;i++){
		aux2=array[i];
		array[i]=array[lenght-1 -i];
		array[lenght-1 -i]=aux2;
	}
	cout<<"\nOrden Inverso: ";
	for(int i=0;i<lenght;i++){
    	cout<<array[i]<<" ";
    }
	return 0;
}

int contP(int array[],int lenght){
	int cont=0;
	int j;
	bool primo=true;
	for(int i=0; i<lenght;i++){
		bool primo=true;
		for(j=2;j<array[i]-1;j++){
			if(array[i]%j==0){
				primo=false;
				j=array[i];
			}
		}
		if(primo==true){
			cont++;
		}
	}
	cout<<"\nCantidad de Primos: "<<cont<<endl;
	
	return 0;	
}

int main(){
    int array1[100],n;
    cout<<"Digite el numero de elemento que tendra el arreglo: ";
    cin>>n;
    
    for(int i=0;i<n;i++){
    	cout<<"Digite un numero: ";
    	cin>>array1[i]; //Guardando elementos en arreglo
    }
    
    cout<<"\nSu arreglo es:"<<endl;
    print(array1,n);
    cout<<"\nSuma es: "<<suma(array1,n)<<endl; 
 	cout<<"Mayor elemento es: "<<mayor(array1,n)<<endl;
 	ordenados(array1,n);
 	inversion(array1,n);
 	contP(array1,n);
    getch();
    return 0;
}
