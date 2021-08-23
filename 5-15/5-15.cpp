#include <iostream>


VecF& VecF::operator=(const VecF& fv)
{
	if (n != fv.n)
	{
		delete[] arr;
		arr = new float[n = fv.n];
	}
	memcpy(arr, fv.arr, sizeof(float) * n); // 데이터 복사
	return *this;
}