#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips = 0;
	unsigned long int check;

	check = n ^ m;
	while (check > 0)
	{
		flips += (check & 1);
		check >>= 1;
	}
	return (flips);
}
