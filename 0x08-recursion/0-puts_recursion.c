#include "holberton.h"

/**
 * _puts_recursion - prints a string followed by new line
 * @s: string to print
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
