#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: numbers of arguments
 * @av: arguments
 * Return: pointer to the string with all arguments, otherwise NULL
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k = 0;
	int length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* length to malloc */
	for (i = 0; i < ac; i++)
	{
		length += _strlen(av[i]);
	}
	length += (ac + 1); /* adding spaces and null terminator */

		s = malloc(sizeof(char) * length);

	if (!s)
	{
		free(s);
		return (NULL);
	}

        /* copying string with new lines */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}
	return (s);
}
