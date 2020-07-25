#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - gets length of a string
 * @str: string 
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
unsigned int i;

for (i = 0; str[i]; i++)
;
return (i);
}

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *aux;

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
new->len = _strlen(new->str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
aux = *head;
while (aux->next)
aux = aux->next;
aux->next = new;
return (new);
}
