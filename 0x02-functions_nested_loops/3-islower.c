#include <stdio.h>
#include "main.h"

/**
 * _islower -Checks for lowercase letters
 * @c: The charcter to be checked
 *
 * Return: 1 if success 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
