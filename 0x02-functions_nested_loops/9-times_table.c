#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int x, multi, prod;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			prod = x * multi;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
