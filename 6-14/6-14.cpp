#include <iostream>
using namespace std;

class AClass {
public:
	virtual void vf() const = 0;
	void f1() const {
		cout << "Abstract" << endl;
	}
};

// �� Ŭ����
class CClass :public AClass {
public:
	void f1() const { cout << "���������Լ� ����" << endl; }
	void f2() const {
		cout << "Concrete" << endl;
	}
};