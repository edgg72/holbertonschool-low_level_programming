#include "holberton.h"
/**
* _strncpy - copies string to another
* @dest: string1
* @src: string2
* @n: how many bytes to cpy
*
* Return: address of dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && *(src + i))
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
}
