#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to search
 * Return: index or -1
*/

int jump_search(int *array, size_t size, int value)
{
	int i;
	int left = 0;
	int right = sqrt(size);

	while (array[right] <= value && right < (int)size)
	{
		left = right;
		right += sqrt(size);

		if (right > (int)size - 1)
			right = size;
	}
	for (i = left; i < right; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
