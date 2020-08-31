#include "holberton.h"

/**
* swap_int - swaps values for two variables.
* @a: variable one
* @b: variable two
* Return: void.
*/

void swap_int(int *a, int *b)
{
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}
