#include "holberton.h"

int modulo(int num, int div);
int is_prime_number(int n);

/**
 * modulo - Checks the number is divisible.
 * @num: number
 * @div: divisor
 *
 * Return: 0 or 1
 */
int modulo(int num, int div)
{
if (num % div == 0)
{
return (0);
}
if (div == num / 2)
{
return (1);
}
return (modulo(num, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: number
 *
 * Return: 0 or 1.
 */
int is_prime_number(int n)
{
int div = 2;
if (n <= 1)
{
return (0);
}
if (n >= 2 && n <= 3)
{
return (1);
}
return (modulo(n, div));
}
