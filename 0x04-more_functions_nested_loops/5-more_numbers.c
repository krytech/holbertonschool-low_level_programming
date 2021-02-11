#include "holberton.h"

/**
 * more_numbers - prints number 0 - 14
 */

void more_numbers(void)
{
	int i, r;

	for (r = 1; r <= 10; r++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
