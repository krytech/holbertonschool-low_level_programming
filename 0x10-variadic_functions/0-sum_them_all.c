#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the parameters
 * @n: number of parameters
 * Return: the sum, otherwise 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add_list;
	int sum = 0;
	unsigned int i;

	if (!n)
		return (0);

	va_start(add_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(add_list, int);

	va_end(add_list);

	return (sum);
}
