//ordenar arreglo e imprimir ordenado
//usar new int and delete para arreglos
//arreglo con memoria dinamica
#include<iostream>
using namespace std;

int *funcion(){
	int*ptr=new int;
	*ptr=5;
	return ptr;
}

void algol1(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int mini=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[mini]){
				mini=j;
			}
		}
		int temp=arr[mini];
		arr[mini]=arr[i];
		arr[i]=temp;
	}
	
}

int main(){
	int n;
	cin>>n;
	int *ptr=new int[n];
	for(int i=0;i<n;i++){
		cin>>ptr[i];
	}
	algol1(ptr,n);
	for(int i=0;i<n;i++){
		cout<<ptr[i]<<" ";
	}
	delete[] ptr;
	return 0;
}
