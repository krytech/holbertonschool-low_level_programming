#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed in-between strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string_list;
	unsigned int i;
	char *string;

	va_start(string_list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(string_list, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(string_list);
}
