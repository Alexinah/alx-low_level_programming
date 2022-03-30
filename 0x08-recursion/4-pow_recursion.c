#include "main.h"

/**
 * _pow_recursion - Prints the power of numbers
 * @x: integer being raised
 * @y: power value
 * Return: value of powe	r
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
