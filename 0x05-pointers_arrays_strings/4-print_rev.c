#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: String to be printed
 *
 */
void print_rev(char *s)
{
	int leng = 0, index;

	while (s[index++])
		leng++;

	for (index = leng - 1; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}
