//Project Euler  3 Special Pythagorean triplet
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x,y,z,a;
    for(x=1;x<=1000;x++)
    {
        for(y=1;y<=1000;y++)
        {
            a = x*x+y*y;
            z=sqrt(a);
            if(z*z==a && x+y+z==1000 && x<y){
            cout<<x<<","<<y<<","<<z<<"."<<"\n";
            cout<<x*y*z;
            }
        }
    }
    return 0;
}
