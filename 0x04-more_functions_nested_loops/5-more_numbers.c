#include "holberton.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*
* Return: void.
*/

void more_numbers(void)
{
int i, x;
i = 0;
x = 0;
while (i <= 10)
{
int j;
j = 0;
while (j <= 14)
{
x = j;
if (j >= 10)
{
_putchar(49);
x = (j - 10);
}
_putchar(x + '0');
j++;
}
_putchar('\n');
i++;
}
}


