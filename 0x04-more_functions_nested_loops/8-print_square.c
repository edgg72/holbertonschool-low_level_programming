#include "holberton.h"
/**
* print_square - prints a square
* @size: size of the square
* Return: void.
*/

void print_square(int size)
{
  if (size > 0)
  {
    int i, j;
    i = 0;
    j = 0;

    for (i = 0; i < size; i++)
    {

      for (j = 0; j < size; j++)
      {
        _putchar(35);
      }
      _putchar('\n');
    }
  }
  else
  {
    _putchar('\n');
  }
}
