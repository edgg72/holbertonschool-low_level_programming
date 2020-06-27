#include "holberton.h"


/**
 * _strchr - locates a character
 * @s: string
 * @c: character to be found
 * Return: rest of string starting from the found character
 */

char *_strchr(char *s, char c)
{
int i = 0;

while (*(s + i) != '\0')
{
if (*(s + i) == c)
{
break;
}
i++;
}
if (*(s + i) == c)
{
return ((s + i));
}
else
{
return ('\0');
}
}
