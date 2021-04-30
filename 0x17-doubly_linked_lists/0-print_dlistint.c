#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: header of the dlistint_t list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
