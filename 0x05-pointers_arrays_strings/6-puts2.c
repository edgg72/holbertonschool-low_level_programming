#include "holberton.h"

/**
*  puts2 -  prints every other character of a string
*  @str: string
* Return: void.
*/

void puts2(char *str)
{
  int i = 0;
  int x = 0;

  while (*(str + x) != '\0')
  {
    x++;
  }

  while (*(str + i) != '\0')
  {
    _putchar(*(str + i));
    if ((i + 2) <= x)
    {
      i = i + 2;
    }
    else
    {
    break;
    }
  }
  _putchar('\n');
}
