#include "holberton.h"

/**
 * *_strncat - concatenates two strings using the value n
 * @src: first string to copy from
 * @dest: second string to add to
 * @n: value to add to dest
 * Return: dest value
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (dest[i] != '\0')
		i++;

	while (src[x] != src[n])
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
