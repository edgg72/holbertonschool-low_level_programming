#include "holberton.h"

/**
 * rot13 - encodes to rot13
 * @x: string
 * Return: string
 */

char *rot13(char *x)
{
  int i = 0, j = 0;
  char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

  while (*(x + i) != '\0')
  {
    j = 0;
    while (j <= 52)
    {
      if (alpha[j] == *(x + i))
      {
        *(x + i) = rot[j];
        j++;
        break;
      }
      j++;
    }
    i++;
  }
  return (x);
}
