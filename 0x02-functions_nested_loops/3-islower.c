#include "holberton.h"
#include <ctype.h>
/**
* _islower - check uppercase or otherwise.
* @c: evaluation
* Return: Always 0.
*/

int _islower(int c)
{


if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}


}
