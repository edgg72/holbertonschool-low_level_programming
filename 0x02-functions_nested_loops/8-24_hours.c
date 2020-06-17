#include "holberton.h"

/**
* jack_bauer - prints hours and minutes.
*
* Return: void.
*/

void jack_bauer(void)
{
int hour = 0;
int minute = 0;
int a = 0;
int  b = 0;
int c = 0;
int d = 0;

for (hour = 0; hour < 22; hour++)
{
c = 0;
d = 0;
for (minute = 0; minute < 60; minute++)
{
putchar(a + '0');
putchar(b + '0');
putchar(':');
putchar(c + '0');
putchar(d + '0');
putchar('\n');
if (d == 9)
{
d = -1;
c++;
}
d++;
}
b++;
if (b == 9)
{
b = 0;
a++;
}
}
}
