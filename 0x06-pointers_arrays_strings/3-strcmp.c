#include "main.h"

/**
 * _strcmp - comparesb two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: if s1 < s2, negative difference
 *         if s1 == s2, 0
 *         if s1 > s2, positive diff
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
