#include "holberton.h"

/**
 * get_endianness - checks for endianness
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char*) &x;

	return (int)*c;
}
