#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index position where the new node should be added
 * @n: numberic value to add at the index position
 * Return: address of the new node, otherwise NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *ph = *h;
    unsigned int i;

    if (idx == 0)
        return (add_dnodeint(h, n));

    new_node = malloc(sizeof(dlistint_t));
        if (!new_node)
            return (NULL);

    new_node->n = n;

    for (i = 1; ph; i++, ph = ph->next)
        if (i == idx)
        {
            new_node->next = ph->next;
            if (new_node->next)
                new_node->next->prev = new_node;
            new_node->prev = ph;
            ph->next = new_node;

            return (new_node);
        }
    free(new_node);
    return (NULL);
}
