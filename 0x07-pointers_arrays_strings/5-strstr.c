#include "holberton.h"

/**
 * _strstr - finds a substring in a string
 * @haystack: stirng to check
 * @needle: chars to find
 * Return: matched string
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int x;
	int y;

	if (needle(0) == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			x = i, y = 0;
			while (needle[y] != '\0')
			{
				if (haystack[x] == needle[y])
					x++, y++;
				else
					break;
			}
			if (needle[y] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (0);
}
