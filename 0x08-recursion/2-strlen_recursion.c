#include "holberton.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
