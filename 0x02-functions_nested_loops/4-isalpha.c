#include "holberton.h"
#include <stdio.h>
/**
* _isalpha - check if is a letter
*  @c: evaluation variable
* Return: an int
*/

int _isalpha(int c)
{
if (isalpha(c) != 0)
{
return (1);
}
else
{
return (0);
}
}
