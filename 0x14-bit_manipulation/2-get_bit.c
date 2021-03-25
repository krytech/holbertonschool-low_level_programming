#include "holberton.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: number to check
 * @index: position of number to check
 * Return: value, otherwise -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
