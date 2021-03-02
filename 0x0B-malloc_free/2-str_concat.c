#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the two concatendated strings, otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	unsigned int i;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[length1])
		length1++;
	while (s2[length2])
		length2++;

	s = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!s)
		return (NULL);

	for (i = 0; i <= (length1 + length2 + 1); i++)
	{
		if (i < length1)
			s[i] = s1[i];
		else
			s[i] = s2[i - length1];
	}
	return (s);
}
