#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at the index
 * @n: number to modify
 * @index: position to modify
 * Return: 1 if successful, otherwise -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;
	*n = (*n & ~mask) | ((0 << index) & mask);
	return (1);
}
