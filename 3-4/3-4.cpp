#include <iostream>
using namespace std;

//ȭ���µ��� �����µ��� ��ȯ�ϴ� �Լ�
//�Ű����� float fahr:ȭ���µ�
//��ȯ�� �����µ�(float)
float FahrToC(float fahr)
{
	fahr -= 32;
	return fahr * 5 / 9;
}

int main()
{
	float fTemp, cTemp;

	cout << "ȭ���µ�:";
	cin >> fTemp;
	cTemp = FahrToC(fTemp);
	cout << "---> �����µ� : " << cTemp << endl;
	return 0;
}