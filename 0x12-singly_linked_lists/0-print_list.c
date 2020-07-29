#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: nodes
 */
size_t print_list(const list_t *h)
{
const list_t *aux;
unsigned int i;

aux = h;
for (i = 0; aux; i++)
{
if(aux->str)
{
printf("[%u] %s\n", aux->len, aux->str);
}
else
{
printf("[0] (nil)\n");
}
aux = aux->next;
}
return (i);
}
