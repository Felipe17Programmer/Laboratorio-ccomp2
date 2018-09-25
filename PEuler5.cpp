//Problem 2
#include <iostream>
using namespace std;

int main (int argc, char* argv[])
{
	int v1 = 4000000, next = 0, i = 1;
	long sum = 0;
	do 
	{
		i += next;
		
		if ((i < v1) && (i % 2 == 0)) sum += i;

		next = i - next;
	}
	while (i < v1); 
	
	cout << "Suma:   " << sum << endl;
	
	return 0;
}
