#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str1[40] = "C style string";
	char str2[] = "Object-Oriented";
	const char* str3 = "Programming";

	cout << str1 << endl;
	cout << str3 << "의 문자열 길이는";
	cout << strlen(str3) << endl;
	strcpy_s(str1, str2);
	cout << str1 << endl;
	strcat_s(str1, str3);
	cout << str1 << endl;
	return 0;
}