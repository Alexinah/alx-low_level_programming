#include <stdio.h>

/**
 * main - Prints the sum of fibonnacci numbers
 *
 * Return: 0
 *
 */
int main(void)
{
	int cot;
	unsigned long int fib1 = 0, fib2 = 1, sum;

	for (cot = 0; cot < 50; cot++)
	{
		sum = fib1 + fib2;
		printf("%1u", sum);

		fib1 = fib2;
		fib2 = sum;

		if (cot == 49)
			printf("\n");
		else
			printf(", ");

	}
	return (0);
}
