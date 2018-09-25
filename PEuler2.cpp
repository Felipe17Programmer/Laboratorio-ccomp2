//Project Euler  2 SUM AQUARE DIFFERENCE
#include <iostream>
#include <cmath>
using namespace std;

unsigned int sum(int);
unsigned int sqsum(int);

int main(){
    cout << sum(100)*sum(100) - sqsum(100);
}
unsigned int sum(int n) {
    return (n*(n+1))/2;
}

unsigned int sqsum(int n) {
    return ((n)*(n+1)*(2*n +1 ))/6 ;
}
