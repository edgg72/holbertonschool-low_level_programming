#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 *                            index of a dlistint_t linked list.
 * @head: pointer to first node
 * @index: index
 *
 * Return: sum
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	aux = *head;
	if (index == 0)
	{
		*head = aux->next;
		if (aux->next != NULL)
		{
			aux->next->prev = NULL;
		}
		free(aux);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (aux->next == NULL)
			return (-1);
		aux = aux->next;
	}
	aux->prev->next = aux->next;
	if (aux->next != NULL)
		aux->next->prev = aux->prev;
	free(aux);
	return (1);
}
