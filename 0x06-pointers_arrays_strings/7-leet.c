#include "holberton.h"

/**
 * leet - encodes to 1337
 * @x: string
 * Return: string
 */

char *leet(char *x)
{
int i = 0, j = 0;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";
while (*(x + i) != '\0')
{
while (j < 9)
{
if (letters[j] == *(x + i))
{
*(x + i) = numbers[j];
}
j++;
}
i++;
}
return (x);
}
