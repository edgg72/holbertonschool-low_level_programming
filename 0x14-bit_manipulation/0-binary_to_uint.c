#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer pointing to a string of 0 an 1 chars
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int result, i, pow;
	result = 0;
	i = 0;
	pow = 1;

	if (b == NULL)
	{
		return (0);
	}


	while (b[i] != '\0')
	{
		i++;
	}

	i--;

	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		result = result + (b[i] - 48) * pow;

		pow *= 2;
		i--;
	}
	return (result);
}
