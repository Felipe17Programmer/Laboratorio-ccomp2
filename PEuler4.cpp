//Project Euler  4
#include <iostream>

using namespace std;

int main()
{
   int ant=1,sum=0,n;
   cin>>n;
   while(true){
        sum+=ant;
        ant+=sum;
	if(sum>4000000 || ant>4000000) break;
        cout<<sum<<"\t"<<ant<<"\t";
   }

}
