#include "holberton.h"

/**
 * _isalpha - checks for an alphabetical character
 * @c: character to check
 * Return: 1 if lower or uppercase character, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
