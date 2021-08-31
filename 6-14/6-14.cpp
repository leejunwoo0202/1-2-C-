#include <iostream>
using namespace std;

class AClass {
public:
	virtual void vf() const = 0;
	void f1() const {
		cout << "Abstract" << endl;
	}
};

// 상세 클래스
class CClass :public AClass {
public:
	void f1() const { cout << "순수가상함수 구현" << endl; }
	void f2() const {
		cout << "Concrete" << endl;
	}
};