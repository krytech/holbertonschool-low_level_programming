#include "holberton.h"

/**
 * _puts - puts in stdout
 * @str: string
 *Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
