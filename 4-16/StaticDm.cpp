#include <iostream>
#include "NamedObj.h"
using namespace std;

void f()
{
	NamedObj x("Third");  // �� ��° ��ü�� ����
	x.display(); // �Լ� ��ȯ �� x�� �Ҹ��
}

int main()
{
	cout << "NamedObj Ŭ������ ��ü �� : "
		<< NamedObj::nObj() << endl;
	NamedObj a("First");
	NamedObj b("Second");
	a.display();
	b.display();
	f();
	NamedObj c("Fourth");  
	c.display();
	cout << "NamedObj Ŭ������ ��ü �� : "
		<< NamedObj::nObj() << endl;
	return 0;
}