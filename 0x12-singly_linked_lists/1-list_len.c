#include "lists.h"

/**
 * list_len - counts the number of elements in the linked list_t list
 * @h: pointer to the head of the list_t list
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
