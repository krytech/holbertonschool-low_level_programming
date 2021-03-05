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
	int *arr;
	int i;
	int size = (max - min + 1);

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
