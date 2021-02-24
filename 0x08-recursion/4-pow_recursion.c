#include "holberton.h"

/**
 * _pow_recursion - finds the value of x to the y power
 * @x: value 1
 * @y: value 2
 * Return: x to the y power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
