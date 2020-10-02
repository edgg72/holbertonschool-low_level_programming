#include "holberton.h"

/**
 * _strcat  - it concatenates two strings
 * @dest: destiny string
 * @src: source string
 * Return: both strings
 */

char *_strcat(char *dest, char *src)
{
  int i, j;

  i = 0;
  j = 0;
  while (*(dest + i) != '\0')
  {
    i++;
  }
  while (*(src + j) != '\0')
  {
    *(dest + i) = *(src + j);
    j++;
    i++;
  }
  *(dest + i) = '\0';
  return (dest);
}