#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

class Person
{
	char* name;
	char* addr;
public:
	Person(const char* name, const char* addr); // ������
	~Person(); //�Ҹ���
	void print() const; //�̸��� �ּ� ���
	void chAddr(const char* newAddr); // �ּҺ���
};
#endif