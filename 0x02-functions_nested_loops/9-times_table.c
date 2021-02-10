#include "holberton.h"

/**
 * times_table - makes a multiplication table for 9
 */

void times_table(void)
{
	int row;
	int column;
	int product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = (row * column);

			if (product <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			if (column != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
