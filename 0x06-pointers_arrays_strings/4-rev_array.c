#include "main.h"

/**
 * reverse_array - reverses contents of array
 * @a: The array to be reveresd
 * @n: nomber of elements in the array
 */
void reverse_array(int *a, int n)
{
	int t, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		t = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = t;
	}
}
