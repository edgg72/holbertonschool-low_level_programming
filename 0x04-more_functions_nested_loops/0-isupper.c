#include "holberton.h"
/**
* _isupper - returns 1 if a letter is uppercase, 0 otherwise
*  @c: evaluation variable
* Return: int c.
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
