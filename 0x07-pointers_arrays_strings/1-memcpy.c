#include "holberton.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @n: bytes to copy
 * @src: copy from
 * @dest: copy to
 * Return: dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (; n > 0; n--)
	{
		dest[n - 1] = src[n - 1];
	}
	return (dest);
}
