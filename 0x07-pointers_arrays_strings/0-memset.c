#include "holberton.h"

/**
 * _memset - fills the first n bytes of memory pointed to
 *           by s with the constant byte b
 * @s: string starting location
 * @n: how many bytes to replace
 * @b: value that will be replaced
 * Return: changed pointer string
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
	{
		s[n - 1] = b;
	}
	return (s);
}
