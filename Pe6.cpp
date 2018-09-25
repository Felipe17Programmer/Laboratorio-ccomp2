#include <iostream>

using namespace std;

int main()
{
    long long n=600851475143;
    for(int i=1;i<n;i++){
        if(n%i==0){
            n/=i;
        }
    }
    cout<<n;
}

