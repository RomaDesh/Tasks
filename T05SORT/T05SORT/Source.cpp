#include "SORT.H"

void main()
{
	int a[MAX], i = 0, n;
	setlocale(LC_ALL, "Ru");
	cout << "¬ведите количество чисел в массиве ";
	cin >> n;
	for (; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, n);
	_getch();
}