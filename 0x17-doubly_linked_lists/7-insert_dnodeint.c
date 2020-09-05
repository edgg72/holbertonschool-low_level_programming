#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to first node
 * @idx: index
 * @n: value of new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux = *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 0)
	{
		aux = aux->next;
		if (aux == NULL)
			return (NULL);

		idx--;	
	}

	if (aux->next == NULL)
		return (add_dnodeint_end(h, n));

	new->n = n;
	new->prev = aux;
	new->next = aux->next;
	aux->next->prev = new;
	aux->next = new;

	return (new);
}