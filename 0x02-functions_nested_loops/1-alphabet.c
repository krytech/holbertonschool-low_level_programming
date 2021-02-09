#include "holberton.h"

/** 
 *print_alphabet - print lowercase alphabet followed by a new line
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
