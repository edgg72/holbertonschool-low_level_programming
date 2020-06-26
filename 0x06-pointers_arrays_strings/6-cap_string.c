#include "holberton.h"

/**
 * cap_string - capitalizes starting letters
 * @x: string
 * Return: string
 */

char *cap_string(char *x)
{
int i = 0;
while (*(x + i) != '\0')
{
if (*(x + (i + 1)) != '\0')
{
if (*(x + i) == '\t')
{
*(x + i) = ' ';
if (*(x + (i + 1)) >= 'a' && *(x + (i + 1)) <= 'z')
*(x + (i + 1)) = *(x + (i + 1)) - 32;
}
else if (*(x + i) == ',' || *(x + i) == ' ' || *(x + i) == 9)
{
if (*(x + (i + 1)) >= 'a' && *(x + (i + 1)) <= 'z')
*(x + (i + 1)) = *(x + (i + 1)) - 32;
}
else if (*(x + i) == 10 || *(x + i) == ';' || *(x + i) == '.')
{
if (*(x + (i + 1)) >= 'a' && *(x + (i + 1)) <= 'z')
*(x + (i + 1)) = *(x + (i + 1)) - 32;
}
else if (*(x + i) == '!' || *(x + i) == '?' || *(x + i) == '"')
{
if (*(x + (i + 1)) >= 'a' && *(x + (i + 1)) <= 'z')
*(x + (i + 1)) = *(x + (i + 1)) - 32;
}
else if (*(x + i) == '(' || *(x + i) == ')')
{
if (*(x + (i + 1)) >= 'a' && *(x + (i + 1)) <= 'z')
*(x + (i + 1)) = *(x + (i + 1)) - 32;
}
else if (*(x + i) == '{' || *(x + i) == '}')
{
if (*(x + (i + 1)) >= 'a' && *(x + (i + 1)) <= 'z')
*(x + (i + 1)) = *(x + (i + 1)) - 32;
}
}
i++;
}
return (x);
}
