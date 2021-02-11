#include "holberton.h"

/**
 * more_numbers - prints number 0 - 14
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
			_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
