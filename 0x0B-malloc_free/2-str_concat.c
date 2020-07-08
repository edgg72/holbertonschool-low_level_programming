#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: string 1
 * @s2: string 2.
 *
 * Return: NULL if it fails, if not, newstr
 */
char *str_concat(char *s1, char *s2)
{
char *newstr;
int i;
int j = 0;
int len = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] || s2[i]; i++)
len++;

newstr = malloc(sizeof(char) * len);

if (newstr == NULL)
return (NULL);

for (i = 0; s1[i]; i++)
{
newstr[j] = s1[i];
j++;
}

for (i = 0; s2[i]; i++)
{
newstr[j] = s2[i];
j++;
}
return (newstr);
}
