#include "holberton.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string to search
 * @accept: value to search for
 * Return: matched string
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (accept[x] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
