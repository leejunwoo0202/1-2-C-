ostream& operator<<(ostream& os, const Complex2& c)
{
	os << "(" << c.rPart; // �Ǽ��� ���
	if (c.iPart > 0)
		os << "+j" << c.iPart;
	else if (c.iPart < 0)
		os << "-j" << -c.iPart;
	cout << ")";
	return os;
}