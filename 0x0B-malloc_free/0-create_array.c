#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: storage char
 *
 * Return: storage char
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	cr = (char *) malloc(sizeof(char) * size);

	if (cr == NULL)
		return (0);

	while (i < size)
	{
		*(cr + i) = c;
		i++;
	}
	*(cr + i) = '\0';
	return (cr);
}
