#include "holberton.h"

/**
 * _strspn - finds the length of a prefix substring
 * @s: string to check
 * @accept: use these values to find the length
 * Return: string length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int x = 0;
	int match = 0;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			match = 0;
			if (s[i] == accept[x])
			{
				match = 1;
				break;
			}
		}
		if (!match)
		{
			break;
		}
	}
	return (i);
}
