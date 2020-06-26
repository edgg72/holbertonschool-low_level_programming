#include "holberton.h"

/**
 * _atoi - turns string to integer.
 * @x: string
 *
 * Return: The integer value of the converted string.
 */

int _atoi(char *x)

{
int i = 1;
unsigned int n = 0;
do {
if (*x == '-')
i *= -1;
else if (*x >= '0' && *x <= '9')
n = (n * 10) + (*x - '0');
else if (n > 0)
break;
} while (*x++);
return (n *i);
}
