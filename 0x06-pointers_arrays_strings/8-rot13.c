#include "holberton.h"

/**
 * rot13 - encode a string using rot13
 * @a: char to check and change
 * Return: changed string
 */

char *rot13(char *a)
{
	int i;
	int x;
	char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char leet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (x = 0; original[x] != '\0'; x++)
		{
			if (a[i] == original[x])
			{
				a[i] = leet[x];
				break;
			}
		}
	}
	return (a);
}
