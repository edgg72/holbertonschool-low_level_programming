#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: matrix
 * @size: size of matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
  int i, j, x, r1 = 0, r2 = 0;

  for (i = 0; i < size; i++)
  {
    x = (i * size) + i;
    r1 += *(a + x);
  }

  for (j = 0; j < size; j++)
  {
    x = (j * size) + (size - 1 - j);
    r2 += *(a + x);
  }
  printf("%i, %i\n", r1, r2);
}
