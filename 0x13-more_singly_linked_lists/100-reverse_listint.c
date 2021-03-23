#include "lists.h"

/**
 * reverse_listint - reverse the listint_t list
 * @head: pointers to the start of the list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	if (!head)
		return (NULL);

	prev = NULL;
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (current);
}
