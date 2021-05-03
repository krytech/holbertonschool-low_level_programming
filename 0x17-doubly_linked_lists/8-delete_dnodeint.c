#include "lists.h"

/**
 * delete_dnodeint_at_index - deleted the node at the index of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: position to delete in the list
 * Return: 1 if successful, otherwise -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_node, *ph = *head;
	unsigned int i;

    if (!*head)
        return (-1);

    if (index == 0)
    {
        del_node = ph;
        *head = ph->next;
        if (ph->next)
            ph->next->prev = NULL;
        free(del_node);
        return (1);
    }
    for (i = 1; ph; i++, ph = ph->next)
        if (i == index)
        {
            del_node = ph->next;
            ph->next = del_node->next;
            if (ph->next)
                ph->next->prev = ph;
            free(del_node);
            return (1);
        }
    return (-1);
}
