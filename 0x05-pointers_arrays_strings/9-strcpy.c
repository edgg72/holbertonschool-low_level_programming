#include "holberton.h"

/**
* _strcpy - copies a pointer to another
* @s1: pointer 1
* @s2: pointer 2
* Return: pointer.
*/

char *_strcpy(char *s2, char *s1)
{

  int i = 0;

  while (*(s1 + i))
  {
    *(s2 + i) = *(s1 + i);
    i++;
  }
  *(s2 + i) = '\0';
  return (s2);
}
