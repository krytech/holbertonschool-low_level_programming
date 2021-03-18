#include "lists.h"
#include <stdlib.h> /* free */

/**
 * free_list - frees the memory used for list_t
 * @head: pointer to the start of list_t
 * Return: void
 */

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
