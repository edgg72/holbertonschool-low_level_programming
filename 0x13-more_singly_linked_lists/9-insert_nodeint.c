#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: head double pointer
 * @idx: index
 * @n: value
 *
 * Return: pointer to the indexed node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *aux, *newnode;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		aux = *head;
		for (i = 0; i < idx - 1 && aux != NULL; i++)
		{
			aux = aux->next;
		}

		if (aux == NULL)
			return (NULL);
	}


	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	newnode->next = aux->next;
	aux->next = newnode;
	return (newnode);
}
