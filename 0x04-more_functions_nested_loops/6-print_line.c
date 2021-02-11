#include "holberton.h"

/**
 * print_line - prints a underscore line based on n value
 * @n: line length value
 * Return: underscore line with n value lenth
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
