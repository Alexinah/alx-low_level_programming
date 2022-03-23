#include "main.h"

/**
 * _strncat - concatenates two strings using the limited space
 * @dest: string to be appended upon
 * @src: string to append
 * @n: number of bytes from src to append to dest
 *
 * Return: pointer to resulting destination
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, len1 = 0;

	while (dest[index++])
		len1++;

	for (index = 0; src[index] && index < n; index++)
		dest[len1++] = src[index];

	return (dest);
}
