#include <stdio.h>

/**
 * main - prints name of program follwed by newline
 * @argc: number of command line arguments
 * @argv: array that contains the program command lin arguments
 * Return: 0 - success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
