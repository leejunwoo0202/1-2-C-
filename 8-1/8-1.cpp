#include <iostream>
using namespace std;

double hmean(double a, double b)
{
	if(a == -b)
		{
		cerr << "�����⸦ �� �� �����ϴ�." << endl;
		exit(EXIT_FAILURE);
		}
	return 2.0 * a * b / (a + b);
}