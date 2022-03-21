#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - Returns the lenght of th estring
 * @s: The string to be counted
 *
 * Return: length
 */
int _strlen(char *s)
{
	int length;

	while (*s++)
		length++;

	return (length);
}
