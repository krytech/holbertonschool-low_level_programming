#include "holberton.h"

/**
 * print_triangle - prints triangle with # using size value
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int height;
	int width;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			for (width = 1; width <= size; width++)
			{
				if (width <= (size - height))
				{
					_putchar(' ');
				}
				else
				{
				_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
