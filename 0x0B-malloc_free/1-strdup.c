#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 *  returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: pointer to the array or NULL if it fails
 */

char *_strdup(char *str)
{
char *p;
unsigned int i, arraysize;
if (str == NULL)
{
return (NULL);
}
arraysize = sizeof(str);
if (arraysize == 0)
{
return (NULL);
}
p = (char *)malloc(arraysize *sizeof(char));
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < arraysize + 1; i++)
{
p[i] = str[i];
}
return (p);
}
