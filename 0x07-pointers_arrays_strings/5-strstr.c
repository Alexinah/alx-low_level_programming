#include "main.h"

/**
 * _strstr -Finds the first occurerence of a substring needle in the string haystack
 * @haystack:String to be searched
 * @needle: Subtring being searched
 * Return: pointer to the beginning of the located substring, NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
