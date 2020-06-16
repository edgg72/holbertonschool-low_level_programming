#include "holberton.h"
/**
* main - program that prints the alphabet
* Return: returning zero
*/

int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
_putchar(c);
}
_putchar('\n');


}
