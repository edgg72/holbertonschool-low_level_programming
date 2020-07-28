#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t linked list.
 * @head: head pointer
 *
 * Return: sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{

	int total = 0;

	while (head != NULL)
	{
		total = total + head->n;
		head = head->next;
	}

	return (total);
}
