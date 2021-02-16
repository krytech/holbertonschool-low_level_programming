#include "holberton.h"

/**
 * swap_int - swaps int values a and b
 * @a: first int
 * @b: second int
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int ph;

	ph = *a;
	*a = *b;
	*b = ph;
}
