#include "SORT.H"

void myswap (int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void sort (int a[], int n)
{
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] < 0)
			{
				if (i + 1 < n && a[i] * a[i + 1] < 0)
					myswap(&a[i], &a[i + 1]);
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}