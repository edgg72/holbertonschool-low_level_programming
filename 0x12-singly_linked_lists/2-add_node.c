#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the beginning of a linked list
 * @head: double pointer to list
 * @str: string to add to the new node
 *
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; new->str[i]; i++)
	{
		;
	}

	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
