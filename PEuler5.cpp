//Problem 2 Even Fibonacci numbers
#include <iostream>
using namespace std;

int main ()
{
	int v1 = 4000000, v2=0, i=1;
	long sum = 0;
	do {
		i += v2;
		if ((i < v1) && (i % 2 == 0)) sum += i;
		v2 = i - v2;
	}
	while (i < v1); 
	cout << "Suma:   " << sum << endl;
	return 0;
}
