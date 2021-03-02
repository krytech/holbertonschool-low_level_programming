#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and fill it with char c
 * @size: size of the array
 * @c: char to put in the array
 * Return: pointer to the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	else
	{
		for (i = 0; i < size; i++)
			s[i] = c;
	}
	return (s);
}
