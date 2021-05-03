#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: numberic value to add to the list
 * Return: address of the new element, otherwise NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *ph = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	while (ph && ph->next)
		ph = ph->next;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = ph;

	if (ph)
		ph->next = new_node;

	if (!*head)
		*head = new_node;

	return (new_node);
}
