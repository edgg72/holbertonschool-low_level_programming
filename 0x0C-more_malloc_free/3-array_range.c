#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: number 1
 * @max: number 2
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
int i, j;
int *p;

if (min > max)
return (NULL);

j = max - min + 1;
p = malloc(sizeof(int) * j);

if (p == NULL)
return (NULL);

for (i = 0; i < j; i++, min++)
{
p[i] = min;
}

return (p);
}
