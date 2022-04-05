#include "main.h"

/**
 * _memset - Sets mem
 * @s: target
 * @b: constant byte
 * @n: number of bytes
 * Return: return new value of target
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
