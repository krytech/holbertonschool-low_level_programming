#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * @array: pointer to the first element in the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the first index where teh value is found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = sqrt(size);

	if (!array || size == 0)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += jump;
	}
	i -= jump;
	printf("Value found between indexes [%lu] and [%lu]\n", i, i + jump);
	for (; i <= (i + jump) && i < size; i++, jump--)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
