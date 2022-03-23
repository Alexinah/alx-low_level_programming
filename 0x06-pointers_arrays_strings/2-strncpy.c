#include "main.h"

/**
 * _strncpy - copies at most an iputted no of bytes
 * @dest: destination
 * @src: source string
 * @n: Maximum no of bytes to be copied from src
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, len2 = 0;

	while (src[index++])
		len2++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = len2; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
