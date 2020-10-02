#include "holberton.h"

/**
 * _strcmp - compares a string to another
 * @s1: string 1
 * @s2: string 2
 * Return: resulting string
 */

int _strcmp(char *s1, char *s2)
{
  int result = 0;

  while (*s1 != '\0')
  {
    if (*s1 > *s2)
    {
      result = (*s1 - *s2);
      return (result);
    }
    if (*s2 > *s1)
    {
      result = (*s2 - *s1);
      result = result *(-1);
      return (result);
    }
    s1++;
    s2++;
  }
  if (*s2 != '\0')
  {
    result = 0;
    return (result);
  }
  return (result);
}