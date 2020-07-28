#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -  frees a listint_t list.
 * @head: head
 * Return: void
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
