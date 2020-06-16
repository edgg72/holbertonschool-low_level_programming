#include "holberton.h"

/**
* times_table - print times table 0-9.
*
* Return: times table.
*/

void times_table(void)
{
int i, j, x;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
x = i * j;
_putchar(x);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
