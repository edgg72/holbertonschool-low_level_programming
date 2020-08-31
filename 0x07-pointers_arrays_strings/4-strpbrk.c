#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: substring
 * Return: substring.
 */

char *_strpbrk(char *s, char *accept)
{

  unsigned int i, j;

  for (i = 0; s[i]; i++)
  {
    for (j = 0; accept[j]; j++)
    {
      if (s[i] == accept[j])
        break;
    }
    if (accept[j] != '\0')
    return (s + i);
  }
  return (0);
}
