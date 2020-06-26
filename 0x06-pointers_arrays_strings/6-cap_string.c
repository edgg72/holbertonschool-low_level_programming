#include "holberton.h"

/**
 * cap_string - capitalizes starting letters
 * @x: string
 * Return: string
 */

char *cap_string(char *x)

{
int i;
if (x[0] >= 'a' && x[0] <= 'z')
{
x[0] = x[0] - 32;
}
for (i = 1; x[i] != '\0'; i++)
{
if ((x[i - 1] == ' ' || x[i - 1] == '\n' || x[i - 1] == '\t'
|| x[i - 1] == ',' || x[i - 1] == ';' || x[i - 1] == '!'
|| x[i - 1] == '?' || x[i - 1] == '"' || x[i - 1] == '('
|| x[i - 1] == ')' || x[i - 1] == '{' || x[i - 1] == '}'
|| x[i - 1] == '.') && (x[i] > 'a' && x[i] < 'z'))
{
x[i] = x[i] - 32;
}
}
return (x);
}
