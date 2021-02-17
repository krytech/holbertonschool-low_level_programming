#include "holberton.h"

/**
 * puts2 - prints every other character from a string
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int i;
	int length;

	while (str[i++])
		length++;

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
