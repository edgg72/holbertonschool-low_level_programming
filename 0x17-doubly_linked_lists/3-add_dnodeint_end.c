#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to first node
 * @n: value
 * Return: he address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *aux;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	aux = *head;
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	newnode->next = NULL;
	   newnode->prev = aux;
	   aux->next = newnode;
	return (newnode);
}
