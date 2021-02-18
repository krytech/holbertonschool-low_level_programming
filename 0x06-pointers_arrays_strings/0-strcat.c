#include "holberton.h"

/**
 * *_strcat - copy one string and add it to the other
 * @src: first string
 * @dest: second string
 * Return: full string with added value
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (dest[i] != '\0')
		i++;

	while (src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
