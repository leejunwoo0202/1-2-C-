#include <iostream>
using namespace std;

int main()
{
	int a = 10; 
	int b = 20;

	if (a < b)
	{
		int t = a;
		a = b;
		b = t;
	}

	return 0;
}