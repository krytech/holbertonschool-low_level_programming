#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line based on n
 * @n: length of line
 */

void print_diagonal(int n)
{
	int space;
	int slash;

	if (n > 0)
	{
		for (slash = 0; slash < n; slash++)
		{
			for (space = 0; space < slash; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
