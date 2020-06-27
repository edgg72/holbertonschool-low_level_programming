#include "holberton.h"

/**
 * _memset - fills n number of bytes with b value
 * @s: pointer
 * @b: replacer
 * @n: bytes to be replaced
 * Return: pointer modified
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned  int i = 0;
unsigned  int j = 0;
while (*(s + i) != '\0')
{
i++;
}
while (j < n)
{
*(s + j) = b;
j++;
}
return (s);
}
