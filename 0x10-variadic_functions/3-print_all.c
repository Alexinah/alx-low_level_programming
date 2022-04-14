#include "variadic_functions.h"

/**
 * print_c - prints char
 * @list: argument char
 * @separator: separator
 */
void print_c(va_list list, char *separator)
{
	printf("%s%c", separator, va_arg(list, int));
}
/**
 * print_i - prints ints
 * @list: arg list
 * @s: separator
 * Return: none
 */
void print_i(va_list list, char *s)
{
	printf("%s%d", s, va_arg(list, int));
}
/**
 * print_f - prints floats
 * @separator: float to print
 * @list: next arg of lists to prints
 * Return: none
 */
void print_f(va_list list, char *separator)
{
	printf("%s%f", separator, va_arg(list, double));
}
/**
 * print_s - prints string
 * @separator: separator
 * @list: list to print
 * Return: none
 */
void print_s(va_list list, char *separator)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s%s", separator, s);
}
/**
 * print_all - prints out everything
 * @format: format is list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *separator;
	int i, j;

	format_type fm[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(list, format);

	separator = "";

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(fm[j]).fm)
			{
				fm[j].p(list, separator);
				separator = ", ";
			}
			j++;

		}
		i++;
	}
	printf("\n");
	va_end(list);
}
