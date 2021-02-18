#include "holberton.h"

/**
 * *_strncat - copies a string using n value
 * @src: string to use
 * @dest: string to copy to
 * @n: characters of string to copy
 * Return: dest final string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
