#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the function used to compare values
 * Return: index of the first matched element, otherwise -1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);

	return (-1);
}
