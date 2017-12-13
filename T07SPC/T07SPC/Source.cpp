#include <iostream>
#include <fstream>
#include <cstring>
#include <clocale>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	ifstream fin;
	bool key = false;
	char str[1000] = {};
	fin.open("text.txt");
	fin.getline(str, 1000);
	fin.close();
	ofstream fout;
	fout.open("result.txt");
	for (int i = 0; i < 1000 && !key; i++)
	{
		if (str[i] != 0)
		{
			if (str[i + 1] == 0)
				key = true;
			if (!key)
			{
				if (str[i] != 32)
					fout << str[i];
				else if(str[i] != str[i + 1])
					fout << str[i];
			}
			else
				fout << str[i];
		}
	}
	fout.close();
	cout << "Успешно";
}