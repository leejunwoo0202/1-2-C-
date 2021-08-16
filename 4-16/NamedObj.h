#ifndef NAMEDOBJ_H_INCLUDED
#define NAMEDOBJ_H_INCLUDED
#include <iostream>
using namespace std;

class NamedObj
{
	char* name;
	int id;
	// static 单捞磐 糕滚
	static int nConstr; // 积己等 按眉荐
	static int nDestr;  // 家戈等 按眉荐
public:
	NamedObj(const char* s); //积己磊
	~NamedObj();
	void display() const
	{
		cout << "ID : " << id << " --> 捞抚: " << name << endl;

	}
	static int nObj()
	{
		return nConstr - nDestr;
	}
};

#endif