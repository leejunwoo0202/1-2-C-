#include <iostream>
using namespace std;

int getMonth()
{
	int month;
	bool exit_flag = false;
	while (!exit_flag)
		cout << "���� �Է��ϼ���:";
	cin >> month;
	if (month < 1 || month > 12)
		cout << "1~12 ������ ���� �Է��ϼ���.\n";
	else
		exit_flag = true;

	return 0;
}