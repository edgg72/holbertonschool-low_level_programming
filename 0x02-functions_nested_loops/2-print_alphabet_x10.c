#include "holberton.h"
/**
* print_alphabet_x10 - program that prints the alphabet 10 times
* Return: void
*/

void print_alphabet_x10(void)
{
int i;
int c;
for (i = 0; i <= 10; i++)
{
for (c = 'a'; c <= 'z'; ++c)
{
_putchar(c);
}

_putchar('\n');
}

}
