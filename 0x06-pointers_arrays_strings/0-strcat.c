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
	char dest[98];
	char src[];
	int len1, len2;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	_putchar(dest[len1 + i]);
}

