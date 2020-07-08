#include <stdio.h>
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

for (arraysize = 0; str[arraysize]; arraysize++)
{
;
}

arraysize++;

p = (char *)malloc(arraysize * sizeof(char));

if (p == NULL)
{
free(p);
return (NULL);
}

for (i = 0; i < arraysize + 1; i++)
{
p[i] = str[i];
}

p[i] = '\0';
return (p);
}
