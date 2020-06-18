#include "holberton.h"
/**
* print_line - draws a straight line in the terminal
* @n: evaluation variable
* Return: void.
*/

void print_line(int n)
{
int i;
i = 0;
if (n > 0)
{
while (i != n)
{
_putchar(95);
i++;
}
}
_putchar('\n');
}

