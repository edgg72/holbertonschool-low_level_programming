#include "holberton.h"
#include<stdio.h>
/**
* print_to_98 - print to 98 starting with the input number.
* @n: evaluation variable
* Return:  0.
*/



void print_to_98(int n)
{
if (n == 98)
{
printf("%d", 98);
}
else if (n > 98)
{
int i;
for (i = n; i != 98; i--)
{
printf("%d", i);
_putchar(',');
_putchar(' ');
}
}
else
{
int i;
for (i = n; i != 98; i++)
{
if (i < 0)
{
int x = i * (-1);
printf("%d", x);
}
else
{
printf("%d", i);
}
_putchar(',');
_putchar(' ');
}
}
}
