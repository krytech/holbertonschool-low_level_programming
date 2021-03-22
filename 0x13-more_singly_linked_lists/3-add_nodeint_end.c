#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @head: double pointer to the first position in the list
 * @n: values to add to the new node
 * Return: address of the new element, otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL; /* new_node is last so make next one NULL */

	if (*head == NULL) /* if the list is empty, makes the new node head */
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
