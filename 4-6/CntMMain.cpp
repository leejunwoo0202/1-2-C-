#include <iostream>
#include "CounterM.h"
using namespace std;

int main()
{
	CounterM cnt(9);

	cout << "������� ���� ��: " << cnt.getValue() << endl;
	for (int i = 0; i < 12; i++)
	{
		cnt.count();
		cout << "������� ���� ��: " << cnt.getValue() << endl;
	}
	return 0;
}