#include "holberton.h"

/**
 * leet - replace letters with numbers to make it leet
 * @a: character to capitalize
 * Return: full string with changes
 */

char *leet(char *a)
{
	int i;
	int x;
	char check[] = "aAeEoOtTlL";
	char change[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (x = 0; check[x]; x++)
			if (check[x] == a[i])
			{
				a[i] = change[x];
				break;
			}
	}
	return (a);
}
