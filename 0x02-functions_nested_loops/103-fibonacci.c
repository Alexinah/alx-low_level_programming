#include <stdio.h>

/**
 * main - prints the sum of even-valued Fibonacci sequence
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float to_sum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			to_sum += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", to_sum);

	return (0);
}
