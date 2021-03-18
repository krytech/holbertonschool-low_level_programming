#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of the list_t list
 * @h: pointers to the head of the list_t list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		num++;
		h = h->next;
	}
	return (num);
}
