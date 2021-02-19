#include "holberton.h"

/**
 * string_toupper - convert a char string from lowercase to uppercase
 * @a: char string
 * Return: uppercase string
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
	}
	return (a);
}
