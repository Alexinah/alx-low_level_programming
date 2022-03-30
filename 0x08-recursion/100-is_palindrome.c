#include "main.h"

/**
 * find_strlen - length of string
 * @s: string
 * Return: length
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}
/**
 * check_palindrome - checks if a string is palindrome
 * @s: string
 * @len: length
 * @index: index
 * Return: 1 if string is palindrome, 0 if not
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));
	return (0);
}

/**
 * is_palindrome - checks if a string is empty
 * @r: string
 * Return: 1 or 0
 */
int is_palindrome(char *r)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, index));
}

