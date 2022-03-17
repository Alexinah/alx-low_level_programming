#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: number of times  to be printed (\)
 *
 */
void print_diagonal(int n)
{
	int diag = 0;
	int spaces;

	if (n > 0)
	{
		while (diag < n)
		{
			for (spaces = 0; spaces < diag; spaces++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			diag++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
