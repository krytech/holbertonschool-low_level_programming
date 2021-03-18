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
 * add_node - adds a new node at the begining of list_t
 * @head: double pointer to the start of list_t
 * @str: string to add
 * Return: pointer to the new element in the list, otherwise NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
