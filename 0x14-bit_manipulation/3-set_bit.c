#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number to replace
 * @index: index to replace
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int mod;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mod = 1 << index;
	*n = *n | mod;
	return (1);
}
