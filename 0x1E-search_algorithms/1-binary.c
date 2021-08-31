#include "search_algos.h"

/**
 * print_array - helper function to print the array
 * @array: pointer to the array
 * @left: left most index
 * @right: right most index
 * Return: void
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i = 0;

	printf("Searching in the array: ");
	for (i = left; i <= right; i++)
	{
		if (i != right)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element in the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the first index where the value is found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid = 0;

	if (array)
	{
		while (left <= right)
		{
			print_array(array, left, right);
			mid = (left + right) / 2;
			if (array[mid] == value)
				return (mid);
			else if (array[mid] > value)
				right = mid - 1;
			else
				left = mid + 1;
		}
		return (-1);
	}
	return (-1);
}
