#include "lists.h"
#include <string.h> /* strdup */
#include <stdlib.h> /* malloc */

/**
 * _strlen - prints the length of a string
 * @s: string
 * Return: string length value
 */

int _strlen(const char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}


/**
 * add_node_end - adds a new node at the end of list_t
 * @head: double pointer to the start of list_t
 * @str: string to add
 * Return: pointer to the new element, otherwise NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (str == NULL)
		return (NULL);

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	if (*head == NULL)
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
