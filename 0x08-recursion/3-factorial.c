#include "main.h"

/**
 * factorial - prints the factorialof numbers
 * @n: integer to find its factorial
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
