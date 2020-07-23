#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 * @h: pointer to the start the list
 *
 * Return: nodes
 */
size_t list_len(const list_t *h)
{
const list_t *aux;
unsigned int i;

aux = h;
for (i = 0; aux; i++)
aux = aux->next;
return (i);
}
