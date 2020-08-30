#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: function to compare
 *
 * Return: Returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
  int i, x;

  if (size > 0 && array && cmp)
  {
    i = 0;
    while (i < size)
    {
      x = cmp(array[i]);
      if (x)
        break;
      i++;
    }
    if (i < size)
      return (i);
  
  }
  return (-1);
}
