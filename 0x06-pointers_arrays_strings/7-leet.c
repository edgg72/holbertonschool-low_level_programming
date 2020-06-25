#include "holberton.h"

/**
 * leet - encodes to 1337
 * @x: string
 * Return: string
 */

char *leet(char *x)
{
int i = 0;
while (*(x + i) != '\0')
{
if (*(x + i) == 'a' || *(x + i) == 'A')
{
*(x + i) = 52;
}
else if (*(x + i) == 'e' || *(x + i) == 'E')
{
*(x + i) = 51;
}
else if (*(x + i) == 'o' ||  *(x + i) == 'O')
{
*(x + i) = 48;
}
else if (*(x + i) == 't' || *(x + i) == 'T')
{
*(x + i) = 55;
}
else if (*(x + i) == 'l' || *(x + i) == 'L')
{
*(x + i) = 49;
}
i++;
}
return (x);
}
