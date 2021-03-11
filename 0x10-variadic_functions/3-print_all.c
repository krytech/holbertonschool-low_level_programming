#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints all arguments
 * @format: argument type (char, int, float char *)
 */

void print_all(const char * const format, ...)
{
	va_list all_list;
	unsigned int i = 0,  spc = 0;
	char *ptr;

	va_start(all_list, format);

	while (format && format[i])
	{
		if (spc)
			printf(", ");
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(all_list, int));
			break;
		case 'i':
			printf("%i", va_arg(all_list, int));
			break;
		case 'f':
			printf("%f", va_arg(all_list, double));
			break;
		case 's':
			ptr = va_arg(all_list, char *);
			if (ptr)
			{
				printf("%s", ptr);
				break;
			}
			printf("(nil)");
			break;
		default:
			spc = 0;
			i++;
			continue;
		}
		spc = 1;
		i++;
	}
	printf("\n");
	va_end(all_list);
}
