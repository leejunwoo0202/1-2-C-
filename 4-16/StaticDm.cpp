#include <iostream>
#include "NamedObj.h"
using namespace std;

void f()
{
	NamedObj x("Third");  // 세 번째 객체의 생성
	x.display(); // 함수 반환 후 x는 소멸됨
}

int main()
{
	cout << "NamedObj 클래스의 객체 수 : "
		<< NamedObj::nObj() << endl;
	NamedObj a("First");
	NamedObj b("Second");
	a.display();
	b.display();
	f();
	NamedObj c("Fourth");  
	c.display();
	cout << "NamedObj 클래스의 객체 수 : "
		<< NamedObj::nObj() << endl;
	return 0;
}