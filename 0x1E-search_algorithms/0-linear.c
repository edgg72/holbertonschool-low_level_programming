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
	size_t i = 0;

	if (array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
