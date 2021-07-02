#include "lists.h"

/**
 * dlistint_len - find the number of elements in a linked dlistint_t list
 * @h: header of the dlistint_t list
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}