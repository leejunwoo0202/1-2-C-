#include <iostream>
using namespace std;

double hmean(double a, double b)
{
	if (a == -b)   // 예외 검출
		throw "조화평균을 계산할 수 없음!";
	return 2.0 * a * b / (a + b);
}

int main(int argc, char* argv[])
{
	double x, y, z;
	cout << "두 수를 입력하시오:";
	while (cin >> x >> y)
	{
		try {
			z = hmean(x, y);
		}

		catch(const char* s){  // 예외처리
			cout << s << endl;
			cout << "다른 수를 입력하시오:";
			continue;
		}

		cout << "조화평균 = " << z << endl;
		cout << "다음 두 수를 입력하시오(Q는 종료):";
	}
	return 0;
}