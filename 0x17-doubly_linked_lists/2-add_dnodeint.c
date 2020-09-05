#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to first node
 * @n: value
 * Return:  the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = *head;
	new->prev = NULL;
	(*head)->prev = new;
	(*head) = new;
	return (new);
}
