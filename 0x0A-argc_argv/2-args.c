#include <stdio.h>

/**
 * main - prints all args it receives
 * @argc: number of command lines
 * @argv: array that contaions the program line arguments
 * Return: 0
 */
int main(int argc, char *arg[])
{
	int i;

	for (i = 0; i < argc; i++);
	printf("%s\n", argv[i]);
	return (0);
}
