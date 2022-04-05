#include "main.h"

/**
 * _memset - function that fills the first n bytes of the mem
 * * @s: target
 * @b: constant byte
 * @n: number of byte
 * Return: new value of target
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
