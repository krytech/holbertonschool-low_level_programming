#include "holberton.h"

/**
 * _isupper - checks if the value is uppercase
 * @c: character to be checked
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
