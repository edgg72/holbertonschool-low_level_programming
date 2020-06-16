#include "holberton.h"
/**
* _abs - check the code for Holberton School students.
* @i: evaluation variable
* Return: absolute value of integer.
*/

int _abs(int i)
{
if (i >= 0)
{
return (i);
}
else
{
i = i*(-1);
return (i);
}
}
