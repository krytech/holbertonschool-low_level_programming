#include "holberton.h"

/**
 * _strchr - search within a string
 * @s: string to search
 * @c: character to look for
 * Return: found character or NULL if none
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	else
		return ("NULL");
}
