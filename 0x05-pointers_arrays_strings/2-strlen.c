#include "holberton.h"

/**
* _strlen - check the code for Holberton School students.
* @s: variable
* Return: lenght of string.
*/

int _strlen(char *s)
{
  int x = 0;

  while (*(s + x) != '\0')
    x++;
  
  return (x);
}
