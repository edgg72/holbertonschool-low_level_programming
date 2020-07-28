#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head double pointer
 * @n: value
 * Return:  pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *aux;

	if (head == NULL)
	{
		return (NULL);
	}

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

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

	aux->next = newnode;
	return (newnode);
}
