#include <iostream>
using namespace std;

double hmean(double a, double b)
{
	if(a == -b)
		{
		cerr << "나누기를 할 수 없습니다." << endl;
		exit(EXIT_FAILURE);
		}
	return 2.0 * a * b / (a + b);
}