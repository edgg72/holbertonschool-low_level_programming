#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data
 *                (n) of a dlistint_t linked list.
 * @head: pointer to first node
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
