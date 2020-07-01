#include "holberton.h"
/**
 *_sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: root
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (aux(1, n));
}


/**
 * aux - evaluates sq root
 * @i: arg1
 * @j: arg2
 *
 * Return: -1  or root
 */

int aux(int i, int j)
{
if (i * i == j)
return (i);
if (i * i > j)
return (-1);
return (aux(i + 1, j));
}
