#include "holberton.h"

/**
* rev_string - reverses a string
*
* Return: void.
*/

void rev_string(char *s)
{
int x = 0;
while (*(s + x) != '\0')
{
x++;
}
while (x > 0)
{
_putchar(*(s + x));
x--;
}
}
