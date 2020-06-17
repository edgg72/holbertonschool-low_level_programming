#include "holberton.h"

/**
* jack_bauer - prints hours and minutes.
*
* Return: void.
*/

void jack_bauer(void)
{
int hour, minute, a, b, c, d;
for (hour = 0; hour < 24; hour++)
{
a = hour / 10;
b = hour % 10;
for (minute = 0; minute < 60; minute++)
{
c = minute / 10;
d = minute % 10;
_putchar('0' + a);
_putchar('0' + b);
_putchar(':');
_putchar('0' + c);
_putchar('0' + d);
_putchar('\n');
}
}
}
