#include "holberton.h"

/**
 * sqrt_helper - helps find the square root of n
 * @n: value to square
 * @root: testing to find square root
 * Return: square root if exists, -1 if not
 */

int sqrt_helper(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (sqrt_helper(n, root + 1));
}


/**
 * _sqrt_recursion - find the square root of n
 * @n: value to square root
 * Return: square root of n, -1 if not
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 0));
}
