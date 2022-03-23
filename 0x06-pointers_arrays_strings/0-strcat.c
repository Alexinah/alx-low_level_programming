#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest : destination
 * @src: source
 * Return: pointer to resulting dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, len1 = 0;

	while (dest[index++])
		len1++;

	for (index = 0; src[index]; index++)
		dest[len1++] = src[index];

	return (dest);
}
