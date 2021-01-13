#include "search_algos.h"

/**
* linear_search - searches for a value in an array of integers
* @array: array to be searched
* @size: size of array
* @value: value to look for
* Return: index if value found, -1 otherwise
*/

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);

	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((size_t)i);
		i++;
	}

	return (-1);
}
