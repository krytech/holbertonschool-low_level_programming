#include "holberton.h"

/**
 * _isdigit - checks if value is a number or not
 * @c: value to check
 * Return: 1 if a number, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
