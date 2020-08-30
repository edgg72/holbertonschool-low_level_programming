#include "holberton.h"

/**
* puts_half -  prints half of a string
* @str: string
* Return: void.
*/

void puts_half(char *str)
{
  int i = 0;
  int j;

  while (*(str + i) != '\0')
  {
    i++;
  }

  j = i / 2;
  if (i % 2 != 0)
  {
    j++;
  }
  while (j < i)
  {
    _putchar(*(str + j));
    j++;
  }
  _putchar('\n');
}
