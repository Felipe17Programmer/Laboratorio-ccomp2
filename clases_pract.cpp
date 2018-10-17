//crear arreglo de puntos y ordenarlo en base a la coordenada x
//crear clase para arreglo con nombres y ordenarlo alfabeticamente
#include<iostream>
#include<conio.h>

using namespace std;

class Alumno{
	public:
		char *name;
};
class Punto{
	public:
		double x;
		double y;
};

/*class Vector{
	public:
		Point  entrada;
		Point  salida;
};
*/

void print_arr(Punto arr[],int tam){
	for(int i=0;i<tam;i++){
		cout<<arr[i].x<<","<<arr[i].y<<endl;
	}
}

void print_arr2(Alumno arr[],int tam){
	for(int i=0;i<tam;i++){
		cout<<arr[i].name<<endl;
	}
}
void algol(Punto arr[],int tam){
	for(int i=0;i<tam-1;i++){
		int mini=i;
		for(int j=i+1;j<tam;j++){
			if(arr[j].x<arr[mini].x){
				mini=j;
			}
		}
		int temp=arr[mini].x;
		arr[mini].x=arr[i].x;
		arr[i].x=temp;
		int temp2=arr[mini].y;
		arr[mini].y=arr[i].y;
		arr[i].y=temp2;
	}
}

int main(){
	
	/*
	int n;
	cin>>n;
	Punto arrPunto[20];
	for(int i=0;i<n;i++){
		cin>>arrPunto[i].x;
		cin>>arrPunto[i].y;
	}
	
	arrPunto[0].x=6;
	arrPunto[0].y=2;
	arrPunto[1].x=1;
	arrPunto[1].y=4;
	arrPunto[2].x=3;
	arrPunto[2].y=6;
	
	print_arr(arrPunto,3);
	algol(arrPunto,3);
	cout<<"\n";
	print_arr(arrPunto,3);
	*/
	int n;
	cin>>n;
	Alumno arrAlumno[20];
	for(int i=0;i<n;i++){
		cin>>arrAlumno[i].name;
	}
	cout<<"\n";
	print_arr2(arrAlumno,n);
	getch();
	return 0;
}
