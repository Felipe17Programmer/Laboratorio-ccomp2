//reciba puntero entero y reciba si es un año bisiesto
#include<iostream>
#include<conio.h>
using namespace std;

void swap(int *p1, int *p2){
	int temp=*p1;
	*p1= *p2;
	*p2= temp;
}

int potenciaP(int *b, int *e){
	int result=1;
	for(int i=0; i< *e;i++){
		result *= *b;
	}
	return *b;
}

bool bisiestoP(int *a){
	return (!(*a%4)&&!(*a%100==0||*a%400==0));
}
int main(){
	cout<<"TRABAJANDO CON PUNTEROS"<<endl;
	int a=2;
	int b=3;
	int c;
	cout<<"\nWrite a year:";cin>>c;
	swap(&a,&b);
	cout<<a<<" "<<b<<endl;
	cout<<potenciaP(&a,&b)<<endl;
	
	if(bisiestoP(&c)==true){
		cout<<"Si es bisiesto."<<endl;	
	} 
	else{
		cout<<"No es bisiesto."<<endl;
	} 
	
	getch();
	
	return 0;
}
