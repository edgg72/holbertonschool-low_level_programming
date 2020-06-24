#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
int i = 0, j = 0;
char str[1000];
while (*(s + i))
{
*(str + i) = *(s + i);
i++;
}
i = i - 1;
while (i >= 0)
{
*(s + i) = *(str + j);
j++;
i--;
}
}
