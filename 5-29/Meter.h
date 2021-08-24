#ifndef METER_H_INCLUDED
#define METER_H_INCLUDED
#include <iostream>
using namespace std;

class Meter
{
	int m; // 미터
	int cm; // 센티미터
public:
	// 생성자
	Meter() : m(0), cm(0) {}
	Meter(int meter, int cmeter) : m(meter), cm(cmeter) {}
	void display() const {
		if (m)
			cout << m << "m ";
		if (cm || !m)
			cout << cm << "cm ";
		cout << endl;
	}
	int getM() const { return m; }
	int getCm() const { return cm; }
};

#endif // METER-H_INCLUDED