#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: - string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: printed numbers with separator
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print_list;
	unsigned int i;

	va_start(print_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print_list, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(print_list);
}
