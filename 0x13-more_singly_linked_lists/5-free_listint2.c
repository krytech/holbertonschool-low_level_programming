#include "lists.h"

/**
 * free_listint2 - frees the listint_t list, sets head to NULL
 * @head: double pointer to start of linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
