#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the index in the list
 * @head: pointer to the start of the list
 * @index: index of the node that should be deleted
 * Return: 1 if successful, otherwise -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *temp2;

	if (!*head)
		return (-1);

	temp = *head;
	if (index == 0) /* if index is 0, delete 1st node, move head ahead */
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	/* go to index place in the list */
	for (i = 0; i < index - 1 && temp; i++)
		temp = temp->next;
	if (temp == NULL) /* if index is out of list range */
		return (-1);

	temp2 = temp->next; /* node to delete */
	temp->next = (temp->next)->next; /* linking after deleted node */
	free(temp2); /* boom */

	return (1);
}
