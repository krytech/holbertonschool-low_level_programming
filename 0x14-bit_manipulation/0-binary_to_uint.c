#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary num to convert
 * Return: unsigned int, otherwise 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int len = 0;
	unsigned int num = 0;

	if (!b)
		return (0);

	while (b[len]) /* string length - null */
		len++;
	len -= 1;

	/* 1 x (2^len) */
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);

		if (b[i] == '1')
			num += (1 * (1 << len));

		i++;
		len--;
	}
	return (num);
}
