#include "main.h"

/**
 * print_line - draws a straight line
 * @n: no of times the character _ is printed
 *
 * Return: always 0
 */
void print_line(int n)
{
	int ln = 0;

	while (ln < n)
	{
		_putchar('_');
		ln++;
	}
	_putchar('\n');
}
