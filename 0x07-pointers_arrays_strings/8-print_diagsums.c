#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 *                  of integers
 * @a: array
 * @size: size of array
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int row;
	int sum1 = 0;
	int sum2 = 0;

	for (row = 0; row < size; row++)
	{
		sum1 = sum1 + a[(row * size) + row];
	}
	for (row = size - 1; row >= 0; row--)
	{
		sum2 += a[row * size + (size - row - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
