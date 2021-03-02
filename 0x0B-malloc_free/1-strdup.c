#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strdup - allocates memory and copies a string from input
 * @str: string to copy
 * Return: pointer to copied string, otherwise NULL
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	unsigned int length = 0;

	if (!str)
		return (NULL);

	while (str[length])
		length++;

	s = malloc(sizeof(char) * length + 1);

	if (!s)
		return (NULL);

	else
	{
		for (i = 0; i <= length; i++)
			s[i] = str[i];
	}
	return (s);
}
