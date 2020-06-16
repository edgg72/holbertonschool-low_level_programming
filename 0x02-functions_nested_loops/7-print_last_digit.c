#include "holberton.h"
/**
* print_last_digit - print the last digit of a number.
* @i: evaluation variable
* Return: last digit.
*/

int print_last_digit(int i)
{
i = i % 10;
if (i >= 0)
{
_putchar(i + '0');
return (i);
}
else
{
i = i*(-1);
_putchar(i + '0');
return (i);
}
}
