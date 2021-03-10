#include "3-calc.h"
#include <stdio.h>


/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - subtract two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - divide two numbers
 * @a: first number
 * @b: second number
 * Return: result, error if b is 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) / (b));
}

/**
 * op_mod - remainder of the division
 * @a: first number
 * @b: second number
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) % (b));
}
