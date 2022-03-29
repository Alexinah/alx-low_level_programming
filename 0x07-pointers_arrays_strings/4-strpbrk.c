#include "main.h"

/**
 * _strpbrk - locates the first occurence in the string s ofd any of the bytes in string accept
 * @s: The c string to be scanned
 * @accept: char in str1 that matches one of the char in str2
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (0);
}
