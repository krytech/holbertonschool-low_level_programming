#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the parameters
 * @n: number of parameters
 * Return: the sum, otherwise 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_list;
	int sum = 0;
	unsigned int i;

	if (!n)
		return (0);

	va_start(sum_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(sum_list, int);

	va_end(sum_list);

	return (sum);
}
