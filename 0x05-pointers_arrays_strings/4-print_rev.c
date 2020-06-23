#include "holberton.h"

/**
* print_rev -  prints a string on reverse
*
* Return: void.
*/

void print_rev(char *s)
{
int x = 0;
int y = 0;
char rs[100];
char c;
while (*(s + x) != '\0')
{
x++;
}
while (x > 0)
{
rs[y] = *(s + x);
y++;
x--;
}
x = 0;

while (rs[x] != '\0')
{
c = rs[x];  
_putchar(c);
x++;
}
}
