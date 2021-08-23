VecF& VecF::operator=(VecF&& fv)
{
	delete[] arr;
	n = fv.n;
	arr = fv.arr;
	fv.arr = nullptr;
	return *this;
}