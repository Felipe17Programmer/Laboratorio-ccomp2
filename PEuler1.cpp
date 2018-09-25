//Project Euler  1.Multiples of 3 and 5
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    for(n=1;n<1000;n++)
    { 
        if(n%3==0 || n%5==0){ sum = sum + n;}
    }
    cout<<""<<sum<<endl;
      	
    return 0;
}
