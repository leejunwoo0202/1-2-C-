#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

class Person
{
	char* name;
	char* addr;
public:
	Person(const char* name, const char* addr); // 생성자
	~Person(); //소멸자
	void print() const; //이름과 주소 출력
	void chAddr(const char* newAddr); // 주소변경
};
#endif