#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of m
 * @height: height of m
 * Return: returns a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
int *m, i, j, k;

if (width <= 0 || height <= 0)
return (NULL);

m = malloc(height * sizeof(int *));

if (m == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
m[i] = malloc(width * sizeof(int));
if (m[i] == NULL)
{
i--;
while (i >= 0)
{
free(m[i]);
i--;
}
free(m);
return (NULL);
}
}
for (j = 0; j < height; j++)
{
for (k = 0; k < width; k++)
{
m[j][k] = 0;
}
}
return (m);
}
