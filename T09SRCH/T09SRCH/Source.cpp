#include <iostream>
#include <fstream>
#include <clocale>
#include <cstring>
#include <sstream>

using namespace std;

void main(int argc, char *argv[])
{
	int n, c = 0, j = 1, i;
	bool k = true, res = false;
	string FileName, str;
	char b;
	setlocale(LC_ALL, "Rus");
	if (argc == 3)
	{
		str = argv[1];
		FileName = argv[2];
	}
	else
	{
		cout << "������� ��������� ��������� ������";
		return;
	}
	ifstream fin;
	fin.open(FileName.c_str());
	if (!fin.is_open())
	{
		cout << "�� ������� ������� ����";
		return;
	}
	n = str.length();
	while (!fin.eof() && !res)
	{
		for (i = 0; i < n && k; i++)
		{
			b = fin.get();
			c++;
			if (str.c_str()[i] != b)
				k = false;
		}
		if (i == n)
			res = true;
		k = true;
		if (b == '\n')
		{
			c = 0;
			j++;
		}
	}
	fin.close();
	if (res)
		cout << "������� ���������� � " << j << " ������, ������� � " << c - n + 1 << " �������" << endl;
	else
		cout << "���������� �� �������" << endl;

}