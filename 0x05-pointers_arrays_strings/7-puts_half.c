#include "holberton.h"

/**
 * puts_half - prints the later half of the string
 * @str: string
 * Return: 0
 */

void puts_half(char *str)
{
	int i = 0;
	int x;

	while (str[i] != '\0')
	{
		i++;
	}
	for (x = 0; x < i; x++)
	{
		if (x > (i - 1) / 2)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
