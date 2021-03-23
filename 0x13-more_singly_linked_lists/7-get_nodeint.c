#include "lists.h"

/**
 * get_nodeint_at_index - gets the 'n'th node in the listint_t list
 * @head: pointer to the start of the listint_t list
 * @index: 'n'th node
 * Return: 'n'th node, otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index; i++) /* go through the list to nth place */
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
