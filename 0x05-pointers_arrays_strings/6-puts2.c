#include "holberton.h"

/**
*  puts2 -  prints every other character of a string
*  @str: string
* Return: void.
*/

void puts2(char *str)
{
int i = 0;
char c[10];
while (i < 11)
{
c[i] = *(str + i);
i++;
}
i = 0;
while (i < 11)
{
if (i == 0)
{
_putchar(c[i]);
i++;
}
if (i % 2 == 0)
{
_putchar(c[i]);
}
i++;
}
_putchar('\n');
}
