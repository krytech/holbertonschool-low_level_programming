#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t, and
 * retuns the head node's data (n)
 * @head: double pointer to the start of the linked list
 * Return: the deleted node's data, otherwise 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;

	data = temp->n; /* saves n to data to return */

	*head = temp->next; /* moves head to next node */
	free(temp); /* frees first node */

	return (data);
}
