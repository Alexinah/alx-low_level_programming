#include "3-calc.h"

/**
 * op_add - returns sum of a and b
 * @a: integer one
 * @b: integer two
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of the two integers
 * @a: integer one
 * @b: integer two
 * Return: The difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of a and b
 * @a: int one
 * @b: int two
 * Return: product
 */
int op_mul(int a, int b)
{
	int prod;

	prod = a * b;

	return (prod);
}

/**
 * op_div - return the division of a and b
 * @a: int one
 * @b: int two
 * Return : The division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of dividing a and b
 * @a: int one
 * @b: integer two
 * Return: modulous
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

