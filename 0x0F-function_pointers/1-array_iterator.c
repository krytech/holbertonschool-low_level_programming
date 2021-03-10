#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: array
 * @size: size of the array
 * @action: pointer to fuction
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
