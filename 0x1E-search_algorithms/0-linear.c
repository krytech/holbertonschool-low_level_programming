#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: pointer to the first element in the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the first index where the value is found, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
