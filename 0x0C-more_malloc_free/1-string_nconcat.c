#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n:  how many characters from s2 will be in the new string
 * Return: newstring
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, x;
char *newstr;

if (s1 == NULL)
i = 0;
else
{
for (i = 0; s1[i]; i++)
;
}
if (s2 == NULL)
j = 0;
else
{
for (j = 0; s2[j]; j++)
;
}

if (j > n)
j = n;

newstr = malloc(sizeof(char) * (i + j + 1));

if (newstr == NULL)
return (NULL);

for (x = 0; x < i; x++)
newstr[x] = s1[x];
for (x = 0; x < j; x++)
newstr[x + i] = s2[x];

newstr[i + j] = '\0';
return (newstr);
}
