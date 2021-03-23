#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the start of the listint_t list
 * @idx: place where the new node should be added
 * @n: value to add
 * Return: address of the new node, otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t)); /* malloc new node */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* adds value to new node */

	if (idx == 0) /* if idx is 0 */
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	/* when idx is > than 0 go through list */
	for (i = 0; i < idx - 1 && temp; i++)
		temp = temp->next;
	if (temp == NULL) /* if idx is > than the number of nodes in the list */
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next; /* next link */
	temp->next = new_node; /* before link */

	return (new_node);
}
