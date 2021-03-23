#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: pointer to the start of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp; /* placeholder to move to next and free previous */

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
