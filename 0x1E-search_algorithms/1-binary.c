#include "search_algos.h"

/**
 * binary_search - function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to search
 *
 * Return: index if value found  or -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;
	int middle, i;

	if (array == NULL)
	{
		return (-1);
	}

	while (l <= r)
	{
		printf("Searching in array: ");

		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		middle = (l + r) / 2;
		if (array[middle] == value)
			return (middle);
		else if (value > array[middle])
			l = middle + 1;
		else
			r = middle - 1;
	}

	return (-1);
}
