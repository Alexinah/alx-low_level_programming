#include "main.h"

/**
 * _isupper - function that verifies if char is uppercase
 * @c: character
 * Return: 1 if uppercase , 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
