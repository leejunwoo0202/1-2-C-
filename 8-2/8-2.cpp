#include <iostream>
using namespace std;

int getMonth()
{
	int month;
	bool exit_flag = false;
	while (!exit_flag)
		cout << "월을 입력하세요:";
	cin >> month;
	if (month < 1 || month > 12)
		cout << "1~12 사이의 값을 입력하세요.\n";
	else
		exit_flag = true;

	return 0;
}