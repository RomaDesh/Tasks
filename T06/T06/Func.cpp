#include "T06.h"

void func(int a[][MAX], int n)
{
	int i, j, k;
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n - j; i++)
		{
			cout << a[j][i] << " ";
		}
		i--;
		for (k = j + 1; k < n; k++)
			cout << a[k][i] << " ";
	}
}