#include "holberton.h"

/**
 *print_alphabet - prints the lowercase alphabet on a new line
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}

/**
 *print_alphabet_x10 - prints the lowercase alphabet 10 times on new lines
 */


void print_alphabet_x10(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		print_alphabet();
	}
}
