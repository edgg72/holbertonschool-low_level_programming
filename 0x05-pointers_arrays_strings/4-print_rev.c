#include "holberton.h"
/**
 * print_rev - prints a string reverse
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)

{
int i = 0;
while (*(s + i))
{
i++;
}
i = i - 1;
while (i >= 0)
{
_putchar(*(s + i));
i--;
}
_putchar('\n');
}
