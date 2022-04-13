#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: function callback
 * Return: integers, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (array != NULL && cmp != NULL)
	{
		i = 1;

		while (i <= size)
		{
			x = cmp(array[i]);
			if (x != 0)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
