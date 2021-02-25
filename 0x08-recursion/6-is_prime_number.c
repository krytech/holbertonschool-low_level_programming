#include "holberton.h"

/**
 * prime_helper - helps check if n is a prime number
 * @n: value to check
 * @divisor: checks if n is a prime
 * Return: 1 for prime, 0 for not
 */

int prime_helper(int n, int divisor)
{
	if (n == divisor)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (prime_helper(n, divisor + 1));
}


/**
 * is_prime_number - checks if n is a prime number
 * @n: value to check
 * Return: 1 for prime, 0 for not
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime_helper(n, 2));
}
