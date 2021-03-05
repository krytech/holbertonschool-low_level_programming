#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: first bytes of s2
 * Return: pointer to memory with s1 and first n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	unsigned int i;
	char *arr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[length1])
		length1++;
	while (s2[length2])
		length2++;
	if (n < length2)
		length2 = n;

	arr = malloc(sizeof(char) * (length1 + length2 + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= length1; i++)
		arr[i] = s1[i];

	for (i = 0; i <= length2; i++)
		arr[i + length1] = s2[i];

	arr[length1 + length2] = '\0';
	return (arr);
}
