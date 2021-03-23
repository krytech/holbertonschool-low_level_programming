#include "lists.h"

/**
 * sum_listint - sums all the data (n) of the listint_t list
 * @head: pointer to the start of the listint_t list
 * Return: the sum of n for all nodes in the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
