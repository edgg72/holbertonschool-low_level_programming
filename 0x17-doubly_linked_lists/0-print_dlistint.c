#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head pointer
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{

	unsigned int i;

	if (h == NULL)
		return (0);

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
