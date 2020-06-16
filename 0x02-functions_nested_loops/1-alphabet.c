#include "holberton.h"
/**
* main - program that prints the alphabet
* Return: returning zero
*/

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
_putchar(c);
}
_putchar('\n');

return (0);
}
