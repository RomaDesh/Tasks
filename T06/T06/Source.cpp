#include "T06.h"

void main()
{
	setlocale(LC_ALL, "Ru");
	int a[MAX][MAX], i = 0, j = 0, n;
	cout << "Vvedite 4islo ";
	cin >> n;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			cout << "Vvedite element " << i + 1 << " stroki, " << j + 1 << " stolbca ";
			cin >> a[i][j];
		}
	func(a, n);
	_getch();
}