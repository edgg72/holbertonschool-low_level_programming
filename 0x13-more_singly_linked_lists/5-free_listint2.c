#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -  frees a listint_t list.
 * @head: head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		aux = (*head)->next;
		free(head);
		*head = aux;
	}
	head = NULL;
}
