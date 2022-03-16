#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: The number in question
 *
 * Return: Value last digit
 *
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		_putchar(-last_digit + 48);
		return (-last_digit);
	}
	else
	{
		_putchar(last_digit + 48);
		return (last_digit);
	}
}
