#include "T06.h"

void main()
{
	setlocale(LC_ALL, "Ru");
	int a[MAX][MAX], i = 0, j = 0, n;
	cout << "Введите порядок матрицы ";
	cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << "Введите элемент " << i + 1 << " строки, " << j + 1 << " столбца ";
			cin >> a[i][j];
		}
	func(a, n);
	_getch();
}
