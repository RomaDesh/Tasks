#include <iostream>
#include <fstream>
#include <clocale>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;

void main(int argc, char *argv[])
{
	bool ifn = false, iffn = false;
	int n;
	string FileName;
	setlocale(LC_ALL, "Rus");
	if (argc == 3)
	{
		if (atoi(argv[1]))
		{
			n = atoi(argv[1]);
			FileName = argv[2];
		}
		else
		{
			n = atoi(argv[2]);
			FileName = argv[1];
		}
		ifn = true;
		iffn = true;
	}
	if (argc == 2)
	{
		if (atoi(argv[1]))
		{
			n = atoi(argv[1]);
			ifn = true;
		}
		else
		{
			FileName = argv[1];
			iffn = true;
		}
	}
	if (!iffn)
	{
		cout << "¬ведите им€ файла: " << endl;
		cin >> FileName;
	}
	if (!ifn)
	{
		cout << "¬ведите число: ";
		cin >> n;
	}
	int ar[100][100], i = 0, j = n - 1, k = 1, key = -1;
	bool els = false;
	while (k != n * n + 1)
	{
		els = true;
		ar[i][j] = k;
		k++;
		if ((i == 0 || i == n - 1) && j != 0 && j != n - 1)
		{
			j--;
			key *= -1;
			ar[i][j] = k;
			k++;
			i += key;
			j += key;
			els = false;
		}
		if ((j == 0 || j == n - 1) && i != 0 && i != n - 1)
		{
			i++;
			key *= -1;
			ar[i][j] = k;
			k++;
			i += key;
			j += key;
			els = false;
		}
		if (i == 0 && j == n - 1)
		{
			i++;
			ar[i][j] = k;
			k++;
			i += key;
			j += key;
			els = false;
		}
		if (i == 0 && j == 0)
		{
			i++;
			key *= -1;
			ar[i][j] = k;
			k++;
			i += key;
			j += key;
			els = false;
		}
		if (i == n - 1 && j == n - 1)
		{
			j--;
			key *= -1;
			ar[i][j] = k;
			k++;
			i += key;
			j += key;
			els = false;
		}
		if (els || (i == n - 1 && j == 0))
		{
			i += key;
			j += key;
		}

	}
	ar[n - 1][1] = n * n - 2;
	ar[n - 2][0] = n * n - 1;
	ar[n - 1][0] = n * n;
	ofstream fout;
	fout.open(FileName.c_str());
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << ar[i][j] << " ";
			fout << ar[i][j] << " ";
		}
		cout << endl;
		fout << endl;
	}
	fout.close();
	cin >> n;
}