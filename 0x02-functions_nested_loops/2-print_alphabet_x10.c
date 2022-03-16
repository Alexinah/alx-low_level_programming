#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times in lowercase
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char x;

	while (i++ <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');
	}
}
