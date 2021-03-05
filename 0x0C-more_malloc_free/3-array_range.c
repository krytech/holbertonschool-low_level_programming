#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: smallest int
 * @max: largest int
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *n_array;
	int i;
	int size = max - min + 1;

	if (min > max)
		return (NULL);

	n_array = malloc(sizeof(int) * size);

	if (n_array == NULL)
		return (NULL);

	for (i = 0, i < size; i++)
	{
		n_array[i] = min;
		min++;
	}
	return (n_array);
}
