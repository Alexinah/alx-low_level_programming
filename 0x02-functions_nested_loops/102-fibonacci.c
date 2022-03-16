#include <stdio.h>

/**
 * main - Prints the sum of fibonnacci numbers
 *
 * Return: 0
 *
 */
int main(void)
{
	int a;
	long int n1, n2, fib;

	n1 = 1;
	n2 = 2;

	printf("%1d, %1d", n1, n2);
	for (a = 0; a < 48; a++)
	{
		fib = n1 + n2;
		printf(", %1d", fn);
		n1 = n2;
		n2 = fib;
	}
	printf("\n");
	return (0);
}
