#include "holberton.h"
void _puts(char *s)
{
  int x = 0;
  while (*(str + x) != '\0')
    {
      _putchar(str[x]);
      x++;
    }
  _putchar('\n');
}
