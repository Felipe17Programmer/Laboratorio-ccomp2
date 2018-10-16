#include<iostream>
#include<conio.h>

using namespace std;

bool ascend(int a, int b){
	return a<b;
}

bool descend(int a,int b){
	return a>b;
}

void algol1(int arr[],int n,bool (*fp)(int,int)){
	for(int i=0;i<n-1;i++){
		int mini=i;
		for(int j=i+1;j<n;j++){
			if((*fp)(arr[j],arr[mini])){
				mini=j;
			}
		}
		int temp=arr[mini];
		arr[mini]=arr[i];
		arr[i]=temp;
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	
	int arr[]={6,2,5,4,7,8,9,3};
	algol1(arr,8,ascend);
	
	getch();
	return 0;
}
