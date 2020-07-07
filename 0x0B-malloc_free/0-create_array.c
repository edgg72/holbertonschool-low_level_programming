#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: array
 * Return: pointer to the array or NULL if it fails
 */


char *create_array(unsigned int size, char c)
{

char *p = (char *)malloc(size * sizeof(char));
if (size == 0)
{
return (NULL);
}
else
{
unsigned int i;
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}
}
