#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at index
 * @n: number to modify
 * @index: position to modify
 * Return: 1 if successful, otherwise -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1 << index;
	return (1);
}
