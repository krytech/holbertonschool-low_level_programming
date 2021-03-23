#include "lists.h"

/**
 * find_listint_loop - finds where the list loops
 * @head: pointer to the start of the list
 * Return: address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr, *fast_ptr;

	/* both start at head */
	slow_ptr = head;
	fast_ptr = head;

	/* go through the loop until a match is found */
	while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr) /* if they match */
		{
			slow_ptr = head; /* set slow ptr to head */
			while (slow_ptr != fast_ptr) /* find the position */
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}
			return (slow_ptr);
		}
	}
	return (NULL);
}
