#include "holberton.h"
/**
 * _memcpy - copies memory
 * @dest: destination
 * @src: area to cpy
 * @n: bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int i = 0;

  while (i < n)
  {
    *(dest + i) = *(src + i);
    i++;
  }
  return (dest);
}
