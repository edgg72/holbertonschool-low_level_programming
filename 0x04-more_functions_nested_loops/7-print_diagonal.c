#include "holberton.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: evaluation variable
* Return: void.
*/

void print_diagonal(int n)
{
int x, j, z;
x = 0;
j = n - (n - 1);
z = 0;
if (n > 0)
{
while (x < j)
{
if (x < 1)
{
_putchar(92);
}
else
{
z = 0;
while (z < j)
{
if (z == (j - 1))
{
_putchar(92);
}
else
{
_putchar(' ');
}
z++;
}
}
x++;
if (j < n)
{
j++;
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
