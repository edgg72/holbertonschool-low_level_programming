#include "holberton.h"

/**
 * factorial - factorial of a number
 * @n: number to get factorial of
 * Return: factorial result
 */

int factorial(int n)
{
  if (n < 0)
    return (-1);
  if (n <= 1)
    return (1);

  return (n * factorial(n - 1));
}
