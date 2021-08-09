#include <iostream>
using namespace std;

int main()
{
	int a = 10, b = 20;
	int &aRef = a;
	cout << aRef << endl;
	aRef = 100;
	aRef = b;

	return 0;
}