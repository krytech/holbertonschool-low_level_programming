#include "holberton.h"

/**
 * match - helper to check after wc for match
 * @s1: string 1
 * @s2: string 2
 * @afterwc: placeholder for after wc
 * Return: 1 if matched, 0 if not
 */

int match(char *s1, char *s2, char *afterwc)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == '\0' && *s2 == '*')
		return (match(s1, s2 + 1, s2 + 1));

	if (*s1 == '\0' && *s2 != '\0')
		return (0);

	if (*s2 == '*')
		return (match(s1, s2 + 1, s2 + 1));

	if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1, afterwc));

	else
		return (match(s1 + 1, afterwc, afterwc));
}

/**
 * wildcmp - compare two strings with wc
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if matched, 0 if not)
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	else if (*s2 == '*')
		return (match(s1, (s2 + 1), (s2 + 1)));

	else
		return (0);
}
