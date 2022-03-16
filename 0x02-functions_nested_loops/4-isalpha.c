#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Checks if a letter is lowercase or uppercase
 * @c: Letter to be checked
 *
 * Return: 1 if true 0 otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
