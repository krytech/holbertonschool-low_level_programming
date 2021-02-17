#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: string
 * Return: 0
 */

void rev_string(char *s)
{
	int i;
	int length;
	char tmp;

	while (s[i++])
	{
		length++;
	}

	for (i = length - 1; i >= length / 2; i--)
	{
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;
	}
}
