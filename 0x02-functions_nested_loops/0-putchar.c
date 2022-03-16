#include <stdio.h>

/**
 * main - prints putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		putchar(text[i]);
	}
	putchar(10);

	return (0);
}
